#include<stdio.h>

typedef enum {
	COUNT, POUNDS, PINTS
} unit_of_measures;

typedef union {
	short count;
	float weight;
	float volumn;
} quantity;

typedef struct {

	char *name;
	char *country;
	quantity amount;
	unit_of_measures units;
} fruit;

void order_fruit(fruit f) {
	printf("The order is:");

	if (f.units == PINTS) {
		printf("%2.2f  pints of %s \n", f.amount.volumn, f.name);
	}
	else if (f.units == COUNT) {
		printf("%i %s \n", f.amount.count, f.name);
	}
	if (f.units == POUNDS) {
		printf("%2.2f  pounds of %s \n", f.amount.weight, f.name);
	}
}

int main() {

	fruit apples = {"apples", "England", .amount.count = 144, COUNT};
	fruit strawberries = {"strawberries", "Spain", .amount.weight = 17.6, POUNDS};
	fruit oj = {"orange juice", "U.S.A.", .amount.volumn = 10.5, PINTS};
	order_fruit(apples);
	order_fruit(strawberries);
	order_fruit(oj);

	return 0;
}
