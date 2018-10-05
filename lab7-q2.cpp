//programme to print all the natural num bet 1 and n
#include<iostream>
using namespace std;
//declairing the function
void natnum(int i,int n){
  //stopping condition
  if(i>n){
  }
  else{
  //printing a number
  cout<<i<<endl;
  //increase value by one
  i++;
  //repeat by recursion
  natnum(i,n);}
}
//driving the function
int main(){
  natnum(1,20);
return 0;
}
