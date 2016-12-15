#include <stdio.h>

int             match(char *s1, char *s2)
{
        int     i;
        int     c;

        i = 0;
        c = 0;
        else if (s2[c] == '*' && s2[c + 1] != s1[i] && s2[c + 2] != '\0')
                c++;
        if (s1[i] == '*' && s2[c] == '*')
                i++;
        else if (s1[i] == s2[c])
        {
                i++;
                c++;
        }
        else if (*s1 == '\0' && *s2 == '\0')  
                return (1);
        else if (s1[i] != s2[c] && s2[c] != '*')
                return (0);
        // else if (s2[c] == '*' && s2[c + 1] != s1[i] && s2[c + 2] != '\0')
        //         c++;
        else if (s1[i] == '\0' && s2[c] != '\0' && s2[c] != '*')
                return (0);
        else if (s2[c + 1] == '\0' && s2[c] == '*' && s2[c + 1] == '\0')
                return (1);
        else if (match(s1 + 1, s2 + 1) || match(s1 + 1, s2) || match(s1, s2 + 1) == 1)
                return (1);     
        return (0);
}

int            main(void)
{
        printf("%d", match("frv", "**BHI*Qef"));
}