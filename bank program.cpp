#include<iostream>
using namespace std;
class bank_acc
{
private:
	double balance;
	double interest_rate;
	double interest;
	int trans;
public:
	bank_acc(double,double);
	void setinterest_rate(double);
	void make_deposit(double);
	void withdraw(double);
	void calc_interest();
	double getbalance();
	double getinterest();
	int gettransactions();



};

bank_acc::bank_acc(double b,double a)
{
	balance=b;
	interest_rate=a;
	interest=0;
	trans=0;	
}

void bank_acc::setinterest_rate(double a)
{
	interest_rate = a;
}
void bank_acc:: make_deposit(double b)
{
	balance =b;
}
void bank_acc::withdraw(double c)
{
	while(c>=balance ||cin.fail())
	//input validations...
	{cin.clear();
	cin.ignore(123,'\n');
	cout<<"Your account dont have sufficent amount.Please enter again:\n";
	cin>>c;
	}
	balance = balance - c;
	
}
void bank_acc::calc_interest()
{
	//to calculate interest
	interest = (interest_rate*balance) / 100;
	balance = balance - interest;
}
double bank_acc:: getbalance()
{
	return balance;
}
double bank_acc:: getinterest()
{
	return interest;
}
int bank_acc::gettransactions()
{
	return trans;
}





int main()
{
	bank_acc x(0,0.045);
	int a; 
	int f;
	//f for loop to repeat program
	int opt;
	cout << "                                      *****Bank Application*****\n";
	do{
	
	cout << "What do you want to do:\n1.Make deposit.\n2.Withdrawing amount.\n3.Displaying balance details.\n\tEnter your option: ";
	cin >> opt;
	while(opt>3 ||cin.fail())
	//validations
	{cin.clear();
	cin.ignore(123,'\n');
	cout<<"You enter invalid option. Enter again:\n";
	cin>>opt;  
	  }

   	switch (opt)
	{
	case 1:
	{
		
		cout << "Enter the amount\n";
		cin >> a;
		x.make_deposit(a);
		
		

	}//break;
	case 2:
	{
		cout << "Enter the amount you want to withdraw\n";
		cin >> a;
		x.withdraw(a);
	}
//	break;
	case 3:
	{
		cout << "0.045 is default interest.Enter interest of your own choice :\n";
		//its on the user choice
		cin>>a;
		x.setinterest_rate(a);
		x.calc_interest();
	}
	}
	
	cout <<"The Interest on your current balance is Rs "<< x.getinterest()<<endl;
	cout <<"Now remaining balance is Rs "<< x.getbalance()<<endl;
		cout<<"If you want to run this program again then press 1\n";
		cout<<"The total number of transactions are: "<<x.gettransactions();
	cin>>f;}
	while (f==1);
	system("pause");
}
