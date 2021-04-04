//Author:DEADPOOL
//User@DEADPOOL
//Device name:LAPTOP-MGJPSU5N
//***************************


//including header files
#include <stdio.h>
//function declaration
void product(int F[2][2], int M[2][2]);

void power(int F[2][2], int n);

//fib function definition
int fib(int n)
{
  int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}

//power function definition
void power(int F[2][2], int n)
{
  if( n == 0 || n == 1)
      return;
  int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  product(F, F);

  if (n%2 != 0)
     product(F, M);
}
// product function definition
void product(int F[2][2], int M[2][2])
{

  int M1=(F[0][0]+F[1][0])*(M[0][0]+M[0][1]);
  int M2=(F[0][1]+F[1][1])*(M[1][0]+M[1][1]);
  int M3=(F[0][0]-F[1][1])*(M[0][0]+M[1][1]);
  int M4=F[0][0]*(M[0][1]-M[1][1]);
  int M5=(F[1][0]+F[1][1])*(M[0][0]);
  int M6=(F[0][0]+F[0][1])*(M[1][1]);
  int M7=F[1][1]*(M[1][0]-M[0][0]);


  F[0][0]=M2+M3-M6-M7;
  F[0][1]=M4+M6;
  F[1][0]=M5+M7;
  F[1][1]=M1-M3-M4-M5;
}

//main function
int main()
{
  //variable declaration
  int n ;
  // input from user
  printf("enter the number to find the fibonacci number....\n ");
  scanf("%d",&n);
  // output
  printf("%d", fib(n));
  getchar();
  return 0;
}
