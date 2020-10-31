#include "mast.h"

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
}