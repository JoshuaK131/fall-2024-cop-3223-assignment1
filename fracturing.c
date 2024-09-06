#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Prototypes for all called upon functions
double calculateDistance ();
double calculatePerimeter ();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();
double calculateRadius();
double mathForDistance();


int main (int arge, char **argv) { // Calls all functions for assignment
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
 }

 double askForUserInput() {
    static int counter = 0; // How many times the function is called
    static double x1, x2, y1, y2; // Store input values
    double input;
    scanf("%lf", &input);

    // Return value based on increment of function called
    if (counter == 0) {
        x1 = input;
    } else if (counter == 1) {
        x2 = input;
    } else if (counter == 2) {
        y1 = input;
    } else if (counter == 3) {
        y2 = input;
    }
    counter++; // Increase the increment
    return input;
 }
 // The five necessary functions for the assignment
double calculateDistance() {
    double distance = mathForDistance();
    printf("The distance between the two points is %lf\n", distance);

    return distance;
 }
 double calculatePerimeter() {
    double radius = calculateRadius();

    double circumference = (2 * PI * radius);
    printf("The perimeter of the city encompassed by your request is %lf\n", circumference);

    return 1;
 }
 double calculateArea () {
    double radius = calculateRadius();

    double area = PI * (radius * radius);
    printf("The area of the city encompassed by your request is %lf\n", area);

    return 1;
 }
 double calculateWidth () {
    double radius = calculateRadius();

    double diameter = 2 * radius;
    printf("The width of the city encompassed by your request is %lf\n", diameter);

    return 1;
 }
 double calculateHeight () {
    double radius = calculateRadius();

    double height = 2 * radius;
    printf("The height of the city encompassed by your request is %lf\n", height);

    return 1;
 }
// Additional functions used for calculations
 double calculateRadius() {
    double distance = mathForDistance();
    double radius = distance / 2.0;

    return radius;
 }
 double mathForDistance() { // Seperated from calculateDistance so printf statements are repeated for each function
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2-y1) * (y2 - y1));

    return distance;
 }