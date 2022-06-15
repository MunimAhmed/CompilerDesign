#include <bits/stdc++.h>

using namespace std;

int main()
{
    int firstbracopen=0;
    int firstbracclose=0;
    string a=")a(+(b*c)/e-(f+g*(h^i))/j";
    int l=a.size();
    for(int i=0; i<l; i++)
    {
        if(firstbracclose>firstbracopen)
        {
            cout<<"Invalid"<<endl;
            break;
        }
        if(a[i]=='(')
        {
            firstbracopen+=1;
        }
        else if(a[i]==')')
        {
            firstbracclose+=1;
        }
    }
    if(firstbracopen==firstbracclose)
    {
        cout<<"Valid Identifier"<<endl;
    }
    else{
        cout<<"Invalid Identifier"<<endl;
    }

    return 0;
}
