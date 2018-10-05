//sum of all odd numbers
#include<iostream>
using namespace std;
//declairing the function
int sumodd(int n){
  if(n==1){
  return 1;
  }
  else{
     if(n%2==1){
     return n+sumodd(n-2);}
     else{
     //if n is an even
     n=n-1;
     return n+sumodd(n-2);}
  }
}
//driving the function
int main(){
   cout<<sumodd(10);
return 0;
}
   
