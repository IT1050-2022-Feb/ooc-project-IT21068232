#include "user.h"
#include <cstring>
class customer:public user
{
private:
	int CID;
	char cName[20];
	char Address[50];
	int contact;
	Products* pdt;
public:
	customer() {
		CID = 0000;
		strcpy_s(cName, "NULL");
		strcpy_s(Address, "NULL");
		contact = 0000000000;
	};
	customer(int cid, const char cname[], const char address[], int tele) {
		CID = cid;
		strcpy_s(cName, cname);
		strcpy_s(Address, address);
		contact = tele;
	};
	void login(int uid, const char uname);
	void updateProfile(int cid, const char cname[], const char address[], int contact);
	void rateProducts();
	void custRegister(int cid, const char cname[], const char address[], int contact);
	void getDetails();

};
