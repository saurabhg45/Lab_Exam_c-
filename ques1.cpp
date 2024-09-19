//Banking system
//Add record:
//show data
//search record
//edit record
//delete record
#include<iostream>
#include<fstream>

using namespace std;

void create(){
	string line;

	ofstream out;
	out.open("Record.txt", ios::app);
	out<<"\n--------------Wellcome to Banking system-----------------\n";
	
	
	cout<<"\nEnter the data of customer: \n";
	
	
	while(true){
		string name, balance, acc_no;
		int n;
	cout<<"\nEnter the name: ";
	cin>>name;
	cout<<"\nEnter the account no: ";
	cin>>acc_no;
	cout<<"\nEnter the balance: ";
	cin>>balance;
	out<<"\nName: "<<name<<"\tAccount no: "<<acc_no<<"\tBalance: Rs"<<balance;
	cout<<"\nIf you want to add other data?(press: 1/0): ";
	cin>>n;
	if(n==0){
		break;
	}
	}
}
 void show(){
 	string line;
 	
 	ifstream in;
 	in.open("Record.txt");
 	cout<<"\nHere banking records of customers.\n";
 	while(getline(in, line)){
 		cout<<line<<endl;
	 }
 	in.close();
 }

void search(){
	string name;
	
}
main(){
	int n;
	int key;
	do{
		cout<<"\n--------------Wellcome to Banking system-----------------\n";
		cout<<"\n1. Create.";
		cout<<"\n2. show.";
		cout<<"\n3. Exit.";
		
		
		cout<<"\nEnter the the choice: ";
		cin>>n;
		if(n)
		
		switch(n){
			case 1:
				    create();
				    break;
			case 2:
				    show();
				    break;
			
		}
		cout<<"\nDo you want to continue? press(1/0): ";
		cin>>key;
		
	}while(key==1);


}