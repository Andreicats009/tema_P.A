#include <stdio.h>
#include <stdlib.h>

#define lungime_max 50
#define hobby_max 10

typedef struct {
    char nume[lungime_max];
    char prenume[lungime_max];
    char oras[lungime_max];
    char liceu[lungime_max];
    char hobby[hobby_max][lungime_max];
    int numar_hobby;
} persoana;







int main(void)
{
    printf("Hello, World!\n");
    return 0;
}