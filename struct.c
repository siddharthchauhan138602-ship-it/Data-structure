#include <stdio.h>
#include <string.h>

 struct student {
    int rollno;
    char name[50];
 };

int main()
    {
        struct student s1;

        printf ("Enter Roll Number:");
        scanf ("%d",&s1.rollno);

        fflush(stdin);

        printf ("\n Enter Name :");
        gets (s1.name);

        printf("\n Student data is as follows");
        printf("\n**********");

        printf("\n Roll no is : %d",s1.rollno);
        printf("\n Name is:%s",s1.name );

        return 0;

    }
