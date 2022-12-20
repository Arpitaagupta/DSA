#include<stdio.h>
int main(){
  int a[4][4]= {{10,0,0,0},{0,20,0,0},{0,0,0,30},{0,0,40,0}};
  int i, j, n=0, b[3][4];
  for(i=0;i<4;i++)
  {
      for(j<0;j<4;j++)
  {
      if (a[i][j] !=0)
      {
          b[0][n]= i;
          b[1][n] = j;
          b[2][n] = a[i][j];
          n++;
          }
  }
  }
  for(i=0;i<4;i++)
  {
      for(j<0;j<4;j++)
  {
      printf("%5d", b[i][j]);
  }
  printf("\n");
  }
  
   return 0;
}
