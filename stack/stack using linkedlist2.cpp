#include <iostream>
using namespace std;
struct link
{
int data;
link *next;
};
link *top=NULL,*node;
void push(int);
void pop();
void display();
int main()
{
int ch,no;
cout<<"1.push 2.pop 3.display 4.exit "<<endl;
while(1)
{
cout<<"enter your choice(1/2/3/4) :";
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter the element :";
cin>>no;
push(no);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
cout<<"Invalid choice !"<<endl;
break;
}
}
return 0;
}
void push(int val)
{
node=new link();
node->data=val;
node->next=top;
top=node;
}
void pop()
{
int item;
if(top==NULL)
{
cout<<"stack underflow "<<endl;
}
else
{
item=top->data;
top=top->next;
cout<<"deleted item is: "<<item<<endl;
}
}
void display()
{
struct link *ptr=top;
if(ptr==NULL)
{
cout<<"stack is empty "<<endl;
}
else
{
while(ptr!=NULL)
{
cout<<ptr->data;
ptr=ptr->next;
}
}
}
