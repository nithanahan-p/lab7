//sum of digits of a number
#include<iostream>
using namespace std;
//declairing the function
int rev(int n){
  if(n==0){
  return 0;}
  else{
  
  
  //printing the last digit
  cout<<n%10;
  //repeating the function by recursion
  rev(n/10);}
return 0;
}
//driving the function
int main(){
   rev(123);
return 0;
}
