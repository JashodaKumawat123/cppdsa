#include<iostream>
#include<stack>
using namespace std;

stack<int> s1;
int main(){
	//cout<<s1.empty();
	s1.push(10);
	s1.push(12);
	s1.push(20);
	s1.push(30);
	while(!s1.empty()){
		cout<<s1.top()<<" ";
		s1.pop();
		
	
	}
	cout<<"\n"<<s1.empty();
	
//    cout<<s1.top();
//    s1.pop();
//    cout<<s1.top();
//    cout<<s1.empty();
	
			return 0;
}

