#include "mast.h"

void intro (char menu[], char submenu[]) {
    system("clear");
    if (submenu != NULL){
        printf("Mast\nMast -> %s -> %s\n", menu, submenu);
    }else{
        printf("Mast\nMast -> %s\n", menu);
    }
}