#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	int data;
	struct node *link;

};


 void count_of_nodes(struct node *head){
 	//int count=0;
 	if(head==NULL)
 	  cout<<"linkedlist is empty";
 	struct node *ptr =NULL;
 	ptr =head;
 	while(ptr!=NULL){
 	//	count++;
 	    cout<<ptr->data;
 		ptr=ptr->link;
	 }
	 //cout<<count;
 }

int main(){
	struct node *head =(struct node*)malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;
	
	struct node *current = (struct node*)malloc(sizeof(struct node));
	current->data =80;
	current->link=NULL;
	head->link=current;
	
	current =(struct node*)malloc(sizeof(struct node));
	current->data =40;
	current->link=NULL;
	head->link->link=current;
	
	count_of_nodes(head);
	
	return 0;
	
}
