#include "mast.h"

void average (){
    int nums[50], i;
    int amount;
    double addition = 0;
    double times = 1;
    double sum = 0;
    printf("\nPlease Enter The Amount Of Numbers: ");
    scanf("%d", &amount);

    printf("\nPlease Enter %d Numbers.\n> ", amount);
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
    printf("Arithmetic average: %0.2f\n", aritaverage);
    printf("Geometrical average: %0.2f\n", geoaverage);
    printf("Harmonic average: %0.2f\n", harmaverage);
    clean();
}
