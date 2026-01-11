#include <iostream>
using namespace std;

int main() {
 int kangA , kangB , kangC;
 int max = 0;
 cin >> kangA >> kangB >> kangC;
 if (kangB-kangA >= kangC-kangB)
 {
   max = kangB-kangA;
 }
  else 
  {
    max = kangC-kangB;
  }
  cout << max-1;
}
