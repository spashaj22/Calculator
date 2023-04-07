//
//  main.c
//  Clasroom
//
//  Created by Suljon Pashaj on 9.3.23.
//

//spashaj22

#include <stdio.h>
#include <math.h>

double calcSum(double n1, double n2);
double calcSub(double n1, double n2);
double calcMulti(double n1, double n2);
double calcDiv(double n1, double n2);
double calcSqrt(double n);
double calcPower(double n);

double squareArea(double a, double area) {
    area = a * a;
    return area;
}

double squarePerimeter(double a, double perimeter) {
    perimeter = 4 * a;
    return perimeter;
}

double circleArea(double r, double area) {
    area = 3.14159 * r * r;
    return area;
}
double circlePerimeter(double r, double perimeter) {
    perimeter = 2 * 3.14159 * r;
    return perimeter;
}


double calcSum(double n1, double n2){
    return n1+n2;
}

double calcSub(double n1, double n2){
    return n1-n2;
}

double calcMulti(double n1, double n2){
    return n1*n2;
}

double calcDiv(double n1, double n2){
    return n1/n2;
}

double calcSqrt(double n){
    return sqrt(n);
}

double calcPower(double n){
    int m;
    printf("\n");
    printf("Give a number to raise to the square root of: ");
    scanf("%d", &m);
    return pow(n,m);
}

int main() {
    while(1){
        printf("\n");
        printf("What operation do you want to do: \n"
               "1-Sum \n"
               "2-Subtraction \n"
               "3-Multiplication \n"
               "4-Division \n"
               "5-Square Root \n"
               "6-Power \n"
               "7-Area and Perimeter of Square \n"
               "8-Area and Perimeter of Circle \n");
        int choice;
        scanf("%d", &choice);
        printf("\n");
        double n1,n2;
        double a, r, area = 0.0, perimeter = 0.0;

        
        if(choice<5)
        {
            printf("Enter 2 numbers: ");
            scanf("%lf %lf", &n1, &n2);
        }

        switch (choice) {
            case 1:
                printf("\n");
                printf("Sum: %lf", calcSum(n1,n2));
                break;
            case 2:
                printf("\n");
                printf("Subtraction: %lf", calcSub(n1,n2));
                break;
            case 3:
                printf("\n");
                printf("Multiplication: %lf", calcMulti(n1,n2));
                break;
            case 4:
                printf("\n");
                printf("Division: %lf", calcDiv(n1,n2));
                break;
            case 5:
                printf("\n");
                int n;
                printf("Give a number: ");
                scanf("%d", &n);
                printf("Square Root: %lf", calcSqrt(n));
                break;
            case 6:
                printf("\n");
                int num;
                printf("Give a number: ");
                scanf("%d", &num);
                printf("\n");
                printf("Power: %lf", calcPower(num));
                break;
            case 7:
                printf("Enter the side of square: ");
                scanf("%lf", &a);
                
                area = squareArea(a, area);
                perimeter = squarePerimeter(a, perimeter);

                
                printf("Area of the square: %.5lf\n", area);
                printf("Perimeter of the square: %.5lf\n", perimeter);
                break;
            
            case 8:
                printf("Enter the radius of circle: ");
                scanf("%lf", &r);
                
                area = circleArea(r, area);
                perimeter = circlePerimeter(r, perimeter);
                printf("Area of the circle: %.5lf\n", area);
                printf("Circumference of the circle: %.5lf\n", perimeter);
                break;
        }
        printf("\n");
        printf("Do you want to continue using the calculator?(1-Yes | 0-No): ");
        int continueChoice;
        scanf("%d", &continueChoice);
        if(continueChoice == 0){
            break;
        }
    }


}
