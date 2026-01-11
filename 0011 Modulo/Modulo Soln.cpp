#include <iostream>
using namespace std;
int main() 
{
  int cnt[42]={};
  int num; 
  int ans;
  
  for(int i=0;i<10;i++)
    {
      cin>>num; 
      ans = num % 42;
      cnt[ans]++;
    }
  ans = 0;
  for(int i = 0 ; i < 42 ; i++)
  {
     if (cnt[i] >= 1) 
     {
        ans++;
     }
  }
  cout << ans;
}
