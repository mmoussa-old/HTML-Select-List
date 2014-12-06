//Author: Mohammad Moussa
//Description: This program takes a list of line separated items, and
//			   formats them into html code for a select list.
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main(){

//take in list of items, and output it in specific format
string item, line;
ofstream myfile;
myfile.open("output.txt");
myfile << "<select>\r\n";
cout << "> ";
getline(cin, line);
while(!cin.eof()){
	stringstream lineStream(line);
	lineStream >> item;
	if(!lineStream.fail()){
		myfile << "<option value=\"" << item << "\">" << item << "</option>\r\n";
	} else{
		cerr << "invalid input" << endl;
	}
	cout << "> ";
	getline(cin, line);
}
myfile << "</select>\r\n";
myfile.close();
return 0;
}