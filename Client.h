#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include "rapidxml.hpp"

using namespace std;
using namespace rapidxml;

struct Date{
	int day;
	int month;
	int year;
};

class Client
{
	public:
		Client();
		void add_data();
	private:
		string name, surname, number_call;
		Date birthday;
};

#endif
