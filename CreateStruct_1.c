#include <stdio.h>

typedef struct{
	const char *ingredients;
	float weight;
}meal;

typedef struct{
	const char *description;
	float duration;
}exercise;

typedef struct{
	meal food;
	exercise exercise;
}preferences;

typedef struct{
	const char *name;
	const char *species;
	int teeth;
	int age;
	preferences care;
}fish;

void label(fish f)
{
	printf("Name: %s\nSpecies: %s\n%d years old\n%d teeth\n", f.name, f.species, f.age, f.teeth);
	printf("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n", f.care.food.weight, f.care.food.ingredients, f.care.exercise.description, f.care.exercise.duration);
}

int main()
{
	fish snappy = {"Snappy", "Piranha", 69, 4, {{"meat", 0.2}, {"swim in the jacuzzi", 7.5}}};
	label(snappy);
	return 0;
}
