#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string();
    int z = strlen(s); //number of entered characters
    printf("%c", toupper(s[0])); //output the first character, toupper changes the case
    for(int i=0; i<z; i++) //loop to finding spaces
        {
            if (s[i]==' ')
            {
            printf("%c",toupper(s[i+1])); //print the character after a space, changing the case at the same time
            }
        }
    printf("\n");
}