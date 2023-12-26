//A program to find the absolute difference between a number and 51//
#include <stdio.h>
int main() {
int num, difference;
printf("Enter a number:");
scanf("%d", &num);
if (num>51) {
difference= 3* (num-51);
} else {
    difference= 51-num;
}
printf("The difference between %d and 51 is %d. \n", num, difference);
return 0;
}
    /* code */

