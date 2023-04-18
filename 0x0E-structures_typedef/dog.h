#ifndef DOG_H
#define DOG_H

/**
* struct dog - struct dog
* @name: name of the dog
* @age: the dog's age
* @owner: owner of the dog
* Desc: This struct is for a dog and its details
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *ownwer);
void free_dog(dog_t *d);

#endif
