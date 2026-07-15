#include <stdio.h>
#include <conio.h>

    enum week {MON,TUE,WED,THU,FRI,SAT,SUN};

    void main ()
    {
        enum week w;
        w = TUE;

        printf ("\n Consatnt value of Tue is : %d",w);
        getch();
    }
