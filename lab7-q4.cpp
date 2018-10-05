//sumof all natural numbers
#include<iostream>
using namespace std;
//declairing the function
int sum(int n){
  
  if(n==1){
  return 1;
  }
  else{
  return n+sum(n-1);
  }
return 0;
}
//driving the function
int main(){
  cout<<sum(10);
return 0;
}
