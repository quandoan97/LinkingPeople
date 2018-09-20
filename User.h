#include <iostream>
#include <stdio.h>

#ifndef CREATEUSER_H
#define CREATEUSER_H

using namespace std;

class User
{
    //This will hold all of our users basic information
    private:
        char uuid[17] = '9999999999999999';
        string first_name = "de";
        string last_name = "fault";
        long date_of_birth = 0; //this will be in seconds elapsed per Bud Davis's request
        sequence<string> interests = "nothing";
        unsigned long long number_of_highest_post;

    public:
        User(){}

        User(string first_name, string last_name, long date_of_birth, string interests)
		{
			createUUID();
            this->first_name = first_name;
			this->last_name = last_name;
			this->date_of_birth = date_of_birth;
			this->numner_of_highest_post = 0;
        }
		
		void createUUID();
		
		void createUser();
		
		
		
}

#endif