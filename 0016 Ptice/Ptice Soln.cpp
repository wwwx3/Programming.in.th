#include <iostream>
using namespace std;
int main() 
{
 int n;
 int cnta = 0;
 int cntb = 0;
 int cntg = 0;
 int mx = 0;
 cin >> n;
 char ans[n];
 for (int i = 0 ; i<n ; i++)
 {
   cin >> ans[i];
 }
 char Adrian[]="ABC";
 char Bruno[]="BABC";
 char Goran[]="CCAABB";
 for (int i=0 ; i<n ; i++)
 {
   if (ans[i]==Adrian[i%3])
   {
     cnta+= 1;
   }
   if (ans[i]==Bruno[i%4])
   {
    cntb+= 1;
   }
   if (ans[i]==Goran[i%6])
   {
     cntg+= 1;
   }
   //cout << i%3 <<" "<<i<<"\n";
 }
   /*cout << "Adrian"<< cnta <<"\n";
   cout << "Bruno"<< cntb <<"\n";
   cout << "Goran"<< cntg <<"\n";*/
   if (cnta > cntb)
   {
     mx = cnta;
   }
   else 
   {
     mx = cntb;
   }
   if (mx < cntg)
   {
     mx = cntg;
   }
   cout <<mx<<"\n";
   if (mx == cnta)
   {
     cout <<"Adrian"<<"\n";
   }
   if (mx == cntb)
   {
     cout <<"Bruno"<<"\n";
   }
   if (mx == cntg)
   {
     cout <<"Goran"<<"\n";
   }
   
}
