#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


typedef struct
{
    char name[25];
    char type[25];    

    // if user creates a second Pokemon to fight, store the info here
    char opName[25]; 
    char opType[25];
}Pokemon;


// struct for the users custom pokemon's name and type
Pokemon newPokemon(const char *name, const char *type)
{
    Pokemon pokemon;
    strcpy (pokemon.name, name);
    strcpy (pokemon.type, type);
    return pokemon;
}

// struct to hold name and type of opponent Pokemon if user wants to battle
Pokemon newOpp(const char *opName, const char *opType)
{
    Pokemon pokeOpp;
    strcpy (pokeOpp.opName, opName);
    strcpy (pokeOpp.opType, opName);
    return pokeOpp;
}

void createPokemon(Pokemon *pokemon)
{
    

    printf("What will your Pokemon's name be: ");
    scanf("%s", pokemon->name);

    printf("What type is your %s: ", pokemon->name);
    scanf("%s", pokemon->type);

    // will add a menu to select from actual pokemon types and some custom ones in the future

    printf("\nYou have made the Pokemon: %s, it's type is %s!\n", pokemon->name, pokemon->type);
    
    return;
}

void createOpponent(Pokemon *pokeOpp, const Pokemon *pokemon)
{


    printf("What will be the opposing Pokemon's name: ");
    scanf("%24s", pokeOpp->opName);

    printf("What type is %s: ", pokeOpp->opName);
    scanf("%24s", pokeOpp->opType);

    printf("Your %s's opponent will be %s!", pokemon->name, pokeOpp->opName);
    
    return;
}

void pokemonBattle()
{
    Pokemon pokemon;
    Pokemon pokeOpp;

    int pokeHP = 35;
    int oppHP = 35;

    float typeADV = 1.5; // will make a modifier if pokemons types are added as pre-existing types

    int savingThrow = 1; /*Random Number generated in the future*/
    
    printf("Time to battle!\n It's %s VS. %s!", pokemon.name, pokeOpp.opName);

    for (int i = 0; i < pokeHP; i++)
    {
        /* make a loop that rolls a secret number to see if either pokemon or both take damage
        if they will take damage -- roll a random attack number from 1 - 6 for the damage taken
        on either pokemon that failed the saving throw*/
    }
    
}

int main()
{   
    Pokemon pokemon, pokeOpp;
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
            createPokemon(&pokemon);
            createOpponent(&pokeOpp, &pokemon);
            return 0;
        }
        else if (choiceTwo == 'N')
        {
            printf("Creating one Pokemon:");
            createPokemon(&pokemon);
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