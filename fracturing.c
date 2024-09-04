// fracturing.c
// Author: Bladimir Taveras Glass bl114082
// Date: 8/26/24
// Class: COP 3223, Professor Parra
// Purpose: fracturing
//
// Input: x1 y1 x2 y2
//
// Output: distance, perimeter, area, height, width, 
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14

//prototype
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

double calculateDistance(){
    //static variables
    static double x1, y1, x2, y2;

    // Input values
    printf("x1 = ");
    scanf("%lf", &x1);

    printf("y1 = ");
    scanf("%lf", &y1);

    printf("x2 = ");
    scanf("%lf", &x2);

    printf("y2 = ");
    scanf("%lf", &y2);

    // Calculate distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Print results
    printf("Point #1 entered: x1 = %lf ; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distance);

    // Return distance
    return distance;
    }
// calculate perimeter
double calculatePerimeter(){
    // call calculateDistance
    double distance = calculateDistance();

    //get perimeter
    double perimeter = (PI * distance);
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    
    //difficulty
    double difficulty = 5.0; 
    return difficulty;
    }
//calculate area
double calculateArea(){
    //call calculateDistance
    double distance = calculateDistance();

    //get radius
    double radius = (distance / 2);

    //get area
    double area = (PI * (pow(radius, 2)));
    printf("The area of the city encompassed by your request is %lf\n", area);
    
    //difficulty
    double difficulty = 5.0;
    return difficulty;
    }   
//calculate width
double calculateWidth(){
    //call calculateDistance
    double distance = calculateDistance();

    //get width
    double width = distance;
    printf("The width of the city ecompassed by your request is %lf\n", width);

    //difficulty
    double difficulty = 1.0;
    return difficulty;

    }
//calculate height
double calculateHeight(){
    //call calculateDistance
    double distance = calculateDistance();

    //get height
    double height = distance;
    printf("The height of the city encompassed by your request is %lf\n", height);

    //difficulty
    double difficulty = 1.0;
    return difficulty;
    }

int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
    }

//call calculateDistance for each function
