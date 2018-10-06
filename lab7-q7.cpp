//to check the number is palindrome or not
#include<iostream>
using namespace std;
//declairing the function
int rev(int n,int i){
  //storing the reverse of the number n
  i=(i*10)+(n%10);
  if(n==0){
    return i;}
  else{
    return rev(n/10,i);}
}
//driving the function 
int main(){
   int n,a;
   int i=rev(n,0);
   cout<<"what is the number";
   cin>>a;cout<<endl;
   if(i==n){
   cout<<"yes it is a palindrome"<<endl;}

   else{
   cout<<"no it is not a palindrome"<<endl;}
return 0;
}


  
    
   
