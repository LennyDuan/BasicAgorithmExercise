#include<stdio.h>

struct fish {
		const char *name;
		const char *species;
		int teeth;
		int age;
};

void catalog(struct fish f) {
		printf("%s is a %s fish with %d teeth and age is %d\n",
						f.name, f.species, f.teeth, f.age);
}

void label(struct fish f) {
		printf("Name: %s \nSpecies: %s \nAge: %d\n", f.name, f.species, f.age);
}

int main() 
{
		struct fish snapy = {"Snappy", "Piraha", 64, 4};
		catalog(snapy);
		label(snapy);

		return 0;
}
