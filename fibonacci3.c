//Author:DEADPOOL
//User@DEADPOOL
//Device name:LAPTOP-MGJPSU5N
//***************************

//including header files
#include<stdio.h>
#include<math.h>// for pow and sqrt function
// fib  function declaration
int fib(int n) {
  double p = sqrt(5);
  return round(pow((1 + p) / 2, n) / p);
}

// main function

int main ()
{
  //variable declaration
  int n;
  //input
  printf("enter the number to find the fibonacci number....\n ");
  scanf("%d",&n);
  // output
  printf("%d", fib(n));
  return 0;
}
