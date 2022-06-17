
#include<iostream>
#include<string>
#include<ios>
#include<iostream>
#include<iomanip>
#include<vector>
#include <algorithm>
#include<stdexcept>
#include<fstream>
#include<memory>
#include<map>
using namespace std;
//saying what standard-library names we use
using std::map;  using std::vector;  using std::setprecision; using std::streamsize; using std::cin; using std::cout; using std::endl; using std::string; using std::domain_error; using std::istream; 

int main() {

	int number;
	float cost;
	char beverage;
	
	bool validberavge;

	cout << fixed << showpoint << setprecision(2);

	do
	{
		cout << endl << endl;
		cout << "Hot Beverage Menu" << endl << endl;
		cout << "A: Coffee $1.00" << endl;
		cout << "B: Tea $ .75" << endl;
		cout << "C: Hot Chocolate $1.25" << endl;
		cout << "D: Cappuccino $2.50" << endl << endl << endl;
		cout << "Enter the beverage A,B,C, or D you desire" << endl;
		cout << "Enter E to exit the program" << endl << endl;

		cin >> beverage;

		switch (beverage)
		{
		case 'a':
		case 'A':
		case 'b':
		case 'B':
		case 'c':
		case 'C':
		case 'd':
		case 'D': validberavge = true;
			break;
		default: validberavge = false;
		}

		if (validberavge == true){
		cout << "How many cups would you like?" << endl;

		cin >> number;
		}
		
		switch (beverage)
		{
		case 'a':
		case 'A': cost = number * 1.0;
			cout << "The total cost is $ " << cost << endl;
			break;
		case 'b':
		case 'B': cost = number * .75;
			cout << "The total cost is $ " << cost << endl;
			break;
		case 'c':
		case 'C': cost = number * 1.25;
			cout << "The total cost is $ " << cost << endl;
			break;
		case 'd':
		case 'D': cost = number * 2.50;
			cout << "The total cost is $ " << cost << endl;
			break;
		case 'e':
		case 'E': cout << "Please come again" << endl;
			break;
		default:cout << "Invalid entry" <<beverage<<"is not valid " << endl;
			cout << "Try again please" << endl;
		}
	} while (!(beverage =='e' || beverage == 'E'));
		return 0;
	

	
	

	
}