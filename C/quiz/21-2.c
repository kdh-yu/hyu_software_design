/*
Declare a person-type array(size =𝑛, In the first line 𝑛 is given) using the person structure
and fill in the contents of the array with student's name and score.
You must define ‘void printScoreStars(Person* persons, int len)’ function
that outputs a star graph of all students in a single call.
One star is printed per five points, and the remaining score is discarded.
You must complete the sample code on page 5.
*/

#include <stdio.h>

typedef struct
{
	char name[7];
	int score;
} Person;

void printScoreStars(Person* persons, int len){
    int j = 0;
    while (j < len){
        int score = persons[j].score / 5;
        printf("%s ", persons[j].name);
        for (int i = 0; i < score; i++){
            printf("*");
        }
        printf("\n");
        j++;
    }
}

int main(){
	int n;
	scanf("%d", &n);
	
	Person person[n];
	
	for (int k = 0; k < n; k++){
        scanf("%s", person[k].name);
        scanf("%d", &person[k].score);
    }
	
	printScoreStars(person, n);
    return 0;
}