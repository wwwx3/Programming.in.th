#include <iostream>
using namespace std;

int main() {
  int arr[4];
  int secmx  =  0;
  int mx = 0 ;
  int mxindex = 0 ;
  int mn = 100; 
  int ans = 0;
  for(int i = 0 ; i < 4 ; i++)
    cin >> arr[i];
  //cout << arr[i];
  for(int i = 0 ; i < 4 ; i++)
  { 
    if (arr[i] < mn )
    {
      mn = arr[i];
    }
    if (arr[i] > mx)
    {
      mx = arr[i];
      mxindex = i;
    }
    /*if (arr[i] == mx)
    {
      mxindex = i;
    }*/
  }
  for(int i = 0 ; i < 4 ; i++)
  {
   if (i != mxindex) 
   {
     if (arr[i] > secmx)
     {
       secmx = arr[i];
     }
   }
  }
  ans = mn*secmx;
  cout << ans;
  //cout << mn << " " << mx << " " << mxindex<< " "<<secmx;
 
}
