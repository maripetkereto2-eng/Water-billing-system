



/* 

MARIPET KERETO
CT101/G/26655/25

WATER BILLING SYSTEM

	
	*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;





const double RATE_PER_UNIT = 50;
const double DISCOUNT_THRESHOLD = 100;//units above which discount applies
const double  DISCOUNT_RATE = 0.10;
//10% discount
void getCustomerDetails(string &customer_name,
	float &no_units_consumed){
		
	// prompt user to enter name and unit consumed
	cout<<"Enter customer name: "<<endl;
	getline(cin, customer_name);
	
	cout<<"Enter number of unit consume: "<<endl;
	cin>>no_units_consumed;
	
 }	
	
	// water billing 
float calculatebill(float no_units_consumed ){
	
	return no_units_consumed * RATE_PER_UNIT;
	}
		
double  applyDiscount(float bill, float no_units_consumed){
	
    if (no_units_consumed > DISCOUNT_THRESHOLD ){
	     return bill *DISCOUNT_RATE ;
    
			
    } 
			return 0.0;
			
}                
void displayBill(string &customer_name, double bill, float  no_units_consumed, float discount, double finalAmount ){
	cout<<fixed<<setprecision(2);
    cout<<"======================="<<endl;
	cout<<"     WATER BILLING   "<<endl;
    cout<<"======================="<<endl;
	cout<<"\n"<<endl;
				
	cout<<"Customer name: "<<customer_name<<endl;
	cout<<" Units consumed: "<<no_units_consumed<<endl;
	cout<<"Total before discount: "<<bill<<endl;
	cout<<"Discount:   "<<discount<<endl;
	cout<<"Total After discount: " << bill - discount<<endl;
	cout<<"\n"<<endl;
	
	 cout<<"================================"<<endl;
	cout<<"Final amount payable: "<<finalAmount<<endl;
	 cout<<"================================"<<endl;
				
			
}

int main(){
	
	string customer_name;
	float no_units_consumed;
	
	getCustomerDetails(customer_name, no_units_consumed);
	double bill = calculatebill(no_units_consumed);
	double discount = applyDiscount(bill, no_units_consumed);
	double finalAmount = bill - discount;
	
	
	displayBill(customer_name, bill, no_units_consumed, discount, finalAmount);
return 0;
}
	
	
