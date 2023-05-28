#ifndef HW_19_H
#define HW_19_h

typedef enum E_DrivingLicenseCategory
{
	ÀÌ,
	À1,
	À2,
	À,
	B1,
	B,
	C1,
	C,
	D1,
	D,
	BE,
	C1E,
	CE,
	D1E,
	DE,
	Ttm,
	Tkt

}E_DrivingLicenseCategory;

typedef struct UserData
{
	char* firsName;
	char* middleName;
	char* lastName;
	unsigned long long int PIN;


}UserData;

void hw_19_01();
void hw_19_02_00();
void hw_19_02_01();
void hw_19_03();
void hw_19_04();

void hw_19_06();
void readUserDataFromFile(FILE* fd, UserData* ud);
void writeUserDataInFile(FILE* fd, UserData* ud);

void printUserData(UserData* ud);



#endif 
