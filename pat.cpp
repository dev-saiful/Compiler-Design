#include<bits/stdc++.h>
using namespace std;

int main()
{
    char txt[100];
    char pat[100];
    cout << "Enter Text : ";

    gets(txt);
     cout << "Enter Text : ";
    gets(pat);
    int patLen = strlen(pat);
    int txtLen = strlen(txt);


    for (int i = 0; i <= txtLen - patLen; i++)
    {
        int j;
        for (j = 0; j < patLen; j++)
        {
            if (txt[i + j] != pat[j])
                break;
        }
        if (j == patLen)
        {
            cout <<"Pattern found at index "<<i<<endl;
        }
    }
    return 0;
}
