#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"What is the largest planet in the solar system?", "What is the hottest planet?", "What planet has the most moons?", "What is second closet planet to the SunA?"};
    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune", "A. Mercury\nB. Venus\nC. Earth\nD. Mars", "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn", "A. Sun\nB. Mercury\nC. Venus\nD. Mars"};
    char answerKey[] = {'A', 'B', 'D', 'C'};
    int questionCount = sizeof(questions)/ sizeof(questions[0]);
    char guess = '\0';
    int score = 0;


    printf("*** QUIZ GAME ***\n");

    for(int i = 0; i< questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &guess);
        
        guess = toupper(guess);

        if (guess == answerKey[i]){
            printf("CORRECT!\n");
            score++;
        }
        else{
            printf("WRONG DUMMY!\n");
        }
    }

    printf("\nYour score is %d/%d", score, questionCount);



    return 0;
}