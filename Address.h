#pragma once
#include <string>
#include <vector>
#include <stdio.h>
#include <ctype.h>
#include<iostream>
using namespace std;
class Address {
private:
	string st_address;
	string state;
	string zip_code;
	string country;
	
public:
	Address();
	void setAddress();
	string checkState();
	string checkStAddress();
	string checkZip();
	string checkCountry();
	 
};