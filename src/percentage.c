#include "mast.h"

void percentage (){
    int choice;
    int lim = 5;
    int i = 0;
    double value, finalvalue, percent, xvalue, yvalue;
    char percententageOptions[5][74] = {"Discount", "Increase", "Simple Percentage", "Percentage of X from Y", "Increase / Decrease"};
    for ( int num = 1; num <= lim; num++) {
        i=num-1;
        printf("%d. %s.\n", num, percententageOptions[i]);
        i=i+1;
    }
    printf("> ");
    scanf("%d", &choice);
    switch(choice) {
        case 1 :
            intro("Percentage", "Discount");
            double discount;
            printf("Initial value: ");
            scanf("%lf", &value);
            intro("Percentage", "Discount");
            printf("Discount: ");
            scanf("%lf", &discount);
            intro("Percentage", "Discount");
            printf("\nInitial value ($): %f\n", value);
            printf("Discount (%): %f\n", discount);
            double saving=(discount/100)*value;
            finalvalue=value-saving;
            printf("Final value ($): %lf\n", finalvalue);
            printf("Saving ($): %f\n", saving);
            clean();
        case 2 :
            intro("Percentage", "Increase");
            double increase;
            printf("Initial value: ");
            scanf("%lf", &value);
            intro("Percentage", "Increase");
            printf("Increase: ");
            scanf("%lf", &increase);
            intro("Percentage", "Increase");
            printf("\nInitial value ($): %f\n", value);
            printf("Increase (%): %f\n", increase);
            double raise=(increase/100)*value;
            finalvalue=value+raise;
            printf("Final value ($): %f\n", finalvalue);
            printf("Raise ($): %f\n", raise);
            clean();
        case 3:
            intro("Percentage", "Simple Percentage");
            printf("Percentage: ");
            scanf("%lf", &percent);
            intro("Percentage", "Simple Percentage");
            printf("Value: ");
            scanf("%lf", &value);
            intro("Percentage", "Simple Percentage");
            finalvalue=(percent/100)*value;
            printf("Percentage (%): %f\n", percent);
            printf("From: %f\n", value);
            printf("Final value: %f\n", finalvalue);
            clean();
        case 4:
            intro("Percentage", "Percentage of X from Y");
            printf("X value: ");
            scanf("%lf", &xvalue);
            intro("Percentage", "Percentage of X from Y");
            printf("Y value: ");
            scanf("%lf", &yvalue);
            intro("Percentage", "Percentage of X from Y");
            percent=(xvalue*100)/yvalue;
            printf("\nX value: %f\n", xvalue);
            printf("Y value: %f\n", yvalue);
            printf("Percentage (%): %f\n", percent);
            clean();
        case 5:
            intro("Percentage", "Increase / Decrease");
            printf("From: ");
            scanf("%lf", &value);
            intro("Percentage", "Increase / Decrease");
            printf("To: ");
            scanf("%lf", &finalvalue);
            intro("Percentage", "Increase / Decrease");
            percent=((finalvalue*100)/value)-100;
            printf("From: %f\n", value);
            printf("To: %f\n", finalvalue);
            printf("Percentage (%): %f\n", percent);
            clean();
        default :
            system("clear");
            main();
    }
}