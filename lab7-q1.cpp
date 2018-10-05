#include<iostream>
using namespace std;

int power(int base,int b){
  if(b==0){
  return 1;}
  else{
  return base*power(base,b-1);}
}
int main(){
  int base,b;
  cout<<"base value=";
  cin>>base;
  cout<<endl;
  cout<<"the exp is";
  cin>>b;
  cout<<endl;
  cout<<power(base,b);
return 0;
} 
