#include<stdio.h>
int main (){

    int marks;
    printf("Enter the marks of the students : ");
    scanf("%d", &marks);

    if ( marks >= 0 && marks <= 100){

        if ( marks > 40 ){

            if ( marks >= 75){
                printf("Distinction");
            } else {
                printf("Pass");
            }
        }
    else {
        printf("Fail");
    } 
    } else {
        printf("Invalid marks");
    }

    return 0;
} 