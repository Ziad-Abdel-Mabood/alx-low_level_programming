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
 * dog_t -	Typedef for struct dog.
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* ifndef DOG_H */
