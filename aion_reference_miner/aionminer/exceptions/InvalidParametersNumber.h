#include <exception>

using namespace std;

class InvalidParametersNumber : public exception
{
public:
	const char * what () const throw ()
    {
    	return "The number of parameters provided are insufficient. Check the manual for more informations.";
    }
}
