#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libwritten.h"

//int y = 1;
//int n = 0;

char *nwline;
FILE* temp;
FILE* temp2;
char *str;
int printred(int isBold, int isNewl)
{
  if(isNewl == 1)
         {
           char nwline ="\n";
         }

         if(isBold == 1)
         {
           printf("\n\033[1;31m");
         }else printf("\n\033[0;31m");
         return(0);
  
       
}

int printgreen(int isBold, int isNewl)
{
  if(isNewl == 1)
         {
           char nwline ="\n";
         }

         if(isBold == 1)
         {

           printf("\n\033[1;32m");
         }else printf("\n\033[0;32m");
         return(0);
  
       
}


int printyellow(int isBold, int isNewl)
{
  if(isNewl == 1)
         {
           char nwline ="\n";
         }

         if(isBold == 1)
         {

           printf("\033[1;33m");
         }else printf("\033[0;33m");
         return(0);
  
       
}

int printblue(int isBold, int isNewl)
{
  if(isNewl == 1)
         {
           char nwline ="\n";
         }

         if(isBold == 1)
         {

           printf("\033[1;34m");
         }else printf("\033[0;34m");
         return(0);
  
       
}

int printmagneta(int isBold, int isNewl)
{
  if(isNewl == 1)
         {
           char nwline ="\n";
         }

         if(isBold == 1)
         {

           printf("\033[1;35m");
         }else printf("\033[0;35m");
         return(0);
  
       
}

int printcyan(int isBold, int isNewl)
{

          if(isNewl == 1)
          {
           nwline = "\n";
          }

         if(isBold == 1)
         {

           printf("%s \033[1;36m", nwline);
         }else printf("%s \033[0;36m", nwline);
         return(0);
  
       
}

int printreset(int isNewl)
{
         if(isNewl == 1)
         {
           char nwline ="\n";
         }

           printf("\033[0m");
           return(0);
  
       
}


void night(int delay)
{
  int temp = 0;
  temp = delay * 1000;
   for (int i = 0; i <= temp; i++)
   {
     for (int i = 0; i <= temp; i++)
     {
        printf("");
     }
   }
}

void cbycprint(char* toWrite, int speed)
{
   //printf("%s\n", toWrite);
   //printf("length of toWrite=%d\n", strlen(toWrite));

   for(int i=0; i <= strlen(toWrite); i++)
   {
     printf("%c", toWrite[i]);
     //sleep(1);
     night(speed);
     
     if (i == strlen(toWrite) - 1)
     {
       printf("\n");
     }
   }

}

void opentxt(char *name, int shouldCBYC, int speed)
{
  temp = fopen(name, "r"); 
    if (temp == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    str = fgetc(temp); 
    while (str != EOF) 
    { 
      if(shouldCBYC == 1)
        {
          cbycprint(str, speed);
        }
        printf ("%c", str); 
        str = fgetc(temp); 
    } 
  
    fclose(temp); 
    return 0; 
}


/*void writetxt(char *name, char *data)
{
    temp2 = fopen(name, "w"); 
    if (temp == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    str = fgetc(temp2);
    fprintf(temp2,"%s",data);
    
    fclose(temp2); 
    return 0; 
}*/
