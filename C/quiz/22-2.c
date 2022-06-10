/*
Use same structure of 22-1, and Create a program that sorts an array of structs
in decreasing order of math score, and print like output example.
You must complete the sample code on page 5.
*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[7];
    int mathScore, sciScore;
} person;

void SwapStruct(person* personi, int index){
    //your code
    int temp = personi[index].mathScore;
    personi[index].mathScore = personi[index+1].mathScore;
    personi[index+1].mathScore = temp;

    char* name_temp = personi[index].name;
    *personi[index].name = personi[index+1].name;
    *personi[index+1].name = *name_temp;
    
}

void SortAndPrint(person* people, int nPeople) {    
    int maxIndex, r = 0;
    for(int i = 0; i < nPeople -1; i++){
        maxIndex = i;
        for(int j = i + 1; j < nPeople; j++){             //your code that finds an index of maximum math score in people array.        
            if (people[j].mathScore < people[j+1].mathScore){
                SwapStruct(people, j);
            }
        }       
    }   
    while (r < 3){
        printf("%d : %s\n", r+1, people[r].name);
        r++;
    }
            //Write your code here.
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
    SortAndPrint(person, n);
    return 0;
}