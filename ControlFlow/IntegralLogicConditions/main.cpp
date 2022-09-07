#include <iostream>

int main()
{
    /*
        Any number different than 0, or expression evaluating to something other than 0. true

        Any number equal to 0, or expression evualting to 0. false
    */

    int condition{1};

    bool bool_condition = condition;
    std::cout << std::boolalpha;

    if (bool_condition)
    {
        std::cout << "We have a " << bool_condition << " in our variable " << std::endl; // different from 0
    }
    else
    {
        std::cout << "We have " << bool_condition << " in our variable" << std::endl; // zero
    }

    return 0;
}