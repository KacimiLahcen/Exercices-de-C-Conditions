#include <stdio.h>

int main()
{

    char character;

    printf("Entrer un caractère : ");
    scanf("%c", &character);

    switch (character)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I': 
    case 'o':
    case 'O': 
    case 'u':
    case 'U':
        printf("ce caractère est une voyelle ");
        break;

    default:
        printf("ce caractère n'est pas une voyelle");
        break;
    }

    return 0;
}