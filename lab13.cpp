#include <iostream>
using namespace std;


   void addAll(int& n, int& x){

     n++;

     cout<<x;

     if(!(x == n)){
        x++;
        addAll(n,x);
     }

      return;
   }

   int main(){

     int n;
     int x = 1;

     cout<<"please enter a number"<<endl;
     cin>>n;

      addAll(n,x);

      return 0;
   }

