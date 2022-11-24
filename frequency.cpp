#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100],str2[100];
    int flag=0,ptr=0;
    cout<<"Enter string one: ";
    gets(str);
    cout<<"Enter string two: ";
    gets(str2);
    for(int i=0;i<strlen(str);i++)
    {
        if(islower(str[i])==isupper(str2)||islower(str[i])==islower(str2)||isupper(str[i])==islower(str2)||isupper(str[i])==isupper(str2)&&islower(str[i+1])==isupper(str2)||islower(str[i+1])==islower(str2)||isupper(str[i+1])==islower(str2)||isupper(str[i+1])==isupper(str2)&&islower(str[i+2])==isupper(str2)||islower(str[i+3])==islower(str2)||isupper(str[i+3])==islower(str2)||isupper(str[i+3])==isupper(str2))
        {

        }
        else
        {

        }
    }
    return 0;
}
