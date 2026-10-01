#include <stdio.h>
#include <time.h>
#include <stdbool.h>
//#include <unistd.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>


typedef struct{
    char City[50];
    int UtcOffset;


}Cities;

typedef struct{
    int hour;
    int minute;
}timeAlarm;

void DigitalClock();
void WorldClock();
void Alarm();
void Timer();

int main() {
    int option = 0;
    printf("*** Time Utilities ***\n");
    printf("Time Menu\n1. Digital Time\n2. World Clock\n3. Alarm\n4. Timer\n5. Power Off\n");
    scanf(" %d", &option);

    do{
        switch(option){
           case 1:
               DigitalClock();
               break;
            case 2: 
                WorldClock();
                break;
            case 3:
                Alarm();
                break;
            case 4:
                Timer();
                break;
            default:
                printf("Enter Option 1-5 dummy");
                Sleep(1000);
        }
        system("cls");
        printf("*** Time Utilities ***\n");
        printf("Time Menu\n1. Digital Time\n2. World Clock\n3. Alarm\n4. Timer\n5. Power Off\n");
        scanf(" %d", &option);
    }while(option != 5);

}   

void DigitalClock(){
    time_t rawtime = 0;
    struct tm *pTime = NULL;
    bool isRunning = true;

    while(isRunning){
        time(&rawtime);
        pTime = localtime(&rawtime);
        system("cls");
        printf("DIGITAL CLOCK\n");  
      

        printf("\r%02d:%02d:%02d\n", pTime->tm_hour, pTime -> tm_min, pTime -> tm_sec);
        printf("\nPower Button(1/0)\n");
        Sleep(1000);
       
        if (_kbhit()) {
            int key = _getch();
            if (key == '0') isRunning = false;
        }
    }
}
void WorldClock(){
    time_t rawtime = 0;
    struct tm *pTime = NULL;
    bool isRunning = true;
   
    Cities cities[] = {
    {"New York", -5},
    {"London", 0},
    {"Tokyo", 9},
    {"Sydney", 11}
    };
    
    int cityCount = sizeof(cities) / sizeof(cities[0]);
     
    while(isRunning){
        time(&rawtime);
        pTime = gmtime(&rawtime);
        system("cls");
        printf("World Clock\n");
        
        
        for(int i = 0; i < cityCount; i++){
            int localHour = ((pTime->tm_hour + cities[i].UtcOffset) % 24 + 24) % 24;
            printf("\r%s: %02d:%02d:%02d\n", cities[i].City, localHour, pTime -> tm_min, pTime -> tm_sec);
        }
        
        printf("\nPower Button(1/0)\n");
        Sleep(1000);

        if (_kbhit()) {
            int key = _getch();
            if (key == '0') isRunning = false;
            }
        }
}
void Alarm(){
    timeAlarm Set = {0};
    int choice =0;
    bool isRunning = true;

    printf("Alarm\n");
    printf("Enter time (hr:min): ");
    scanf("%d:%d", &Set.hour, &Set.minute);
    printf("Pm(1) or Am(0):");
    scanf(" %d", &choice);
    
    
    if (choice == 1 && Set.hour != 12) {
        Set.hour += 12;
        printf("Alarm Set for %d:%d Pm\n", Set.hour, Set.minute);
    }
    else if (choice == 0 && Set.hour == 12) {
        Set.hour = 0;
        printf("Alarm Set for %d:%d Am\n", Set.hour, Set.minute);
    }
    while (isRunning){
        time_t rawtime = 0;
        struct tm *pTime = NULL;
        time(&rawtime);
        pTime = localtime(&rawtime);
        system("cls");

        printf("\rCurrent time: %02d:%02d:%02d", pTime -> tm_hour, pTime -> tm_min, pTime -> tm_sec);

        if (Set.hour == pTime->tm_hour && Set.minute == pTime->tm_min){
            printf("\nBEEP BEEP!");
        }
        
        printf("\nPower Button(1/0)\n");
        
        Sleep(1000);
        
        if (_kbhit()) {
            int key = _getch();
            if (key == '0') isRunning = false;
        }

    }
}
void Timer(){
    int duration = 0;
    int remaining = 0;
    int previousDisplay = -1;
    bool isRunning = false;
    time_t startTime = 0;
    int ch = 0;

    printf("Timer\n");
    printf("Enter the timer duration in seconds: ");
    if (scanf("%d", &duration) != 1 || duration <= 0) {
        printf("Please enter a positive number of seconds.\n");
        while ((ch = getchar()) != '\n' && ch != EOF) {
        }
        Sleep(1500);
        return;
    }

    remaining = duration;
    printf("Press S to start, P to pause/resume, or 0 to return to the menu.\n");

    while (remaining > 0) {
        if (isRunning) {
            time_t elapsed = time(NULL) - startTime;
            int shown = remaining - (int)elapsed;

            if (shown <= 0) {
                remaining = 0;
                break;
            }

            if (shown != previousDisplay) {
                printf("\rTime remaining: %02d:%02d:%02d",
                       shown / 3600, (shown % 3600) / 60, shown % 60);
                fflush(stdout);
                previousDisplay = shown;
            }
        }

        if (_kbhit()) {
            int key = _getch();

            if (key == '0') {
                return;
            }
            if ((key == 's' || key == 'S') && !isRunning) {
                startTime = time(NULL);
                isRunning = true;
                previousDisplay = -1;
                printf("\nTimer started.\n");
            }
            else if ((key == 'p' || key == 'P') && isRunning) {
                time_t elapsed = time(NULL) - startTime;
                if (elapsed >= remaining) {
                    remaining = 0;
                    break;
                }
                remaining -= (int)elapsed;
                isRunning = false;
                previousDisplay = -1;
                printf("\nTimer paused. Press S to resume.\n");
            }
        }

        Sleep(100);
    }

    system("cls");
    printf("Timer complete!\n");
    Beep(750, 500);
    Sleep(1500);


}
