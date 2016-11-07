#include <stdio.h>

void catalog(const char *name, const char *species, int teeth, int age)
{
	printf("%s is a %s with %d teeth. He is %d\n", name, species, teeth, age);
}

void label(const char *name, const char *species, int teeth, int age)
{
	printf("Name: %s\nSpecies: %s\nAge: %d\nTeeth: %d\n", name, species, age, teeth);
}


int main()
{
	catalog("Snappy", "Piranha", 69, 4)	;
	label("Snappy", "Piranha", 69, 4);
	return 0;
}
