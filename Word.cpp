#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000];
    char space=' ';
    char newstr[1000];
    gets(str);
    strcpy(newstr,str);
    for(int i=0;i<(int)strlen(str);i++)
    {
        if(newstr[i] == space)
        {
             newstr[i] = '\n';
        }
    }
    puts(newstr);

}
