#include<bits/stdc++.h>
using namespace std;
int main()
{

    char str[100];

    cout << "Enter a string: ";
    gets(str);
    if(str[0]=='/' && str[1]=='/')
    {
        cout << "Single Line Comment" << endl;

    }
    else if(str[0]=='/'&&str[1]=='*'&&str[strlen(str)-2]=='*'&&str[strlen(str)-1]=='/')
    {
        cout << "Multi Line Comment" << endl;

    }
    else
    {
        cout << "Normal Line"<<endl;

    }


    return 0;
}

