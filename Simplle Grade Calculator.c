#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter marks of student: ");
    scanf("%d", &marks);

    marks > 100 ? (printf("Invalid number\n"), grade = 'X') :
    marks < 0   ? (printf("Invalid number\n"), grade = 'X') :
    marks >= 90 ? (printf("Grade obtained: 'A'\n"), grade = 'A') :
    marks >= 80 ? (printf("Grade obtained: 'B'\n"), grade = 'B') :
    marks >= 70 ? (printf("Grade obtained: 'C'\n"), grade = 'C') :
    marks >= 60 ? (printf("Grade obtained: 'D'\n"), grade = 'D') :
    marks >= 33 ? (printf("Grade obtained: 'E'\n"), grade = 'E') :
                  (printf("Obtained grade: 'F' (Fail).\n"), grade = 'F');

    switch (grade) {
        case 'A': printf("Excellent work!\n"); break;
        case 'B': printf("Well done!\n"); break;
        case 'C': printf("Good job!\n"); break;
        case 'D': printf("Keep improving!\n"); break;
        case 'E': printf("You passed, but you could do better!\n"); break;
        case 'F': printf("Sorry, you failed!\n"); break;
    }

    if (grade != 'X') {
        if (grade == 'F') {
            printf("Please try again next time\n");
        } else {
            printf("Congratulations! You are eligible for the next level\n");
        }
    }
}


/* 
   Output:
   
   
   Output 1: Pass (Grade B)
   Enter marks of student: 85
   Grade obtained: 'B'
   Well done!
   Congratulations! You are eligible for the next level

   Output 2: Fail (Grade F)
   Enter marks of student: 20
   Obtained grade: 'F' (Fail).
   Sorry, you failed!
   Please try again next time

   Output 3: Invalid Input 
   Enter marks of student: 110
   Invalid number
*/
