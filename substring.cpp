#include <bits/stdc++.h>
using namespace std;
int main()
{
    char sup[100] = "abcd";
    char sub[100] = "bc";

    int len1 = strlen(sup), searchIndex, i, j;
    int len2 = strlen(sub);

    for (i = 0; i <= len1 - len2; i++)
    {
        for (j = 0; j <= len2; j++)
        {
            if (sup[i + j] != sub[j])
            {
                break;
            }
        }
        if (j == len2)
        {
            searchIndex = i;
            break;
        }
    }
    if (i == len1 - len2 + 1)
    {
        printf("Not Found!\n");
    }
    for (i = searchIndex + len2; i <= len1; i++)
    {
        sup[i - len2] = sup[i];
    }

    printf("The string after deletion : %s", sup);

    return 0;
}
