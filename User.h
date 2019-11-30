#pragma once
#include <string>
#include <map>
using namespace std;
class User {
	/*
	private data
	*/
private:
	string user_name;
	string pass_word;
	map <string,string> user_map;
	string phone_number;
	Address home_address;
	Payment credit_card;
	Email email;


public:


};