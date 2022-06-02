//TP1 Guadalupe Sofía García Fariñas K2002
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c = getchar();
    while(c!=EOF)
    {
        if (isupper (c))
        {
            c = tolower (c);
            putchar(c);
        }
        else
        {
            if (islower (c))
            {
                c = toupper (c);
                putchar(c);
            }
            else
            {
                if (ispunct (c) | isspace (c))
                putchar(c);
            }
        }
        c = getchar();
    }
    return 0;
}
