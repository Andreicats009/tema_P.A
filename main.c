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

void afiseaza_persoana(persoana p)
{
    printf("nume: %s\n", p.nume);
    printf("prenume: %s\n", p.prenume);
    printf("oras: %s\n", p.oras);
    printf("liceu: %s\n", p.liceu);

    printf("hobby-uri:\n");
    for(int i = 0; i < p.numar_hobby; i++)
    {
        printf("%s\n", p.hobby[i]);
    }
}

void sorteazaHobby(Persoana *p)
{
    char temp[MAX_LEN];

    for(int i = 0; i < p->nrHobby - 1; i++)
    {
        for(int j = i + 1; j < p->nrHobby; j++)
        {
            if(strcmp(p->hobby[i], p->hobby[j]) > 0)
            {
                strcpy(temp, p->hobby[i]);
                strcpy(p->hobby[i], p->hobby[j]);
                strcpy(p->hobby[j], temp);
            }
        }
    }
}

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}