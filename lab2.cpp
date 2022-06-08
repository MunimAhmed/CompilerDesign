#include <iostream>
#include <string.h>
#define max 100

using namespace std;

int main()
{
    char a[]="double x=y*2c-50";
    string b;
   for(int i=0; i<strlen(a); i++)
   {
        if(a[i]=='\0')
        {
        if(b=="double" || b=="int" || b=="float" || b=="string" || b=="char" || b=="bool" || b=="long")
         {
           cout<<b<<" is a keyword"<<endl;
         }
            b="";
            i++;
            cout<<endl;
        }
        b=b+a[i];
   }
       /*while(a[i]!= '\0')
       {
           b=b+a[i];
       }
       if(b=="double" || b=="int" || b=="float" || b=="string" || b=="char" || b=="bool" || b=="long")
       {
           cout<<b<<" is a keyword"<<endl;
       }
       b=" ";*/

    
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='%' || a[i]=='=')
        {
            cout<<a[i]<<" is a operator"<<endl;
        }
    }
    
    
    
    
    
    return 0;
    
}
