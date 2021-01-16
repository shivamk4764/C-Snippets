#include<stdio.h>

void Fun();

int main()
{
   printf("Inside main\n");
   
   Fun();
   //printf("%d\n",no3); //Error

   return 0;
}


void Fun()  
{

  int no1=11;
  auto int no2=21;
  int no3;
  
  printf("%d\n",no3); //22085 i.e Garbage (Default value)

  printf("Inside Fun\n");

}














