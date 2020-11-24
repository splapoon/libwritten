#include <stdio.h>
#include "libwritten.h"

//int y = 1;
//int n = 0;



 void main()
  {

    system("clear");
    char writer[100] = {"Hello World!"};
    printred(1, 1);
    printf("Hello this should be bold red!");
    printred(0, 1);
    printf("Hello this should be ordianry red!");
    printgreen(1, 1);
    printf("Hello this should be bold green!");
    printgreen(0, 1);
    printf("Hello this should be ordianry green!");
    printyellow(1, 1);
    printf("Hello this should be bold yellow!");
    printyellow(0, 1);
    printf("Hello this should be ordianry yellow!");
    printblue(1, 1);
    printf("Hello this should be bold blue!");
    printblue(0, 1);
    printf("Hello this should be ordianry blue!");
    printmagneta(1, 1);
    printf("Hello this should be bold magneta!");
    printmagneta(0, 1);
    printf("Hello this should be ordianry magneta!");
    printcyan(1, 1);
    printf("Hello this should be bold cyan!");
    printcyan(0, 1);
    printf("Hello this should be ordianry cyan!");
    printreset(0);
    printf("Hello this should be ordinary");
    printreset(0);
    printf("Hello this should be ordianry too");
    cbycprint(writer,15);
    cbycprint(writer,10);
    cbycprint(writer,5);
    cbycprint(writer,3);
    printred(1, 1);
    printf("Red");
    printblue(1, 0);
    cbycprint("Bull",15);
    opentxt("lonk.txt");
    getchar();
    return 0;
  }


 
