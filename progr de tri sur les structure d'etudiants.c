#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <string.h>
#include "dimitry.h"
typedef enum sexe{masculin=1,feminin} tsexe;
typedef struct {
char  matricule[20];
char nom[20];
int age;
tsexe  sexe;
int moy;
}Etud;
Etud t[0];
void menu(void);
void lireetudiant(void);
void ecrireetudiant(void);
void triechange( Etud t[], int );
void triehangeopti(void);
void triselect(void);
void triparinsertion(void);
void triebissec(void );
void viderBuffer(void);
void trirapide(void);
void swap(Etud *a, Etud *b);
void criteretrie( void);
int n,i,j;
main()
{
menu();
lireetudiant();
ecrireetudiant();
triechange(t, j);
ecrireetudiant();
}
void menu(void)
{
    printf(" bonjour et bienvenue ");
    rectangle(50,25,1,1);
    rectangle(50,3,1,1);
    gotoxy(15,2);printf("MENU PRINCIPAL");
    gotoxy( 4,5);printf( "1- Lire Un Vecteur");
    gotoxy( 4,7);printf( "2- Ecrire  Un Vecteur");
    gotoxy( 4,9);printf( "3- Trie Par ECHANGE ");
    gotoxy( 4,11);printf( "4- Trie Par ECHANGE OPTIMAL");
    gotoxy( 4,13);printf( "5- Trie Par SELECTION");
    gotoxy( 4,15);printf( "6- Trie Par INSERTION DIRECTE");
    gotoxy( 4,17);printf( "7- Trie Par BISSECTION");
    gotoxy( 4,19);printf( "8- Trie RAPIDE");
    gotoxy( 4,21);printf( "9- QUITTER");
    gotoxy(71,35l);

}
void lireetudiant(void)
{
    system( "cls");
    int rep;i=1;
    do{
    printf(" matricule :\n");
    scanf( "%s",&t[i].matricule);
    viderBuffer();
    printf(" nom:\n");
    scanf(" %s",&t[i].nom);
    viderBuffer();
    printf(" sexe (1 pour Masculin /0 pour Feminin):\n");
     scanf( "%s",&t[i].sexe);
     printf("age:\n");
     scanf( "%d",&t[i].age);
     printf(" moyenne :\n");
     scanf( "%d",&t[i].moy);
     i++;
     printf(" voulez vous continuez (1/0)");
     scanf("%d",&rep);
    }while (rep ==1);
}
void ecrireetudiant(void)
{
    system("cls");
    for (j=1;   j<n  ; j++)
    {
        printf( " \nMATRICULE :");
        printf( " %s",t[j ].matricule);
        printf( "\n NOM  : ");
        printf(" %s", t[j].nom);
        printf("\n SEXE");
        if( t[j].sexe==1)
              printf("MASCULIN");
        else
            printf( " FEMININ");
        printf(" \nAge :");
        printf( "%d",t[j].age);
        printf(" \n MOYENNE");
        printf( " %d ",t[j].moy);
    }
}
void triechange( Etud t[], int j)
{
    int l,m;
    for( l=1; l<j ; l++)
       {
           for ( m=1 ; m < j-l+1; m++)
                  if ( strcmp(t[m].nom ,t[m+1].nom)>0)
                           swap(&t[m] , &t[m+1]);
       }
       printf(" %s",t[1].nom);
       printf(" %s",t[2].nom);
}
void swap(Etud *a, Etud  *b)
{
    Etud per;
    per=*a;
    *a=*b;
    *b=per;
}
void criteretrie( void)
{
    rectangle(25,15,5,5);
    rectangle(25,4,7,8);

}
void viderBuffer(void)
{
    int c=0;
    while((c=getchar())!='\n'&&c!=EOF);
}
