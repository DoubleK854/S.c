/*A program that solves a class average problem through the use of variable declaration and 
initialization,decision making structures, loops and functions.
Author: Gleta Kijogi
Date: 11/27/2023
Documentation section*/
#include <stdio.h> //linking section//

int calculate_average(int grades[], int num_grades);//Global declaration section//

int main(void) //Main function section//
{
    //declaration section//
    int grades[10];
    int i;
    int average;

//Executable section//
    for(i = 0; i < 10; i++) {
        printf("Enter grade %d:", i+1);
        scanf("%d", &grades[i]);
    }

//Call function to calculate average//
    average = calculate_average(grades, 10);
    printf("class average: %d \n", average);

    return(0);
}

//function definition//
int calculate_average(int grades[], int num_grades)
{
    int i;
    int total = 0;

    for (i = 0; i < num_grades; i++) {
        total += grades[i];
    }
    return total/num_grades;
}