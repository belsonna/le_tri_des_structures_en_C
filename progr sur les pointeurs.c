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


    /*time_t t;
    struct tm *tm;
    time(&t);
    puts(ctime(&t));  Thu Feb 27 11:26:36 1997
    tm = localtime(&t);
    puts(asctime(tm));  Thu Feb 27 11:26:36 1997
    tm->tm_year = 94;
    tm->tm_mday = 16;
    tm->tm_mon = 10;
    t = mktime(tm);
    puts(ctime(&t));  Wed Nov 16 11:26:36 1994
    t -= 20*86400;
    puts(ctime(&t)); /* Thu Oct 27 11:26:36 1994 */


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
