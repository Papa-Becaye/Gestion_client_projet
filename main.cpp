#include <iostream>
#include <fstream>
#include <vector>
#include "rapidxml.hpp"

using namespace std;
using namespace rapidxml;


xml_document<> doc;
xml_node<> * root_node = NULL;
   
int main(void)
{
	string b;
    cout << "\nParsing my Clients data (sample.xml)....." << endl;
   
    // Read the sample.xml file
    ifstream theFile ("sample.xml");
    vector<char> buffer((istreambuf_iterator<char>(theFile)), istreambuf_iterator<char>());
    buffer.push_back('\0');
   
    // Parse the buffer
    doc.parse<0>(&buffer[0]);
   
    // Find out the root node
    root_node = doc.first_node("client");
   
    // Iterate over the student nodes
    for (xml_node<> * Client_node = root_node->first_node("buyer");Client_node; Client_node = Client_node->next_sibling())
    {
    	
       /* cout << "\n Type =   " << student_node->first_attribute("student_type")->value();
        cout << endl;
           */
            // Interate over the Student Names
        for(xml_node<> * Client_node_name = Client_node->first_node("nom"); Client_node_name; Client_node_name = Client_node_name->next_sibling())
        {
            cout << "Nom Client =   " << Client_node_name->value();
            cout << endl;
        }
        cout << endl;
    }
   
    return 0;
}
