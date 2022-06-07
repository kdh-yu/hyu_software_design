/*
Get the names and grades of the students and print out the name of the student with the third highest grade.
The number of students is entered in the first line.
From the second line, the students’ names and scores are entered separated by spaces.
There is no tie.        
(3≤ the number of students ≤ 50,  3≤ the length of a name ≤10)
*/

#include <stdio.h>

int main(){
    int num_of_students, std_score[50] = {}, temp_;
    char std_name[50] = {}, temp;
    scanf("%d", &num_of_students);

    for (int i=0;i<num_of_students;i++){
        scanf("%s", &std_name[i]);
        scanf("%d", &std_score[i]);
    }

    // Bubble Sort
    for (int j=0; j < num_of_students; j++){
        for (int k=0; k<num_of_students-1; k++){
            if (std_score[k] > std_score[k+1]){
                temp_ = std_score[k];
                temp = std_name[k];
                std_score[k] = std_score[k+1];
                std_name[k] = std_name[k+1];
                std_score[k+1] = temp_;
                std_name[k+1] = temp;
            }
        }
    }
    
    printf("%s\n", &std_name[2]);
    return 0;
}