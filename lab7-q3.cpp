//printing all even numbers bet 1 and n
#include<iostream>
using namespace std;
//declairing the function
void evennum(int i,int n){
  //stopping condition
  if(i>n){
  }
  else{
  //printing an even number
    if(i%2==0){
    cout<<i<<endl;
    //increase it by 2
    i=i+2;
    //repeat the function by recursion
    evennum(i,n);}
    else{
    i++;
    evennum(i,n);}}
}  
//driving the function
int main(){
   evennum(1,20);
return 0;
}

