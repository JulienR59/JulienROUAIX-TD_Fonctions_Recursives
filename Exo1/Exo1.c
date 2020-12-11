#include <stdlib.h>
#include <stdio.h>

void recursCompteurDecrement(int compteur) {
	compteur--;
	printf("%d", compteur);
	if (compteur == 0)
	{
		return;
	}
	else
	{
		recursCompteurDecrement(compteur);
	}
}

void recursCompteur(int compteur) {
	
}

void main() {
	recursCompteurDecrement(15);

}