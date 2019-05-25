#include <stdio.h>
#include <stdlib.h>
void lire (int t[], int);
void ecrire (int t[], int);
void permute(int  *a ,int *b);
void triechange( int t[] ,int );
void trieechangeopt(int t[], int);
int indexmin(int t[], int,int );
void trieselection(int t[], int);
#define taille 20
int t[ taille];
int tab[ 10] ;
int c,n;
main ()
{
int i;
    printf(" entrez le nombre de nmobre n=");
    scanf("%d",&n);
    lire(t,n);
    ecrire(t,n);
    /*tab[1]=3;tab[2]=2;
    permute(&tab[1],&tab[2]);*/
    triechange(t,n);
    printf("\n \nApres trie par echange on a :\n");
    ecrire(t, n);
    trieechangeopt( t, n);
    printf("\n\n Apres trie par echange optimal  on a :\n");
    ecrire(t,n);
    trieselection( t, n);
    printf("\n\n Apres trie par selection  on a :\n");
    ecrire(t,n);
    system("PAUSE");
}

void lire( int t[],int n)
{
    int x;
    for(x=1; x<n+1 ;  x++)
    {
        printf("entrez   t[%d] nombre \t\t",x);
        scanf("%d",&t[x]);
    }
}
void ecrire (int t[] , int n)
{
    for (c=1; c<n+1 ;c++)
        printf("%d \t",t[c]);
}
void permute(int *a , int *b)
{
    int per;
    per =*a;
    *a=*b;
    *b= per;
}
void triechange(int t[],int n )
{
   int j,i,k;
   for (k=1; k<n; k++)
   {
       for(i=1; i <( n-k+1 ) ; i++)
       {
          if  (t[i]  > t[i+1] )
               permute(&t[i],&t[i+1]);
        }
   }
   /*for (j=1 ; j<n+1; j++)
       printf("%d\t",t[j]);*/
}
void trieechangeopt(int t[], int n)
{
 int trie=0, i,k=1;
 while( (k<=n-1) && (!(trie)) )
             {
                 trie=1;
                 for (i=1; i<n-k+1 ; i++)
                   if(  t[i] > t[i+1])
                       {
                           permute( &t[i] , &t[i+1]);
                           trie=0;
                       }
                 k++;
             }
}
int indexmin(int t[], int a ,int n )
{
int min,i;
min=a;
for(i=a+1 ; i< n+1; i++)
    if( t[min] > t[i])
       min=i;
return min;
}
void trieselection(int t[], int n )
{
    int r,q;
    for (r=1;r<n;r++)
    {
        q=indexmin(t, r, n);
        permute(&t[r],&t[q]);
    }
}
