#pragma once
#include<string>
using namespace std;
class Payment {
private:
	string number;
	string exDate;
	string threeN;
public:
	Payment();
	void setPayment();
	string checkN();
	string checkDate();
	string checkT();
	void toString();
};
