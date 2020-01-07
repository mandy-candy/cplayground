#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// define constant string, is accessible from everywhere!
#define CONSTANTSTRING "Constant string"

// newer way is like this with const keyword
const int MONTHS = 12;  // MONTHS is a symbolic constant for 12
const char message[] = "This is a message";

/*
*    'x' = basic type char
*    "x" = derived type, array of char. It's basically the x and \0, the null character
*/


// main function
int main(void)
{   
    // initialize every single char for string
    char word[] = {'H', 'E', 'L', 'L', 'O'};
    // %s is formatting the string
    printf("\nThe word is: %s", word);
    // Better version
    char word2[] = {"Hello"};
    printf("\nThe word2 is: %s", word2);

    // print lenght of the string with strlen()
    printf("\nThe length of word is: %d", strlen(word2));


    // copy strings from one array to the other
    char destination[50];
    strncpy(destination, word, sizeof(destination) -1 );
    printf("\nThe destination is: %s", destination);


    // combine two arrays, the dest will be added to src
    char src[50], dest[50];
    // copy strings
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");
    // combine strings
    strncat(dest, src, 15);
    printf("Final destination string: |%s|", dest);


    // searching character inside string
    char str[] = " The quick brown fox";
    char ch = 'q';
    char *pGot_char = NULL;
    pGot_char = strchr(str, ch);
    printf("\nAddress is: %s", pGot_char);


    // searching string inside string
    char text[] = "Every dog has his day";
    char word3[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word3);
    printf("\nWord is: %s", pFound);


    // tokenizing a string (by space, comma, dash... whatever)
    char sentence[] = "Hello my - name is - Amanda";
    const char s[2] = "-";
    char *token;
    // get the first token
    token = strtok(sentence, s);
    // search for other tokens
    while (token != NULL)
    {   
        printf("\n%s", token);
        token = strtok(NULL, s);
    }
    


    return 0;
}

