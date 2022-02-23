#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char c[50][50];
    int i,j,n;

    printf("Introduceti numarul de cuvinte din propozitie : ");
    scanf("%d",&n);
    printf("Introduceti o propozitie: ");

   for(i=1;i<=n;i++) scanf("%s",c[i]);

   for(i=1;i<n;i++)
   for(j=i+1;j<=n;j++){

   if(strlen(c[i])<strlen(c[j])) swap(c[i],c[j]);
   else if (strlen(c[i])==strlen(c[j])) { if(strcmp(c[i],c[j])>0) swap(c[i],c[j]); }

   }

   for(i=1;i<=n;i++) printf("%s\n",c[i]);



}
