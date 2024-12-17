#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
 
int main(){
    double loan,rate,pay;
    int i = 0 ;
    double total , interest ;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay ;

    //use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	while (loan > 0)
	{
	    interest = loan*(rate/100) ;
	    total = loan + interest ;
	    cout << fixed << setprecision(2);
	    cout << setw(13) << left << i+1;
	    cout << setw(13) << left << loan;
	    cout << setw(13) << left << interest;
	    cout << setw(13) << left << total;
	    if(total <= pay)
	    {
	        pay = total;
	        loan = total - total;
	        cout << setw(13) << left << pay;
	        cout << setw(13) << left << loan;
	        break;
	    }
	cout << setw(13) << left << pay;
	loan = total - pay ;
	cout << setw(13) << left << loan;
	cout << "\n";	
	i++;
	
}
return 0;
}