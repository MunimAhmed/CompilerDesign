/*Rules*/
%%
"hello world" {printf("GOODBYE\n");}
[A-Za-z0-9] {printf("alpha numeric\n");}
. {printf("Wrong Input\n");}

%%

/* User defined function */
int yywrap()
{
return 1;
}
/* Main */
 int main()
{
yylex();
return 0;
}