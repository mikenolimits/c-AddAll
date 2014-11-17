#include <iostream>
using namespace std;



   int addDownTwo(int& n, int& total){

    if(n % 2){
     n =  n - 2;
     total = total + n;
     addDownTwo(n);
   }

   return total; 
   }

   void addAll(int& n, int& x){


     cout<<x;

     if(x < n){
        x++;
        addAll(n,x);
     }

      return;
   }

   int main(){

     int n;
     int x = 1;
     int total = 0;


     cout<<"please enter a number"<<endl;
     cin>>n;

      addAll(n,x);

      total = addDownTwo(n,total);
      
      cout<<total;

      return 0;
   }

