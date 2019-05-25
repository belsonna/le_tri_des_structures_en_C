#include <stdio.h>
#include<stdlib.h>
#include <stddef.h>
typedef struct tetudiant
{
    char matri[20];
    char nom[20];
    char  genre[20];
} ;
char nomfichier[50];
FILE *f;
struct tetudiant t[0];
int n;
void  creerfichiervecteur(tetudiant t[] ,int );
void ecriretudiant( tetudiant t[], int );
main ()
{
    printf(" entrez le nombre d' etudiant a enregistre  ");
    scanf("%d",&n);
    creerfichiervecteur(t,n);
}
void  creerfichiervecteur( tetudiant t[],int n)
{
    int i;
     printf(" entrez le nom du fichier  ");
     scanf (" %s", &nomfichier);

     f=fopen( nomfichier,"w");
     while ( f== NULL)
     {
//         fwrite( t , sizeof( struct ),1 ,f);
         fclose(f);
        // fread(&t, n*, sizieof(t), f);
        // fclose(f);
     }
     if(f != NULL)
         {
               printf(" Vous  pouvez maintenant faire des enregistrement ");
         }
    else
        {
            printf("  Impossibble d' ouvrir le fichier %s  ", nomfichier);
        }
    fputs("dimitry",f);
    printf(" quel age avez vous monsieur ");
    scanf("%d", &i);
    fprintf(f," je suis un tres beau garcon %d", i);
    ecriretudiant( t,n);

}
void ecriretudiant(tetudiant t[], int n)
{
    int i;
    for (i=1; i<n+1 ; i++)
    {
         printf(" Enregistrement du %d etudiant\n ", i);
         printf("Matricule \t ");
         scanf( " %s",&t[i].matri);
         printf(" Nom \t ");
         scanf( " %s",&t[i].nom);
         printf(" Genre\t ");
         scanf( " %s",&t[i].genre);

    }
}
