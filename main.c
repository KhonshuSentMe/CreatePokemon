#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


typedef struct
{
    char name[25];
    char type[25];    
}Pokemon;

Pokemon newPokemon(const char *name, const char *type)
{
    Pokemon pokemon;
    strcpy (pokemon.name, name);
    strcpy (pokemon.type, type);
    return pokemon;
}

void createPokemon()
{
    Pokemon pokemon;

    printf("What will your Pokemon's name be: ");
    scanf("%s", &pokemon.name);

    printf("What type is your %s: ", pokemon.name);
    scanf("%s", &pokemon.type);

    printf("\nYou have made the Pokemon: %s, it's type is %s!\n", pokemon.name, pokemon.type);
    
    return;
}


int main()
{
    char choiceOne;
    char choiceTwo;

    printf("Would you like to create a Pokemon? (Y/N): ");
    scanf(" %c", &choiceOne);
    choiceOne = toupper(choiceOne);
    

    if (choiceOne == 'Y')
    {
        printf("Would you like to make two Pokemon and have them battle? (Y/N): ");
        scanf(" %c", &choiceTwo);
        choiceTwo = toupper(choiceTwo);

        if (choiceTwo == 'Y')
        {
            createPokemon();
            createPokemon();
            return 0;
        }
        else if (choiceTwo == 'N')
        {
            printf("Creating one Pokemon:");
            createPokemon();
            return 0;
        }
        else
        {
            printf("Error: Invalid choice!");
            return 0;
        }
        
        
    }
    else if (choiceOne == 'N')
    {
        printf("Closing program...");
        return 0;
    }
    else
    {
        printf("Error: Invalid choiceOne");
        return 0;
    }


    

    return 0;
}