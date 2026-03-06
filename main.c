#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    printf("Nume: %s\n", p.nume);
    printf("Prenume: %s\n", p.prenume);
    printf("Oras: %s\n", p.oras);
    printf("Liceu: %s\n", p.liceu);

    printf("Hobby-uri:\n");
    for(int i = 0; i < p.numar_hobby; i++)
    {
        printf("  - %s\n", p.hobby[i]);
    }
    printf("--------------------\n");
}

void sorteaza_hobby(persoana *p)
{
    char temp[lungime_max];

    for(int i = 0; i < p->numar_hobby - 1; i++)
    {
        for(int j = i + 1; j < p->numar_hobby; j++)
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
    persoana p = {
        "popescu",
        "ion",
        "bucuresti",
        "colegiul_national",
        {"fotbal", "citit", "programare"},
        3
    };

    printf("=== Date student inainte de sortare ===\n");
    afiseaza_persoana(p);

    sorteaza_hobby(&p);

    printf("=== Date student dupa sortare hobby ===\n");
    afiseaza_persoana(p);

    return 0;
}