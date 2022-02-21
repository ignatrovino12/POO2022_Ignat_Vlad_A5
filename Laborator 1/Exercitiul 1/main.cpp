#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{   char c[100];
    int s=0,nr=0,i;
    FILE *pfile;
    pfile=fopen("in.txt","r");

   if(pfile!=NULL){

   while(fgets(c,100,pfile)!=NULL){
   nr=0;

    for(i=0;i<=(int)strlen(c)-2;i++) {nr=nr*10;
                                 nr=nr+(c[i]-'0');}

   s=s+nr;
   //printf("Numarul actual: %d\n", s);
   }
   printf("Suma este: %d\n", s);
   }

}
