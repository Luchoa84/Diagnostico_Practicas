# include "Course.hpp"

Course::Course()
{
}

Course::~Course()
{
}

int Course::getIdentifier() 
{
	return _identifier;
}

void Course :: setIdentifier(int identifier)
{
	_identifier = identifier;
}

string Course::getName()
{
	return _name; 
}
void Course :: setName (string name)
{
	_name = name;
}
