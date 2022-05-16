#include "staff.h"

class admin:public staff
{
private:
	int AID;
	char aEmail[10];
public:
	admin() {
		AID = 0000;
		strcpy_s(name, "NULL");
		teleNo = 0000000000;
		strcpy_s(aEmail, "NULL");
	};
	admin(int aid, const char aname[], const char aemail[], int tele) {
		AID = aid;
		strcpy_s(name, aname);
		strcpy_s(aEmail, aemail);
		teleNo = tele;
	}
	void setDetails(int aid, const char aname[], const char aemail[], int tele);
	int getAid();
	void managerUserProfile();
};