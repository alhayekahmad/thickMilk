#include"Payment.h"
#include<iostream>
#include<regex>


Payment::Payment() {
	setPayment();
}
void Payment::setPayment() {
	this->number = checkN();
	this->threeN = checkT();
	this->exDate = checkDate();
}
string Payment::checkDate() {
	string date;
	cout << "please enter the date on the credit card in this format ##/##" << endl;
	cin >> date;
	smatch matches;
	regex isDate("^(0[1-9]|1[012])[- /.](0[1-9]|[12][0-9]|3[01])$");
	sregex_iterator currentMatch(date.begin(), date.end(), isDate);
	sregex_iterator noMatch;
	if (currentMatch == noMatch) {
		return checkDate();
	}
	else return date;	
}
string Payment::checkN() {
	string num;
	regex reg("\\d{4,12}");
	cout << "Please enter 12 digits of credit card" << endl;
	cin >> num;
	sregex_iterator currentMatch(num.begin(), num.end(), reg);
	sregex_iterator noMatch;
	num.erase(remove(num.begin(), num.end(), ' '), num.end());
	if (currentMatch != noMatch) {
		
		return num;
	}
	
	else {
		cout << "invalid number***" << endl;
			return checkN();
	}
}
string Payment::checkT() {
	string code;
	cout << "Please enter 3 digit number behind your credit card" << endl;
	cin >> code;
	regex reg("^(\\d{3})$");
	sregex_iterator it(code.begin(), code.end(), reg);
	sregex_iterator itEnd;
	if (it != itEnd) {
		return code;

	}
	return checkT();
}
void Payment::toString() {
	cout << "credit card number :" << endl
		<< number << endl << exDate << "  " << threeN;

}