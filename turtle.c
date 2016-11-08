#include <stdio.h>

typedef struct{
	const char *name;
	const char *species;
	int age;
}turtle;

void happy_birthday(turtle *t)
{
	(*t).age = (*t).age + 1;       //  (*t).age 不能写成 *t.age
	printf("Happy Birthday %s! You are now %d years old!\n", (*t).name, (*t).age);
}

int main()
{
	turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
	happy_birthday(& myrtle);
	printf("%s's age is now %d\n", myrtle.name, myrtle.age);
	return 0;
}
