/*
Project Description: This program takes in a letter from the user, and returns if it is a vowel or consonant

Author: Neil Jiang C24510496

Date:   October 15, 2024
*/


#include <stdio.h>
#include <ctype.h> // Used for making char lowercase

int main() {
    // Initializing Variable
    char letter;

    // Takes in a letter from the user
    printf("Enter a letter: ");
    scanf("%c",&letter);

    // Uses the lowercase version of the letter, and finds if it is 
    switch( tolower(letter) ) {
        // If letter is a, e, i, o, u, it is a vowel
        case 'a':   
        case 'e':
        case 'i':
        case 'o':
        case 'u': {printf("\nLetter %c is a vowel\n",letter); break;}

        // Every other letter, is NOT a vowel
        default: {printf("\nLetter %c is NOT a vowel\n",letter); break;}
    }

    // End Program
    return 0;
}



/*
case'a':  case'e':  case'i':  case'o':  case'u':
{
    printf("\nLetter %c is a vowel\n",letter); break;
}
*/