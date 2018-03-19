#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int onshifr (char ch, int key);
int alphastr(string str);
int alpha(char ch);

int main(int argc, string argv[])
{
    if (argc != 2 || alphastr(argv[1]) == 1)
    {
        printf("Run the program with 1 Latin key\n");
        return 1;
    }
    string str = get_string("Enter the string to encrypt: ");
    int nk,key,ik,n;
    n = strlen(str);
    nk = strlen(argv[1]);
    ik = 0;
    for (int i = 0; i < n; i++)
    {
        if (ik == nk)
            ik = 0;
        if (alpha(str[i]) != 99)
        {
            key = alpha(argv[1][ik]);
            str[i] = onshifr (str[i], key);
            ik++;
        }
    }
    printf("\nciphertext: %s\n", str);
}

int onshifr (char ch, int key)
{
    if (ch >= 65 && ch <= 90)
    {
        return ((ch - 65) + key)%26 + 65;
    }
    else if (ch >= 97 && ch <= 122)
    {
        return ((ch - 97) + key)%26 + 97;
    }
    else
    return ch;
}

int alphastr(string str)
{
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
        {
            return 1;
        }
    }
    return 0;
}

int alpha(char ch)
{
        if (ch >= 65 && ch <= 90)
        {
            return ch - 65;
        }
        else if (ch >= 97 && ch <= 122)
        {
            return ch - 97;
        }
    return 99;
}