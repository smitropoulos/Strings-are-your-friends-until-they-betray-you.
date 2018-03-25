//
//  main.cpp
//  Strings are your friends, until they betray you.
//
//  Created by Stefanos Mitropoulos on 25/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
	std::string fname,lname;

	std::cout<<"Enter your first name please"<<std::endl;
	std::cin >>fname;
	std::cout<<"Enter your last name please"<<std::endl;
	std::cin >>lname;

	std::string fullname = fname+" "+lname;
	std::string fullname2=fullname;

	for (int i=0;i<fullname.size();i++){
		if (fullname[i]=='a'){
			fullname[i]='z';
		}
	}

	std::cout<<"Your name is: "<<fullname<<std::endl;

	//or in reverse
	std::reverse(fullname2.begin(), fullname2.end());
	std::cout<<"Your name in reverse is: "<<fullname2<<std::endl;

	return 0;
}
