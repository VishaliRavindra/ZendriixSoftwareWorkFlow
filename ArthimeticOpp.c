#include<Stdio.h>
#include<conio.h>
int res;
int sum(int x, int y)
int main()
{
  int choice,a,b;
  printf("Select any one of the following operations");
  printf("1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n");
  sacnf("%d", &choice);
  printf("Enter two values");
  scanf("%d%d" , &a,&b);
  if(choice==1)
    {
      printf("sum is %d\n" , int add(a,b));
      else if(choice==2)
      printf("difference is %d\n" int sub(a,b));
      else if(choice==3)
      printf("product is %d\n" int mul(a,b));
      else if(choice==4)
      printf("quotient is %d\n" int div(a,b));
     else
      printf("Wrong Choice");
      getch(); 
   }
  int add(int x, int y){
   res=x+y;
   return res;
  }
  int sub(int x, int y){
   res=x-y;
   return res;
   }
  int mul(int x, int y){
   res=x*y;
   return res;
   }
  int div(int x, int y){
   res=x/y;
   return res; 
   }
}
