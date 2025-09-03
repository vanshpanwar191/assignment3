#include<iostream>
using namespace std;
#define S 100;
class stack{
    char arr[S];
    int top;
    public:
       stack(int i){
         S=i;
         top=-1;
       }
       bool isfull(){
         return(top==S-1);
       }
       bool isempty(){
         return(top==-1);
       }
       void push(){
         if(isfull()){
           cout<<"cant enter the string.\n";
         }
         else{
         cout<<"enter the string:\n'";
          cin>>arr[++top];
         }
       }
       void display(){
           for(int i=top;i>=0;i--){
               cout<<arr[i];
           }
       }
    

    
    
};
