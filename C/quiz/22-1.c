/*
Declare a person-type array(size =𝑛, In the first line 𝑛 is given, 1<=n<=30)
using the person structure and fill in the contents of the array with student's name, Math, and Science score.
You must define ‘void PrintAverageScore(person* people, int nPeople)’ function that outputs the average score
for each subject of all students in a single call. You must complete the sample code on page 3.
(Blue words in input part are input description)
*/

#include <stdio.h>

typedef struct
{
	char name[7];
	int mathScore, sciScore;
} person;

void PrintAverageScore(person * people, int nPeople){
	//Write your code here
    double mathavg = 0, sciavg = 0;
    for (int j = 0; j < nPeople; j++){
        mathavg += people[j].mathScore;
        sciavg += people[j].sciScore;
    }
    mathavg = mathavg / nPeople;
    sciavg = sciavg / nPeople;
    printf("Math : %f\n", mathavg);
    printf("Science : %f\n", sciavg);
}

int main(){
	int n;		
	person person[30];
    scanf("%d", &n);
	//Write your code here
	for (int i = 0; i < n; i++){
        printf("Name : ");
        scanf("%s", person[i].name);
        printf("Math : ");
        scanf("%d", &person[i].mathScore);
        printf("Science : ");
        scanf("%d", &person[i].sciScore);
    }
	PrintAverageScore(person, n);
	return 0;
}