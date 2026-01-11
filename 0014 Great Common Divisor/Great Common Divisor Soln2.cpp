#include <iostream>
using namespace std;
int gcd(int a , int b)
{ 
  int c=1;
  while (c!=0)
    {
     c = a%b;
     a = b;
     b = c;
    }
     return  a;
}

int main() 
{
  int a,b;
  cin >> a >> b;
  cout << gcd(a,b);
}
