#include<bits/stdc++.h>
using namespace std;
int main()
{

    char str[100];
    char temp[100];
    int n = 0;
    gets(str);
    puts(str);

    for(int i = strlen(str)-1;i>=0;i--)
    {
        temp[n] = str[i];
        n++;
    }
    temp[n]='\0';
    puts(temp);
    return 0;

}

