#ifndef STUDENT_H
# define STUDENT_H

# include <iostream>
# include <string>

using namespace std;


class Student{
		private :
		int _identifier;
		string _name;
		string _surname;
	public:
		Student ();
		virtual ~Student ();
		int getIdentifier();
		void setIdentifier (int identifier);
		string getName();
		void setName(string name);	
		string getSurname();
		void setSurname(string surname);
};



#endif


