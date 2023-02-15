#include <iostream>
using namespace std;
const int length=5;
int array[length];
//input function
void input(int arr[],int length){
	cout<<"Enter the values for array"<<endl;
    for(int i=0;i<length+1;i++){
    	
    	cout<<"Input value"<<i+1<<endl;
        cin>>arr[i];
    }
    
}
//display function
void display(int arr[],int length){
      cout<<"array : "<<"[ ";
    for(int i=0;i<length+1;i++){
      
        cout<<arr[i]<<" ";
       
    }
    cout<<"]"<<endl;
}
int main(){
    input(array,length);
    display(array,length);
    
    
    
    return 0;
}
