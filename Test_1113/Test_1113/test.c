#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000
typedef struct Person {
	char name[1024];
	char tel[1024];
}Person;

typedef struct AddressBook {
	Person person[SIZE];
	int size;
}addressBook;
void PersonInfo() {
	int i = SIZE;
	for (i = 0; i < SIZE; ++i) {
		addressBook.person;
	}
}
int main()
{

	return 0;
}