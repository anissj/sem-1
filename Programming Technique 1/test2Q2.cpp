////////////////////// Test 2, 2023/2024 (Sem 1) //////////////////////
//// QUESTION 2
//// Name: Anis Safiyya Binti Janai
//// Matric No: A23CS0049
//// Date / Day: 4 JAN 2024 / THURSDAY
///////////////////////////////////////////////////////////////////////

// Task 7. Directives, library, header, etc.
#include <iostream>
#include <iomanip>
using namespace std;

// Task 6. Function prototypes
double calculateLateFees (int);
void displayMenu ();
void displayLibraryInfo ();
void getUserInput (int&);

// Task 5. Main function
int main()
{
	int choice, days_overdue;
	double fee;
	
	do{
		cout << "********** Library Book Checkout System **********" << endl;
		displayMenu();
		cout << "Enter your choice (1-3): ";
		cin >> choice;
		   
		switch (choice)
		  {
		  	case 1 : getUserInput (days_overdue);
		  	         fee = calculateLateFees (days_overdue);
		  	         cout << "Late fees: RM" << fixed << setprecision(2) << fee << endl;
		  	         break;
		  	
			case 2 : cout << "********** Library Information **********" <<endl;
			         displayLibraryInfo();
					 break;
					 
			case 3 : cout << "Exiting the program. Thank You! \n";
			         break;
					 
			default: cout << "Invalid choice. Please enter a number between 1 and 3. \n" ;
			         break;		 		               
		   } 
		   
	} while (choice != 3);
}

// Task 1. Function calculateLateFees  
double calculateLateFees (int days_overdue)
{ 
    double latefees;
		if (days_overdue <= 7)
    	latefees = days_overdue * 0.5;
    	else if ((days_overdue > 7) && (days_overdue <= 14))
    	latefees = (7 * 0.5) + (days_overdue - 7) ;
    	else 
    	latefees = (7 * 0.5) + (7*1) + ((days_overdue - 14) * 2);
    
    return latefees;	
}

// Task 2. Function displayMenu 
void displayMenu ()
{
	cout << "1. Calculate Late Fees \n";
	cout << "2. Display Library Information \n";
	cout << "3. Quit \n";
}

// Task 3. Function displayLibraryInfo 
void displayLibraryInfo ()
{
	cout << "Library Name: UTM Library \n";
	cout << "Address: Skudai, Johor \n";
	cout << "Contact: (123) 456 7890 \n";
}

// Task 4. Function getUserInput with reference parameter
void getUserInput (int& days_overdue)
{
	cout << "Enter the number of days the book is overdue: ";
	cin >> days_overdue;
}
