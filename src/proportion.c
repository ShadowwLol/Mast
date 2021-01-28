#include "mast.h"

void table(double topleft, double topright, double bottomleft, double bottomright) {
	printf("\n     %f     .   .     %f     \n------------    ------------", topleft, topright);
}

void proportion() {
    char proportionOptions[2][44] = {"Directly Proportional", "Indirectly Proportional"};
	lim = 3;
	chars = 44;
    switch(menumake(proportionOptions)) {
        case 1 :
			table(1, 2, 3, 4);
	}
	clean();
}
