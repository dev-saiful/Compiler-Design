#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100];
    int flag=0;
    cout << "Enter String: ";
    gets(str1);
    if(str1[0]=='_'||(str1[0]>='a'&&str1[0]<='z')||(str1[0]>='A'&&str1[0]<='Z'))
    {
        for(int i = 0;i<strlen(str1);i++)
        {
            if(str1[i]==' ')
            {
                flag = 1;
                //cout << "Invalid" <<endl;
                break;
            }
        }
        //cout << "Valid"<<endl;
	}
	else{
        cout << "Invalid" <<endl;
        exit(0);
	}

	if(flag==0)
    {
        cout << "Valid"<<endl;
    }
    else
    {
        cout << "Invalid" <<endl;
    }
    return 0;
}
