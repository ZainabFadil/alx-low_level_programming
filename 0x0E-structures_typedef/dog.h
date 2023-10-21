#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct.
 * @name: patam
 * @age: oaram
 * @owner: param
 *
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
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_cpystr(char *s1, char *s2);
void free_dog(dog_t *d);
#endif /*DOG_H*/
