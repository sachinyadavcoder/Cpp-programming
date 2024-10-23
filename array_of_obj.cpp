#include <iostream>
#include <string>
using namespace std;
class ShopItem {
	int Qty;
	float price;
	string Name;
public:
	void setdata(int a,float b,string c) {
    price=b;
    Name=c;
    Qty=a;
	    
	}
	void get() {
		cout<<"Name : "<<Name<<endl;
		cout<<"price : "<<price<<endl;
		cout<<"Qty : "<<Qty<<endl;
	}
};
int main()
{
    int size,a;
    float b;
    string c;
ShopItem *ptr = new ShopItem[size];
ShopItem *ptrItem=ptr;
for(int i=0;i<size;i++){
    cout<<"Enter the details of the item no "<<i+1<<endl;
    cout<<"Name : ";
    cin>>c;
    cout<<"price : ";
    cin>>b;
    cout<<"Qty : ";
    cin>>a;
    ptr->setdata(a,b,c);
    ptr++;
}
for(int i=0;i<size;i++){
 ptrItem->get();
 ptrItem++;
    
 }
}
