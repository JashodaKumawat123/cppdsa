//if we have array why do we use vectors
// we cannot resize array but in vector we can automatically manage size of elements
#include<iostream>
#include<vector>

 using namespace std;
 void display (vector<int> &v){
    for(int i =0; i<v.size();i++)
 {
    cout<<v[i]<< " ";
 }
 cout<<endl;
 }

 int main(){
    vector<int> vec1;
    int element, size;
    cout<<"enter the size of vector"<<endl;
    cin>>size;
    for(int i =0; i<size;i++)
    
    {
      
        cout<<"enter an elemnt to add to this vector";
        cin>>element;
        vec1.push_back(element);
    }
    cout << "Vector elements: ";
    display(vec1);
 
    return 0;
 }