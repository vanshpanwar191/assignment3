
#include<iostream>
using namespace std;
#define MAX 5
class stack{
	int arr[MAX];
	int top;
	public:
		stack(){
			top=-1;
		}
		bool isfull(){
			return(top==MAX-1);
		}
		bool isempty(){
			return (top==-1);
		}
		void push(int x){
			if(isfull()){
				cout<<"stack is full cant add";
			}
			else{
				arr[++top]=x;
				cout<<"element added";
			}
	
		}
		void pop(){
			if(isempty()){
				cout<<"stack is empty";
			}
			else{
				
				cout<<"element poped "<<arr[top];
				arr[top--];
			}
		}
		void peek(){
			if(isempty()){
				cout<<"stack is empty";
				
			}
			else{
				cout<<"peek element is "<<arr[top];
			}
		}
		void display(){
			if(isempty()){
				cout<<"stack is empty";
			}
			else{
				for(int i=top;i>=0;i--){
					cout<<arr[i]<<" ";
				}
			}
		}
};
int main(){
	stack s;
	int choice,value;
	int i=1;
	while(i>0){
	
	cout<<"----MENU----";
	cout<<"1.push"<<"\n";
	cout<<"2.pop"<<"\n";
	cout<<"3.peek"<<"\n";
	cout<<"4.isfull"<<"\n";
	cout<<"5.isempty"<<"\n";
	cout<<"6.display"<<"\n";
	cout<<"7.exit"<<"\n";
	cout<<"enter your choice:\n";

	cin>>choice;
	

	
		
	
	   switch(choice){
		   case 1:
			  cout<<"enter the value:\n";
			   cin>>value;
			   s.push(value);
			   break;
			case 2:
				s.pop();
				break;
			case 3:
				s.peek();
				break;
			case 4:
				if(s.isfull()){
					cout<<"stack is full.overflow";
					
				}
				else{
					cout<<"stack is not full";
				}
				break;
			case 5:
				if(s.isempty()){
					cout<<"stack is empty.underflow";
				}
				else{
					cout<<"stack is not empty";
				}
				break;
			case 6:
				s.display();
				break;
			case 7:
				exit(0);
			default:
				cout<<"invalid choice!";
			   
	    }
    }
}
