#include "user.h"
#include <cstring>
class staff:public user 
{
protected:
	char name[20];
	int teleNo;
public:
	staff() {
		strcpy_s(name, "NULL");
		teleNo = 0000000000;
	};
};
