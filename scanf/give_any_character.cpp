/*
%*c would exclude one character. Remember, ‘/n’ and ‘/t’ are single characters.
%*d would exclude one integer.
%*f would exclude one float.
%*s would exclude one word.
*/

#include <iostream>
using namespace std;
int main()
{
 int d,m,y;
  cout << "input day :  ";
  cin >> d;
  cout << "input month :  ";
  cin >> m;
  cout << "input years :  ";
  cin >> y;
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
