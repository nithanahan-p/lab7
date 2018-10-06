//sum of digits of a number
#include<iostream>
using namespace std;
//declairing the function
int sumdig(int n){
   if(n==0){
     return 0;}
    else{
     return n%10+sumdig(n/10);}
}
//driving the function
int main(){
  int a;
  cout<<"the number=";
  cin>>a;cout<<endl;
  cout<<sumdig(a);
return 0;
}
   
   
