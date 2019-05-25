#include<stdio.h>
#include<stdlib.h>
#include <time.h>
typedef struct tedudiant
{
    char matricule[20];
    char nom[25];
    int age;
}ET;
ET *p;
ET* lire();
void ecrire( ET *);
main()
{
    ET *b;
    b=malloc(sizeof(ET));
    b=lire();

    ecrire(b);
    int x=10 , y=3;
    float f;
    f=(float)(x/y);
    printf("%f",(float)f);
    int *p,*a;
    if(p==NULL)
        printf("bonjour initialisation effectue");
    else
        printf("bonsoir monsieur");
    printf("x=%d\n",x);
    p=&x;
    a=p;
    printf("pointeur a sur p=%d\n",*a);
    printf("pointeur p=%d\n",*p);
    printf("a =%d\n",p);

    printf("y=%d\n",y);
    p=&x;
    y=*p;
    printf("y=%d\n",y);
    *p=3;
    printf("x=%d\n",x);

}
ET* lire()
{
        ET *a;
        a=malloc(sizeof(ET));
        printf("maricule\t");
        scanf("%s",a->matricule);
        printf("%s",a->matricule);
        printf("\nNom\t");
        scanf("%s",a->nom);
        printf("\nage");
        scanf("%d",a->age);
        return a;
}
void ecrire(ET *a)
{
    //ET *a;
//a=malloc(sizeof(ET));
        printf("maricule\t");
        printf("%s",a->matricule);
        printf("\nNom\t");
        printf("%s",a->nom);
        printf("\nage");
        printf("%d",a->age);
}
