#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Size;
    char key;
    cin>>Size;
    char str[Size];
    cout << "Enter Elements:"<<endl;
    cin >>str ;
    for(int i=0;i<Size;i++)
    {
        cout << "Element :"<<str[i]<<" index: "<<i+1 << endl;
    }
    //cout<<"Search a key :";
    //cin>>key;
    for(int i=0;i<Size;i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            cout << "Vowel Found"<<endl;
        }

    }



    return 0;
}


