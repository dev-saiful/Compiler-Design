#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    char digit[100],op[100],var[20][20];
    int con[20],ascii[100]= {0},cnt,i,num=0;
    int j=-1,k=-1,l=-1,n=0;
    int pr[10]= {0},m=0;
    cout<<"Enter a sample expression:";
    gets(str);
    cnt = strlen(str);
    cout<<"\nString length is : "<<cnt<<"\n";
    for(int i=0; i<cnt; i++)
    {
        ascii[i] = (int)str[i];
    }

    for(int i=0; i<cnt; i++)
    {
        if(isdigit(str[i]))
        {
            while(isdigit(str[i]))
            {
                num=10*num+ascii[i]-'0';
                i++;
            }
            j++;
            con[i]=num;
            num=0;
        }
        if(isalpha(str[i]))
        {
            while(isalpha(str[i])|| isdigit(str[i]) || str[i]=='_')
            {
                k++;
                var[m][k]=str[i];
                i++;
            }
            m++;
            pr[n]=k;
            n++;
            k=-1;

        }
        if(str[i]=='+'||str[i]=='-'||str[i]=='/'||str[i]=='*'||str[i]=='='||str[i]=='^')
        {
            l++;
            op[l]=str[i];
        }
    }

    cout<<"\nThe literals are:\n\n";
    for(int i=0; i<j; i++)
    {
        cout<<"\t"<<i+1<<"\t"<<con[i]<<"\n";
    }
    cout<<"\nThe operators are:\n\n";
    for(int i=0; i<l; i++)
    {
        cout<<"\t"<<i+1<<"\t"<<op[i]<<"\n";
    }
    cout<<"\nThe variables are:\n\n";
    for(int i=0; i<m; i++)
    {
        cout<<"\n\t"<<i+1<<"\t";
        for(int j=0; j<=pr[i]; j++)
        {
            cout<<var[i][j];
        }
    }

    return 0;
}
