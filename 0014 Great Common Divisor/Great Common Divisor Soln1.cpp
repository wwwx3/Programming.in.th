#include <iostream>
using namespace std;
int main() 
{
  int mn,a,b = 0 ;
  int gcd;
  cin >> a >> b;
  if (a < b)
    mn = a;
  else 
    mn = b;
  for(int i=1 ; i<=mn ; i++)
  {
    if(a%i==0 && b%i==0)
      gcd = i;
  }
  cout << gcd;
}  
