#include <iostream>
using namespace std;


   void combine(string& name){

     string phrase = "you are a ";
         
     name = phrase + name;


   }
   int addition(int& n, int& b){

      n = n + b;
      b = n * b;
   }

   int main(){
   int n = 1;
   int b = 2;   
   string name;     

   addition(n,b);

   cout<<n<<endl;
   cout<<b<<endl;

   cout<<"enter a name:";
   cin>>name;
      
   combine(name);

   cout<<name<<endl;
   return 0;
   }
