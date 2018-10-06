//factorial of a number
#include<iostream>
using namespace std;
//declairing the function
int factorial(int n){
  if(n==1){
   return 1;}
  else{
   return n*factorial(n-1);}
}
//driving the function
int main(){
  int a;
  cout<<"what is the number=";
  cin>>a;
  cout<<endl;
  cout<<factorial(a);
return 0;
}

