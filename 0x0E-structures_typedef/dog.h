#ifndef DOG_H
#define DOG_H

/**
 * struct dog -	struct containing data for dogs.
 * @name:	name of the dog.
 * @age:	age of the dog.
 * @owner:	owner of the dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;



/**
 * function prototypes
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* ifndef DOG_H */
