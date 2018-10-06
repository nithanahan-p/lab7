//finding the nth fibonacci number
#include<iostream>
using namespace std;
//declairing the function
int fibonacci(int n){
   if(n==1){
    return 0;}
   if(n==2){
    return 1;}
   else{
    return fibonacci(n-1)+fibonacci(n-2);}
}
//driving the function 
int main(){
  int a;
  cout<<"n value=";
  cin>>a;cout<<endl;
  cout<<fibonacci(a);
return 0;
}
  
     
