//write a program to perform the push and pop operation on stack by uysing linkedlist
#include<iostream>
using namespace std;
struct link{
	int data;
	link *next;
	
};
link *top=NULL, *node;
int ch;
int no;

void push(int);
void pop();
void display();

int main(){
      cout<<"1.PUSH 2.POP 3.DISPLAY 4.EXIT"<<endl;
      while(1){
      	cout<<"enter the choice(1/2/3/4): ";
      	cin>>ch;
      	switch(ch){
      		case 1: 
      		cout<<"enter the choice";
      		cin>>no;
      		push(no);
      		
				break;
				case 2 :
					pop();
					break;
					case 3:
						display();
						break;
						case 4:
						exit(0);
						default:
							cout<<"invalid choice"<<endl;
							break;
			  }
		  }
	  
      

return 0;
}
void push(int val){
	node =new link();
	node->data =val;
	node->next =top;
	top=node;
	
}
void pop(){
	int item;
	
	if(top==NULL){
		cout<<"stack underflow";
		
	}
	else{
		item=top->data;
		top=top->next;
		cout<<"deleted item is: "<<item<<endl;
		
		
	}
}
void display(){
	link *ptr=top;
	if(top==NULL){
		cout<<"stack is empty"<<endl;
		
	}
	else{
		while(ptr!=NULL){
			cout<<ptr->data;
			ptr=ptr->next;
		}
		
	}
}


