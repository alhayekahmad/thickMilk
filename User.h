#pragma once
#include"Address.h"
#include"Payment.h"
#include"Email.h"
#include"Password.h"
#include <string>
#include <map>


using namespace std;
class User {
	/*
	private data
	*/
private:
	string firstName;
	string lastName;
	string user_name;
	Password *pass_word;
	string phone_number;
	Address *home_address;
	Payment *credit_card;
	Email *email;
	//vector< orders >>
	


public:
	User();
	string checkName(string name);
	string checkPhone();
	void setUser();
	void settings();
	
	


};