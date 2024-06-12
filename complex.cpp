//Write a C++ program using operator overloading concept to add two complex numbers, subtract two complex numbers and to print the complex numbers as real and imaginary part.
#include <iostream>
using namespace std;

class complex{
	float real;
	float imag;
	public:
		void display(){
			cout<<real<<"+i"<<imag<<endl;
		}
		void getcomplex(){
			cout<<"\nenter real part of complex number: ";
			cin>>real;
			cout<<"\nenter imaginary part of complex number: ";
			cin>>imag;
		}
		friend complex operator + (complex,complex);
		friend complex operator - (complex,complex);
};

complex operator + (complex c1,complex c2){
	complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;	
}

complex operator - (complex c1,complex c2){
	complex temp;
	temp.real = c1.real - c2.real;
	temp.imag = c1.imag - c2.imag;
	return temp;	
}

int main(){
	complex c1,c2,c3,c4;
	c1.getcomplex();
	c2.getcomplex();
	
	c3 = c1 + c2;
	c4 = c1 - c2;
	cout<<"complex number 1 : \n";
	c1.display();
	cout<<"complex number 2 : \n";
	c2.display();
	cout<<"addition result : \n";
	c3.display();
	cout<<"subraction result : \n";
	c4.display();
	return 0;
}


