#include <iostream>
using namespace std;
#include<math.h>

int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int a, b = 0;
      cin >> a;
      while (a > 0)
	{
	   int tong = 0 ;
	  b = a % 10;
	  tong += b;
	  if (tong > 9&&a<10){
	    tong = a;
	    
	  }
	  a /= 10;
	  
    if(tong <10)cout << tong << endl;
	}



    }
}
