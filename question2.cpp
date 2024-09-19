//Q.No 2.
//Write a C++ program to accpet worker information Worker_Name, 
//No_Of_Hours_Worked, Pay_Rate and Salary. Write necessary functions 
//to calculate and display the salary of Worker. (Use Default values 
//for Pay_Rate Rs. 500 per hours)

#include<iostream>
using namespace std;
class Worker{
	private:
		string worker_name;
		int No_Of_Hours_Worked;
		int pay_rate, salary;
	public:
		Worker(){
			pay_rate=500;
		}
		void set(string name, int work_done){
			worker_name=name;
			No_Of_Hours_Worked=work_done;
			
			salary=pay_rate*No_Of_Hours_Worked;
			
		}
		void display(){
			cout<<"\nName: "<<worker_name<<"\tNo_Of_Hours_Worked: "<<No_Of_Hours_Worked<<"\tSalary: Rs-"<<salary;
		}
};
 main(){
 		string name;
		int hour;
		
		
		cout<<"Enter the name of worker: ";
		cin>>name;
		cout<<"\nHow many hour of work done: ";
		cin>>hour;
		
		Worker w1;
		w1.set(name,hour);
		w1.display();
		
		
 	
 }
