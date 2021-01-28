#include "mast.h"

void percentage (){
    double value, finalvalue, percent, xvalue, yvalue;
    char percentageOptions[5][74] = {"Discount", "Increase", "Simple Percentage", "Percentage of X from Y", "Increase / Decrease"};
	lim = 5;
	chars = 74;
	switch(menumake(percentageOptions)){
        case 1 :
            intro("Percentage", "Discount");
            double discount;
            printf("Initial value: ");
            scanf("%lf", &value);
            intro("Percentage", "Discount");
            printf("Discount: ");
            scanf("%lf", &discount);
            intro("Percentage", "Discount");
            printf("\nInitial value ($): %0.2f\n", value);
            printf("Discount (%): %0.2f\n", discount);
            double saving=(discount/100)*value;
            finalvalue=value-saving;
            printf("Final value ($): %lf\n", finalvalue);
            printf("Saving ($): %0.2f\n", saving);
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
            printf("\nInitial value ($): %0.2f\n", value);
            printf("Increase (%): %0.2f\n", increase);
            double raise=(increase/100)*value;
            finalvalue=value+raise;
            printf("Final value ($): %0.2f\n", finalvalue);
            printf("Raise ($): %0.2f\n", raise);
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
            printf("Percentage (%): %0.2f\n", percent);
            printf("From: %0.2f\n", value);
            printf("Final value: %0.2f\n", finalvalue);
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
            printf("\nX value: %0.2f\n", xvalue);
            printf("Y value: %0.2f\n", yvalue);
            printf("Percentage (%): %0.2f\n", percent);
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
            printf("From: %0.2f\n", value);
            printf("To: %0.2f\n", finalvalue);
            printf("Percentage (%): %0.2f\n", percent);
            clean();
        default :
            system("clear");
            main();
    }
}
