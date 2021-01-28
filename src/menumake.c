#include "mast.h"
unsigned int choice;
int menumake(char items[lim][chars]){     /* Array / limit */
    int i = 0;
    for ( int num = 1; num < lim; num++) {
        i=num-1;
        printf("%d. %s.\n", num, items[i]);
    }
    printf("> ");
    scanf("%d", &choice);
	return choice;
}
