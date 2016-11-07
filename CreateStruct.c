#include <stdio.h>

struct preferences{
	const char *food;
	float exercise_hour;
};

struct fish{
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;              		//  put one struct inside another (nesting)
};

void catalog(struct fish f)
{
	printf("%s is a %s with %d teeth. He is %d\n", f.name, f.species, f.teeth, f.age);
}

void label(struct fish f)
{
	printf("Name: %s\nSpecies: %s\n%d years old, %d teeth\n", f.name, f.species, f.age, f.teeth);
	printf("%s likes to eat %s\n", f.name, f.care.food);
	printf("%s likes to exercise for %.1f hours\n", f.name, f.care.exercise_hour);
}

int main()
{
	struct fish snappy = {"Snappy", "Piranha", 69, 5, {"Meat", 7.5}};
	catalog(snappy);
	label(snappy);
}
