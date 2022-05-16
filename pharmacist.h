#include "staff.h"
class pharmacist:public staff
{
private:
	int PID;
	char pEmail[10];
public:
	pharmacist() {
		PID = 0000;
		strcpy_s(name, "NULL");
		teleNo = 0000000000;
		strcpy_s(pEmail, "NULL");
	};
	pharmacist(int pid, const char pname[], const char pemail[], int tele) {
		PID = pid;
		strcpy_s(name, pname);
		strcpy_s(pEmail, pemail);
		teleNo = tele;
	};
	void setDetails(int pid, const char pname[], const char pemail[], int tele);
	int getPid();
	void calcSalary();
};