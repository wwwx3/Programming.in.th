#include <iostream>
using namespace std;
int main (){
    string input;
    cin>>input;
    
    int a=1,b=0,c=0,ball;
    for(int i=0 ; i<input.length();i++){
    if(input[i]=='A'){
        ball=a;
        a=b;
        b=ball;
    }else if(input[i]=='B'){
        ball=b;
        b=c;
        c=ball;
    }else if(input[i]=='C'){
        ball=a;
        a=c;
        c=ball;
    }
        
 }
 if(a==1){
     cout<<1;
 }else if(b==1){
     cout<<2;
 }else if(c==1){
     cout<<3;
 }
    return 0;
}
