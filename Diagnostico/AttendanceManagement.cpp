# include "AttendanceManagement.hpp"


AttendanceManagement::AttendanceManagement()
{
	
}

AttendanceManagement::~AttendanceManagement()
{
}

void AttendanceManagement::takeAttendance(Student *student, Course *course, string datetime,bool status)
{
	ifstream testOpenFile("attendance.csv");
	bool fileExists = testOpenFile.good();
	testOpenFile.close();
	
	ofstream csvFile;
	csvFile.open ("attenddance.csv",ofstream::app);
	if (!fileExists)
		{
			csvFile << "Id de Estudiante,"
					<<"Nombre, "
					<<"Apellido, "
					<<"Id de la Materia,"
					<<"Marca Temporal, "
					<<"Presente" <<endl;
		
		}	
	
	csvFile << student->getIdentifier()<<","
		<<student->getName()<<","
		<<student->getSurname()<<","
		<<course->getIdentifier()<<","
		<<course->getName()<<","
		<<datetime<<","
		<<status<<endl;
		
	csvFile.close();	

	
}

void AttendanceManagement::showAttendance()
{
	ifstream csvFile("attendance.csv");
	if (csvFile.is_open())
		cout<<csvFile.rdbuf();
	csvFile.close();	
}
