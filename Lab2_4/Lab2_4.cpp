//Writing a C++ Program.  Past Ocean Levels
/* The Earth’s ocean levels have risen an average of 1.8 millimeters per year over the past century. 
Write a program that computes and displays the number of centimeters and number of inches the oceans 
rose during this time.
One millimeter is equivalent to 0.1 centimeters. One centimeter is equivalent to 0.3937 inches. */


#include <iostream>

using namespace std;

int main() {

	double milliM = 1.8;
	double years = 100;
	double totalMilliM;
	double totalCentiM;
	double totalInches;


	cout << "The total amount the ocean rose in millimeters: ";
	totalMilliM = milliM * years;
	cout << totalMilliM << endl;
	
	cout << "The total amount the ocean rose in centimeters: ";
	totalCentiM = totalMilliM * .1;
	cout << totalCentiM << endl;
	
	cout << "The total amount the ocean rose in inches: ";
	totalInches = totalCentiM * .3937;
	cout << totalInches << endl;
	

}