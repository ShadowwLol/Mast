#include <stdio.h>
#include <stdlib.h>

int main (void);

void intro (char menu[], char submenu[]) {
    system("clear");
    if (submenu != NULL){
        printf("Mast\nMast -> %s -> %s\n", menu, submenu);
    }else{
        printf("Mast\nMast -> %s\n", menu);
    }
}

double percentage (){
    int lim=5;
    int i;
    int choice; /*74*/
    char percentageOptions[5][74] = {"Discount", "Increase", "Simple Percentage", "Percentage of X from Y", "Increase / Decrease"};
    for ( int num = 1; num <= lim; num++) {
        i=num-1;
        printf("%d. %s.\n", num, percentageOptions[i]);
        i=i+1;
    }
    printf("> ");
    scanf("%d", &choice);
    switch(choice) {
        case 1 :
            intro("Percentage", "Discount");
            double initval;
            double discount;
            printf("Initial value: ");
            scanf("%lf", &initval);
            intro("Percentage", "Discount");
            printf("Discount: ");
            scanf("%lf", &discount);
            intro("Percentage", "Discount");
            printf("\nInitial value ($): %f\n", initval);
            printf("Discount (%): %f\n", discount);
            double saving=(discount/100)*initval;
            double finalval=initval-saving;
            printf("Final value ($): %lf\n", finalval);
            printf("Saving ($): %f\n", saving);
            getchar();
            printf("\nPress ENTER to continue..");
            getchar();
            main();
        case 2 :
            intro("Percentage", "Increase");
            double initvals;
            double increase;
            printf("Initial value: ");
            scanf("%lf", &initvals);
            intro("Percentage", "Increase");
            printf("Increase: ");
            scanf("%lf", &increase);
            intro("Percentage", "Increase");
            printf("\nInitial value ($): %f\n", initvals);
            printf("Increase (%): %f\n", increase);
            double raise=(increase/100)*initvals;
            double finval=initvals+raise;
            printf("Final value ($): %f\n", finval);
            printf("Raise ($): %f\n", raise);
            getchar();
            printf("\nPress ENTER to continue..");
            getchar();
            main();
        case 3:
            intro("Percentage", "Simple Percentage");
            double perc;
            double value;
            printf("Percentage: ");
            scanf("%lf", &perc);
            intro("Percentage", "Simple Percentage");
            printf("Value: ");
            scanf("%lf", &value);
            intro("Percentage", "Simple Percentage");
            double fin=(perc/100)*value;
            printf("Percentage (%): %f\n", perc);
            printf("From: %f\n", value);
            printf("Final value: %f\n", fin);
            getchar();
            printf("\nPress ENTER to continue..");
            getchar();
            main();
        default :
            system("clear");
            main();
    }
}


int main (void)
{
    int choice;
    int limit = 50;     /*  choice=1           2              3           4           5    */
    char options[50][431] = {"Exit", "Percentage", "Average", "Proportion", "Ratio", "Equations", "Fractions", "GCF / LCM", "Combinations", "Prime Checker", "Number Generator", "Shapes", "Bodies", "Acceleration", "Angle", "Area", "Cooking", "Data Storage", "Data Transfer", "Energy", "Force", "Fuel", "Lenght", "Numeric Base", "Power", "Pressure", "Ring Size", "Roman Numerals", "Shoe Size", "Speed", "Temperature", "Time", "Torque", "Volume", "Volumetric Flow", "Weight", "Currency Converter", "Unit Price", "Sales Tax", "Tip", "Loan", "Interest", "Body Mass Index", "Daily Caloric Burn", "Body Fat Percentage", "Age", "Date", "Time", "Mileage", "Ohm's Law"};
    int item=0;
    system("clear");
    printf("Mast\n");
    for ( int num = 1; num <= limit; num++) {
        item=num-1;
        if (num==9 || num==11 || num==19 || num==31 || num==35 || num==37 || num==43){
            printf("%d. %s.\t\t", num, options[item]);
        }else if (num==45){
            printf("%d. %s.\t", num, options[item]);
        }else{
            printf("%d. %s.\t\t\t", num, options[item]);
        }
        printf("%d. %s.\n", num+1, options[item+1]);
        num=num+1;  
        item=item+1;
    }
    printf("> ");
    scanf("%d", &choice);
    if (choice <= limit && choice >= 1){
        switch(choice) {
        case 1 :
            system("clear");
            exit(0);
        case 2 :
            intro("Percentage", NULL);
            percentage();
            exit(0);
        default :
            system("clear");
            exit(1);
    }
    } else{
        exit(1);
    }

}
