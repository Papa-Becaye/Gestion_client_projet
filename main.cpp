#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "rapidxml.hpp"
#include "Client.cpp"

using namespace std;
using namespace rapidxml;


xml_document<> doc;
xml_node<> * root_node = NULL;
   
int main(void)
{
    cout << "\nParsing my Clients data (sample.xml)....." << endl;
   
    // Read the sample.xml file
    ifstream theFile ("sample.xml");
    vector<char> buffer((istreambuf_iterator<char>(theFile)), istreambuf_iterator<char>());
    buffer.push_back('\0');
   
    // Parse the buffer
    doc.parse<0>(&buffer[0]);
   
    // Find out the root node
    root_node = doc.first_node("client");
    cout << "Node client has value" << root_node->value() << "\n";
   
    // Iterate over the student nodes
    for (xml_node<> * client_node = root_node->first_node("buyer");client_node; client_node = client_node->next_sibling())
    {
    	
       /* cout << "\n Type =   " << student_node->first_attribute("student_type")->value();
        cout << endl;
           */
            // Interate over the Student Names
        for(xml_node<> * client_node_name = client_node->first_node("nom"); client_node_name; client_node_name = client_node_name->next_sibling("nom"))
        {
            cout << "Nom Client =   " << client_node_name->value();
            cout << endl;
        }
        cout << endl;
    }
   
    return 0;
}
