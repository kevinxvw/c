#include<stdio.h>
int main()
{
 int d,m,y;
  printf("enter date month year ");
  scanf("%d%*c%d%*c%d",&d,&m,&y);
  printf("date: %d\nmonth: %d\nyear: %d",d,m,y);
return 0;
}
/*
enter date month year: 12-11-1996
date: 12
month: 11
year: 1996

enter date month year: 11/11/2000
date: 11
month: 11
year: 2000
*/
