#include"Password.h"
Password::Password() {
	setPassword();
}
void Password::setPassword() {
	cout << "please enter password: " << endl;
	string p1;
	string p2;
	cin >> p1;
	cout << "please re-enter password:" << endl;
	cin >> p2;
	if (p1 != p2) {
		cout << "password doesnot match" << endl;
		return setPassword();
	}
	cout << "Security Question number1: " << endl << "a city you grow up in?" << endl;
	cin >> securityQ1;
	cout << "Security Question number2: " << endl << "a number you like? " << endl;
	cin >> securityQ2;
	password = p1;
}
string Password::getPassword() {
	return password;
}
void Password::changePassword() {
	cout << "please enter you old password" << endl;
	string oP;
	cin >> oP;
	if (oP != password) {
		cout << "wrong password" << endl;
		return changePassword();
	}
	setPassword();
}
void Password::forgetPassword() {
	cout << "Please enter your answer for a city you grow up in ? " << endl;
	string q1;
	cin >> q1;
	cout << "please enter your answer for a number you like?" << endl;
	string q2;
	cin >> q2;
	if (q1 == securityQ1 && q2 == securityQ2) {
		setPassword();
	}
	else {
		cout << "wrong answer" << endl;
		int i;
		cout << "please enter 1) to answer the questions another time " << endl << " 2) to exit " << endl;
		cin >> i;
		if (i == 1)
			return forgetPassword();
		else cout << "Byeeee" << endl;
	}
}
