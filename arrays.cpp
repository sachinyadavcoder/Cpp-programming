#include <iostream>
using namespace std;
int find(int arr[],int size,int x){
  //  int y;
    //y=sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<size;i++){
        if(x==arr[i]){
            cout<<"The element "<<x<<" is present in the array "<<endl;
            return 0;
        }
        
    }
    cout<<"element is not present";
    
}
int main(){
    int arr[5]={33,12,45,3,5};
    find(arr,5,3);
    
    
    
}