//Q.No 3
//Create a class named Fruit with a data member to calculate the number of fruits in a basket. 
//Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. 
//Print the number of fruits of each type and the total number of fruits in the basket.(Inheritance)

#include<iostream>
using namespace std;

class Mangoes{
	
	public:
		void show(int m){
			cout<<"\nnumber of fruits in a basket: "<<m;
			
		}
};
class Apple{
	
	public:
		void show(int a){
			cout<<"\nnumber of fruits in a basket: "<<a;
		}
};

class Frutes:public Mangoes, public Apple{
	private:
		int total=0;
		
	public:
		
		void count(int m, int a){
			Mangoes::show(m);
			Apple::show(a);
			total=m+a;
		}
		void show(){
			cout<<"\nTotal Frutes present in basket is: "<<total;
		}
};
main(){
	int a,m;
	cout<<"\nEnter mangoes in basket: ";
	cin>>m;
	cout<<"\nEnter Apples in basket: ";
	cin>>a;
	
	Frutes f;
	f.count(m,a);
	f.show();
	
}