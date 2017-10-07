#ifndef __PERSON_H__
#define __PERSON_H__

struct Person;
typedef struct Person *pPerson;

pPerson AddName(char *firstname, char *lastname, int age);
void PrintName(pPerson);

#endif /*__PERSON_H__*/
