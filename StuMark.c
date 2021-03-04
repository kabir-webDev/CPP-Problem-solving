#include<stdio.h>
struct student
{
    char name[10];
    int subject[5],total;
};
main ( )
{
    static struct student s[100];
    int n,i,j;
    int  m=0, e=0 , o=0;
    printf("Enter the number of Students: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        s[i].total=0;
        printf("Enter the Marks of Student %d: ",i+1);
        for(j=0; j<5; j++)
        {
            scanf("%d",&s[i].subject[j]);
            s[i].total=s[i].total+s[i].subject[j];
        }


        if (s[i].total >= 350){
            m= m+1;
        }
        else if (s[i].total>=300 && s[i].total <350) {
            e= e+1;
        }
        else
            o= o+1;

    }

    for(i=0; i<n; i++)
    {
    printf("\nMark of student[%d] :%d\n",i+1, s[i].total);
    }


    printf ("\nNumber of Elite : %d", m);
    printf ("\nNumber of Normal : %d", e);
    printf ("\nNumber of weak : %d", o);

}
