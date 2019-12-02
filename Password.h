#pragma once
#include <string>
#include<iostream>
using namespace std;
class Password {
private:
	string password;
	string securityQ1;
	string securityQ2;
	void setPassword();
public:
	Password();
	void changePassword(void);
	void forgetPassword();
	string getPassword();
	


};