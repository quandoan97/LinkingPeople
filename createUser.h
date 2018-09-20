#include <iostream>
#ifndef CREATEUSER_H
#define CREATEUSER_H

using namespace ;

class createUser
{
    //This will hold all of our users basic information
    private:
        char uuid[17];
        string first_name;
        string last_name;
        long date_of_birth; //this will be in seconds elapsed per Bud Davis's request
        sequence<string> interests;
        unsigned long long number_of_highest_post;

    public:
        createUser(){}

        createUser(string first_name, string last_name, long date_of_birth, )
        {
            
        }

}

#endif