//wap to sum of series from 1+2+3+.................+10

#include<stdio.h>
main()
{
  int a=1,s=0;
  while(a<=10)
  {
  	s=s+a; 
  	a++;
  }
  printf("sum=%d",s);
  return 0;
	
}
