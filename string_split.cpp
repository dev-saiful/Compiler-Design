#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i = 1;
    cout << "Enter a string: ";
    gets(str);

    char* piece = strtok(str, " ");
    while(piece != NULL)
    {
        cout << i << " "<< " "<<piece << endl;
        piece = strtok(NULL, " ");
        i++;
    }

    return 0;
}
