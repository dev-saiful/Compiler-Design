#include<bits/stdc++.h>
using namespace std;
int main()
{
char str1[100],str2[100];
int i,j,length1,length2,search_i;
gets(str1);
gets(str2);
length1 = strlen(str1);
length2 = strlen(str2);
for(i=0;i<length1-length2;i++)
{
    for(j=0;j<length2;j++)
    {
        if(str1[i+j] != str2[j])
        {
            break;
        }
    }
    if(j == length2)
    {
        cout << "The number found at " << i <<endl;
        search_i = i;
        break;
    }
}

if(i == length1-length2+1)
{
    cout << "Not Found" <<endl;
}

for(i = search_i+length2; i<= length1;i++)
{
    str1[i-length2]=str1[i];
}

cout << "The string is " << str1 <<endl ;


    return 0;
}
