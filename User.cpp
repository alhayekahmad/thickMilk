#include"User.h"
User::User() {
	setUser();
}
void User::setUser() {
	cout << "Please enter first Name?" << endl;
	string first;
	cin >> first;
	this->firstName = checkName(first);
	string last;
	cout << "Please enter last Name?" << endl;
	cin >> last;
	this->lastName = checkName(last);
	this->pass_word = new Password();
	this->home_address = new Address();
	this->credit_card = new Payment();
	this->email = new Email();


}
string User::checkName(string name) {
	regex reg("[A-Z][a-z]");
	sregex_iterator it(name.begin(), name.end(), reg);
	sregex_iterator itEnd;
	if (it != itEnd) {
		return name;
	}
	else {
		cout << "Please re-enter name:" << endl;
		cin >> name;
		return checkName(name);
	}
	
}
string User:: checkPhone() {
	cout << "Please enter your phone-number  " << endl;
	string phoneNumber;
	cin >> phoneNumber;
	regex reg("\\d{10}");
	sregex_iterator it(phoneNumber.begin(), phoneNumber.end(), reg);
	sregex_iterator itEnd;
	if (it == itEnd) {
		cout << "invalid phone number, please enter again" << endl;
		return checkPhone();
	}
	return phoneNumber;
}
void User::settings() {
	cout << "1_ Profile: firstname, lastname and address." << endl <<
		"2_ Payment" << endl <<
		"3_ Security" << endl
		<< "4_ Show manue again" << endl << "5_ exit" << endl;


	int i;
	cout << "Please enter a number from" << endl;
	switch (i) 
	{
	case 1:
		cout << "User name: " << endl <<
			user_name << endl << "first name: " << firstName << endl <<
			"last name: " << lastName << endl
			<< home_address->toString << endl;
		break;
	case 2:
		cout << credit_card->toString << endl;
		break;
	case 3:
		
		cout << "1_ change password: " << endl << "2_ forgot password" << endl;
		int j;
		cout << "Please enter a number: " << endl;
		cin >> j;
		if (j == 1) {
			pass_word->changePassword;
		}
		else if (j == 2)
			pass_word->forgetPassword;
		else cout << "number invalid" << endl;
	case 4:
		return settings();
	default:
		cout << "Bye" << endl;  
	}

}


