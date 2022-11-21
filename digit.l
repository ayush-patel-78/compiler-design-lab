

%%
[0-9] {printf("digit\n");}
[A-Z] {printf("Capital Letter\n");}
[a-z] {printf("Small Letter\n");}

%%
int yywrap(){}
int main() 
{
    yylex();
    return 0;
}


