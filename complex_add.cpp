#include<iostream>
using namespace std;
class Complex{
	int real;
	int img;
 public:
 Complex(){}
    Complex(int real ,int img){
    	this->real=real;
    	this->img=img;
    	}
    	
    void display(Complex c1){
    	cout<<c1.real<<" + "<<c1.img<<"i"<<endl;
    	}
    Complex add(Complex c1,Complex c2){
    	Complex c3;
    	c3.real=c1.real+c2.real;
    	c3.img=c1.img+c2.img;
    	return c3;
    	//display(c3);
    	}
	    void sub(Complex c1,Complex c2){
    	Complex c3;
    	c3.real=c1.real-c2.real;
    	c3.img=c1.img-c2.img;
    	
    	//display(c3);
    	}
    void mult(Complex c1,Complex c2){
    	Complex c3;
    	c3.real=(c1.real*c2.real)+(c1.img*c2.img);
    	c3.img=(c1.real*c2.img)+(c2.real*c1.img);
    	
    	//display(c3);
    	}

	
	};

int main(){
Complex c1(2,3);
Complex c2(4,5);
 Complex c3;
 
 c3=c3.add(c1,c2);
 c3.display(c3);
	
	
	return 0;
	}