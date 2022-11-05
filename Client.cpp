#include "Client.h"
#include <iostream>
#include <string>
#include "rapidxml.hpp"

using namespace std;
using namespace rapidxml;


Client::Client()
{
	this->name = "";
	this->surname = "";
	this->number_call = "";
	this->birthday.day = 0;
	this->birthday.month = 0;
	this->birthday.year = 0;
}

void Client::add_data(){      
	cout << "veuillez entrer le prenom du client : " << endl;
	getline(cin, this->surname);
	cout << "veuillez entrer le nom du client : " << endl;
	getline(cin, this->name);
	cout << "veuillez entrer le telephone du client : " << endl;
	getline(cin, this->number_call);
	cout << "veuillez entrer la date de naissance du client :" << endl;
	cin >> this->birthday.day;
	cout << "veuillez entrer la date de naissance du client :" << endl;
	cin >> this->birthday.month;
	cout << "veuillez entrer la date de naissance du client :" << endl;
	cin >> this->birthday.year;
	
}

