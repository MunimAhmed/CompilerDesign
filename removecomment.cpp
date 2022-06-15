#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    string b;
    ifstream mfile("comment.txt");
    if(mfile.is_open()){
        while(getline(mfile, a))
        {
        for(int i=0; i<a.size(); i++)
        {
        if(a[i]=='/' && a[i+1]=='/')
        {
           a='\0';
        }
        else if(a[i]=='/' && a[i+1]=='*')
        {
           a='\0';
        }
        }
        cout<<a<<endl;
        }

    mfile.close();
    }

    return 0;
}
