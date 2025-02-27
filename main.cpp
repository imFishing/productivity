#include <iostream>
#include <cmath>
#include <string>
#include <vector>
//#include <location>
using namespace std;
int main() { 
//placeholder for location
//most of the work will be setting & 
//banning certain loactions on the application	
	cout << "Welcome to corben's productivity manager!\n To start, at what locations would you like to restrict your access to social medias? Press x to Continue\n";
	vector <string> locs;
	string tempLoc;
	if (tempLoc != "x") {
		cin >> tempLoc;
	} else {
		locs.push_back(tempLoc);
	}

	for (int i = 0; i < locs.size(); i++) {
		if (locs.at(i) == "x")
			vector.erase(i);
	}

	cout << "You entered " << locs.size() << " locations. They are:\n";
	for (int i = 0; i < locs.size(); i++) {
		cout << locs.at(i) << endl;
	}
	//again placeholder code
	//would need a ios app to send loc data to server (raspberry pi), in turn blocking certain apps on phone (could possibly be done with shortcuts?)
	//TODO: research more IOS app development (x-code? D:) 
	cout << "Please enter your current location?\n";
	string loc;
	cin >> loc;
	for (i = 0; i < locs.size(); i++) {
		if (loc == locs.at(i)) {
			cout << "This is a banned location! Restricting social media acess!" << endl;
		} else  {
			cout << "This location is not on the restricted list." << endl;
		}
	}
}
