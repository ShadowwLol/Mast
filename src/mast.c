#include "mast.h"

int main (void);

void clean (){
    getchar();
    printf("\nPress ENTER to continue..");
    getchar();
    main();
}
/*
void intro (char menu[], char submenu[]) {
    system("clear");
    if (submenu != NULL){
        printf("Mast\nMast -> %s -> %s\n", menu, submenu);
    }else{
        printf("Mast\nMast -> %s\n", menu);
    }
}
*/

/*
void average (){
    int nums[50], i;
    int amount;
    double addition = 0;
    double times = 1;
    double sum = 0;
    printf("\nPlease Enter The A Amount Of Numbers: ");
    scanf("%d", &amount);

    printf("\nPlease Enter %d numbers.\n> ", amount);
    for (i = 0; i < amount; i++)
    {
        scanf("%d", &nums[i]);
        addition = addition + nums[i];
        times = times * nums[i];
        sum=sum+(1.0/nums[i]);
    }
    double aritaverage=addition/amount;
    double geoaverage=pow(times, 1.0/amount);
    double harmaverage=amount*pow(sum,-1);
    intro("Average", NULL);
    printf("Numbers = {");
    for (i = 0; i < amount; i++)
    {
        if (i == amount - 1){
            printf("%d", nums[i]);
        }else{
            printf("%d, ", nums[i]);
        }
    }
    printf("}\n");
    printf("Arithmetic average: %f\n", aritaverage);
    printf("Geometrical average: %f\n", geoaverage);
    printf("Harmonic average: %f\n", harmaverage);
    clean();

*/

/*

        FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX FIX

    printf("\n Elemenst in this Array are :\n");
    for (i = 0; i < amount; i++)
    {
        printf("%d\t", nums[i]);
    }     */

/*
    double nums[40];
    printf("Please input all values and separate them with a \",\".\n> ");
    scanf("%lf", nums);
    printf("%lf", nums);
    scanf("%[^,],%[^,],%d\n", first_name, last_name, &grade);
    read -a val
    [[ ${#val[@]} < 2 ]] && (printf "You need to enter more than 1 value!\n" ; read -s pause ; start)
    tot=0
    for i in ${val[@]}; do
        let tot+=$i
    done
    help y
    av=$(bc <<< "scale=2; $tot/${#val[@]}")
    printf "%s" "Values = { $(printf '%s, ' "${val[@]}" | sed "s/, $//g") }"
    printf "\nArithmetic Average: $av\n"
    read -s pause
    start
}*/
/*
void percentage (){
    int choice;
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
}*/

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
        case 1:
            system("clear");
            exit(0);
        case 2:
            intro("Percentage", NULL);
            percentage();
            exit(0);
        case 3:
            intro("Average", NULL);
            average();
            exit(0);
        default :
            system("clear");
            exit(1);
    }
    } else{
        exit(1);
    }

}
