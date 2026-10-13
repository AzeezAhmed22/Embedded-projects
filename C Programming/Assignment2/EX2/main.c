#include <stdio.h>

/* EX2: Check whether an English letter is a vowel or consonant. */
int main(void)
{
    char letter;

    printf("Enter an alphabet: ");
    fflush(stdout);
    if (scanf(" %c", &letter) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (letter == 'a' || letter == 'e' || letter == 'i' ||
        letter == 'o' || letter == 'u' || letter == 'A' ||
        letter == 'E' || letter == 'I' || letter == 'O' ||
        letter == 'U')
    {
        printf("%c is a vowel.\n", letter);
    }
    else if ((letter >= 'a' && letter <= 'z') ||
             (letter >= 'A' && letter <= 'Z'))
    {
        printf("%c is a consonant.\n", letter);
    }
    else
    {
        printf("%c is not an alphabet.\n", letter);
    }

    return 0;
}
