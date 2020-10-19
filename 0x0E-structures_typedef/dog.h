#ifndef DOG_HEADER
#define DOH_HEADER
/**
* struct dog - Dog structure.
* @name: dog's name.
* @age:  dog's age.
* @owner:dog's owner.
*
*/

struct dog
	{
		char *owner;
		float age;
		char *name;
	};
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
