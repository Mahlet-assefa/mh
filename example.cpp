#include<iostream>
using namespace std;
void a();
void b();
int main(){
     a();
     b();
}
void a(){
  cout<<"hey";
  b();
}
void b(){
   cout<<"hi";
   a();
}