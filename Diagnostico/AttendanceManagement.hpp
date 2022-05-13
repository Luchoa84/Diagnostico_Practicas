#ifndef ATTENDANCEMANAGEMENT_HPP
# define ATTENDANCEMANAGEMENT_HPP

# include <iostream>
# include <fstream>
# include <string>
# include "Student.hpp"
# include "Course.hpp"

using namespace std;

class AttendanceManagement
	{
	
	private:
	
	public:
		AttendanceManagement();
		virtual ~AttendanceManagement();
		void takeAttendance(Student *student, Course *course, string datetime, bool status);
		void showAttendance();
};
#endif		
		

