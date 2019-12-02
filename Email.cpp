#include"Email.h"
Email::Email() {
	this->email = setEmail();
}
string Email::setEmail() {
	cout << "Please enter your email?" << endl;
	string email;
	cin >> email;
	regex reg("^[A-Z0-9._%+-]+@[A-Z0-9.-]+\.[A-Z]{2,6}$");
	sregex_iterator it(email.begin(), email.end(), reg);
	sregex_iterator itEnd;
	if (it == itEnd) {
		cout << "invalid email address" << endl;
		return setEmail();
	}
	return email;


	
}