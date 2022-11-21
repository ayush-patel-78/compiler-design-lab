#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
     int noc=0; // characters
	int now=0; // words
	int nol=0; // lines
	int nos=0; // spaces
     FILE *fr;
     char fname[20],ch;

     cout<<"\n Enter Source File Name : ";
     gets(fname);
     fr=fopen(fname,"r");
     if(fr==NULL)
     {
          cout<<"\n Invalid File Name. \n No such File or Directory ";
          exit(0);
     }
     ch=fgetc(fr);
     while(ch!=EOF)
     {
          if(ch!=' ' && ch!='\n'){
               noc++;
          }
          if(ch==' '){
			now++;
			nos++;
          } 
          if(ch=='\n'){
               nol++;
               now++;
          }
          ch=fgetc(fr);
     }

     now++;nol++;

     fclose(fr);
     cout<<" -------------------------------------";
     cout<<"\n Total No. of Characters  : "<<noc;
     cout<<"\n Total No. of Words       : "<<now;
     cout<<"\n Total No. of Lines       : "<<nol;
     cout<<"\n Total No. of Spaces      : "<<nos;
     cout<<endl<<endl;

     return 0;
}