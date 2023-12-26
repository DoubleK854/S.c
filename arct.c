//Write a C program that calculates the area of a rectangle, circle and triangle.//
#include <math.h>
#include <stdio.h>
int main() {
    float l,w, rarea, carea, tarea, radius, base, height;
    printf("Enter the L and W of your Rectangle \n");
    scanf("%f %f", &l, &w);
    rarea=l*w;
    printf("The Area of your Rectange is: %f",rarea
    );
    printf("Enter the radius of your circle /n");
    scanf("%f", &radius);
    carea=2*3.14*radius^2
    printf("The Area of your Circle is: %f", carea);
    printf("Enter the base and height of your triangle \n");
scanf("%f %f", &base, &height);
tarea=0.5*base*height;
printf("The Area of your Triangle is: %f",tarea
);

}