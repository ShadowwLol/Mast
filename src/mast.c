#include "mast.h"

unsigned int lim;
int chars;

int main (void);

void clean (){
    getchar();
    printf("\nPress ENTER to continue..");
    getchar();
    main();
}
int main (void)
{
    int choice;
    unsigned int limit = 50;     /*  choice=1           2              3           4           5    */
    char options[50][431] = {"Exit", "Percentage", "Average", "Proportion / Ratio", "Equations", "Fractions", "GCF / LCM", "Combinations", "Prime Checker", "Number Generator", "Shapes", "Bodies", "Acceleration", "Angle", "Area", "Cooking", "Data Storage", "Data Transfer", "Energy", "Force", "Fuel", "Lenght", "Numeric Base", "Power", "Pressure", "Ring Size", "Roman Numerals", "Shoe Size", "Speed", "Temperature", "Time", "Torque", "Volume", "Volumetric Flow", "Weight", "Currency Converter", "Unit Price", "Sales Tax", "Tip", "Loan", "Interest", "Body Mass Index", "Daily Caloric Burn", "Body Fat Percentage", "Age", "Date", "Time", "Mileage", "Ohm's Law"};
    int item=-1;
	int maxnum =30;
    system("clear");
    printf("Mast\n");
    for ( int num = 0; num < limit; num=num+2) {
		// Calculate amount of spaces
		int len = strlen(options[item+1]);
		int spacesneeded = maxnum - len;

		printf("%d. %s.", num+1, options[item+1]);
		if (num+1 != limit-1){
			// Apply spacing
			for (int n = 0; n < spacesneeded; n++){
				printf(" ");
			}
			// If the number is smaller than 10 there's going to be a gap
			if (num+1 < 10 || num+2 < 10){
				printf(" ");
			}
			printf("%d. %s.\n", num+2, options[item+2]);
			item=item+2;
		}
    }
    printf("\n> ");
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
        case 4:
            intro("Proportion", NULL);
            proportion();
            exit(0);
        default :
            system("clear");
            exit(1);
    }
    } else{
        exit(1);
    }

    return 0;

}
