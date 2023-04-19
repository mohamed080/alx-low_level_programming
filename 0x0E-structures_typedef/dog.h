#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's info
 * @name: First member
 * @age: Second member
 * @owner: owners name
 *
 * Description: description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
