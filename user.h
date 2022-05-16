#include <cstring>
class user
{
protected:
	int userId;
	char userName[10];
	char loginStatus[10];
public:
	user() {
		userId = 0000;
		strcpy_s(userName, "NULL");
		strcpy_s(loginStatus, "NULL");
	};
	user(int uid, const char uname[]) {
		userId = uid;
		strcpy_s(userName, uname);
	};
	bool authenticate(int uid,const char uname[]);
	void setLoginStatus();
};