#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include <fstream>
using namespace std;

// Function Prototypes
void printHeader();
void printMenu();
void signUp();
void signIn();
void viewEmployees();
void addEmployees();
void removeEmployees();
void HR();
void Employees();
void Clients();
void Projectsmenu();
void ClientsMenu();
void SubmitProject();
void checkproject();
void newproject();
void CalculatePrice();
void SalaryOfEmployee();
bool CheckProject();
bool submitproject();
void SalaryCalculation();
void newprojects();
double FullSalary();
int Price();
int add(int,int);
int subtract(int,int);
int multiply(int,int);
int divide(int,int);
void optioncontroller(int);
void signIndecider(string,string);
void addEmployeesdecider(string);
void HRMenudecider(int);
double SalaryCalculatorOnDecision(bool);
void ClientMenuDecider(int);
void validationforname();
void validationforusername();
void validationforage();
void validationforcnic();
void validationformobileno();
void StoringInFileAppend();
void EmployeesMenuDecider(int);
void RetrievingDataFromFile();
void Yellow();
void darkRed();
void darkPink();

// Arrays Declaration
string username[20];
string password[20];
string fullname[20];
string mobilenumber[20];
string age[20];
string address[20];
string cnic[20];
string projects[20];
double Salary[20];

// Variable Declaration
int option;
int i = 1;

// Main Function
int main()
{
	printHeader();
	printMenu();
	while (option != 3)
	{
		printMenu();
	}
}

// Header
void printHeader()
{
	Yellow();
	cout << "   SSSSSSSSSSSSSSS         HHHHHHHHH     HHHHHHHHH        MMMMMMMM               MMMMMMMM           SSSSSSSSSSSSSSS " << endl;
	cout << " SS:::::::::::::::S        H:::::::H     H:::::::H        M:::::::M             M:::::::M         SS:::::::::::::::S " << endl;
	cout << "S:::::SSSSSS::::::S        H:::::::H     H:::::::H        M::::::::M           M::::::::M        S:::::SSSSSS::::::S " << endl;
	cout << "S:::::S     SSSSSSS        HH::::::H     H::::::HH        M:::::::::M         M:::::::::M        S:::::S     SSSSSSS " << endl;
	cout << "S:::::S                      H:::::H     H:::::H          M::::::::::M       M::::::::::M        S:::::S             " << endl;
	cout << "S:::::S                      H:::::H     H:::::H          M:::::::::::M     M:::::::::::M        S:::::S             " << endl;
	cout << " S::::SSSS                   H::::::HHHHH::::::H          M:::::::M::::M   M::::M:::::::M         S::::SSSS          " << endl;
	cout << "  SS::::::SSSSS              H:::::::::::::::::H          M::::::M M::::M M::::M M::::::M          SS::::::SSSSS     " << endl;
	cout << "    SSS::::::::SS            H:::::::::::::::::H          M::::::M  M::::M::::M  M::::::M            SSS::::::::SS   " << endl;
	cout << "       SSSSSS::::S           H::::::HHHHH::::::H          M::::::M   M:::::::M   M::::::M               SSSSSS::::S  " << endl;
	cout << "            S:::::S          H:::::H     H:::::H          M::::::M    M:::::M    M::::::M                    S:::::S " << endl;
	cout << "            S:::::S          H:::::H     H:::::H          M::::::M    M:::::M    M::::::M                    S:::::S " << endl;
	cout << "SSSSSSS     S:::::S        HH::::::H     H::::::HH        M::::::M               M::::::M        SSSSSSS     S:::::S " << endl;
	cout << "S::::::SSSSSS:::::S ...... H:::::::H     H:::::::H ...... M::::::M               M::::::M ...... S::::::SSSSSS:::::S " << endl;
	cout << "S:::::::::::::::SS  .::::. H:::::::H     H:::::::H .::::. M::::::M               M::::::M .::::. S:::::::::::::::SS  " << endl;
	cout << " SSSSSSSSSSSSSSS    ...... HHHHHHHHH     HHHHHHHHH ...... MMMMMMMM               MMMMMMMM ......  SSSSSSSSSSSSSSS    " << endl << endl;
}
void Yellow()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,6);
}
void darkRed()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,12);
}

void darkPink()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,13);
}
// Main Menu
void printMenu()
{
	system("cls");
	printHeader();
	darkRed();
	cout << "\t\t"
		 << " MAIN MENU " << endl
		 << endl;
	RetrievingDataFromFile();
	cout << "Press 1 to SignIn: " << endl;
	cout << "Press 2 to SignUp: " << endl;
	cout << "Press 3 to Exit: " << endl;
	cout << "Your Option: ";
	cin >> option;
    optioncontroller(option);
}
void optioncontroller(int a)
{
    if (option == 1)
	{
		signIn();
	}
	else if (option == 2)
	{
		signUp();
	}
}

// Sign In
void signIn()
{
	string user,passcode;
	system("cls");
	printHeader();
	darkRed();
	cout << "\t\t"
		 << " SIGNIN MENU " << endl;
	cout << "Enter Username: ";
	getline(cin.ignore(), username[i]);
	user = username[i];
	cout << "Enter Password: ";
	cin >> password[i];
    passcode = password[i];
    signIndecider(user,passcode);
}
void signIndecider(string username,string password)
{
	if (username == "HR" && password == "12345")
	{
		while (option != 7)
		{
			HR();
		}
	}
	else if(username == "Employee" && password == "54321")
	{
		while(option != 5)
		{
		    Employees();
		}
	}
}	


// Sign Up
void signUp()
{
	system("cls");
	printHeader();
	darkRed();
	cout << "\t\t"
		 << " SIGNUP MENU " << endl;
    validationforname();
    validationforusername();
	cout << "Enter Password: ";
	cin >> password[i];
    validationforage();
	cout << "Address: ";
	cin >> address[i];
	validationforcnic();
    validationformobileno();
	StoringInFileAppend();
	i++;
	cout << "Data has been added to the employees record successfully." << endl;
	cout << "Assign a project(completed/not_completed): " << endl;
	cin >> projects[i];
	cout << "Press any key to continue...." << endl;
	getch();
}

void validationforname()
{
	bool isvalid = true;
	string name;

	while(isvalid == true)
	{
		cout << "Enter your name: ";
		getline(cin.ignore(),name);
	for(int i = 0; i < name.length(); i++)
	{
		char ch = name[i];
		if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch == ' ')
		{
			continue;
		}
		isvalid = false;
	}
	if(isvalid == true)
	{
		fullname[i] = name;
		isvalid = false;
	}
	else if(isvalid == false) 
	{
		cout << "Enter a valid name " << endl;
		isvalid = true;
	}
    }
}

void validationforusername()
{
	bool isvalid = true;
	string name;

	while(isvalid == true)
	{
		cout << "Enter your username(e.g.; username@admin/employ): ";
		cin >> name;
	for(int i = 0; i < name.length(); i++)
	{
		char ch = name[i];
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '@' || (ch >= 48 && ch <= 57))
		{
		   continue;
		}
		isvalid = false;
	}
	if(isvalid == true)
	{
		username[i] = name;
		isvalid = false;
	}
	else if(isvalid == false) 
	{
		cout << "Please Enter a valid username using proper characters as mentioned. " << endl;
		isvalid = true;
	}
    }
}

void validationforage()
{
	bool isvalid = true;
	string a;
	while(isvalid == true)
	{
		cout << "Enter your age: ";
		cin >> a;
	for(int i = 0; i < a.length(); i++)
	{
		char ch = a[i];
		if(ch >= 48 && ch <= 57)
		{
			continue;
		}
		isvalid = false;
	}
	if(isvalid == true)
	{
		age[i] = a;
		isvalid = false;
	}
	else if(isvalid == false)
	{
		cout << "That's not your age so please" << endl << " Enter a valid age. " << endl;
		isvalid = true;
	}
    }
}

void validationforcnic()
{
	bool isvalid = true;
	string c;

	while(isvalid == true)
	{
		cout << "Enter your cnic: ";
		cin >> c;
	for(int i = 0; i < c.length(); i++)
	{
		char ch = c[i];
		if(ch >= 48 && ch <= 57)
		{
			continue;
		}
		isvalid = false;
	}
	if(isvalid == true)
	{
		cnic[i] = c;
		isvalid = false;
	}
	else if(isvalid == false) 
	{
		cout << "Enter a valid cnic. " << endl;
		isvalid = true;
	}
    }
}

void validationformobileno()
{
	bool isvalid = true;
	string mob;
	while(isvalid == true)
	{
		cout << "Enter your mobile no: ";
		cin >> mob;
	for(int i = 0; i < mob.length(); i++)
	{
		char ch = mob[i];
		if(ch >= 48 && ch <= 57)
		{
			continue;
		}
		isvalid = false;
	}
	if(isvalid == true)
	{
		mobilenumber[i] = mob;
		isvalid = false;
	}
	else if(isvalid == false) 
	{
		cout << "Enter a valid phone number. " << endl;
		isvalid = true;
	}
    }
}


// Visualization of all the Employees
void viewEmployees()
{
	system("cls");
	printHeader();
	darkRed();
	cout << "\t\t"
		 << " ALL EMPLOYEES " << endl;

	cout << setw(5)<< "NAME"<<setw(20)<<" MOBILE NUMBER"<<setw(20)<<" USERNAME"<<setw(20)<<"CNIC"<<setw(20)<<"ADDRESS"<<setw(20)<<"AGE" << setw(20) << "PROJECTS"<< endl;
	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
	for (int j = 0; j < i; j++)
	{
		cout << setw(5)<< fullname[j] << setw(20) << mobilenumber[j] << setw(20) << username[j] << setw(20) << cnic[j] << setw(20) << address[j] << setw(20) << age[j] << setw(20) << projects[j] << endl;
	}
	cout << "press any key to continue...." << endl;
	getch();
}

// File Handling Begins....
void StoringInFileAppend()
{
    fstream file;
    file.open("Data.txt",ios::app);
    file << fullname[i] << endl;
	file << mobilenumber[i]  << endl;
	file << username[i] << endl;
	file << cnic[i] << endl;
	file << address[i] << endl;
	file << age[i] << endl;
	file << projects[i] << endl;
	i++;
    file.close();
}

void RetrievingDataFromFile()
{
	string fname,mobileno,uname,cn,add, ag, proj;
	fstream file;
	file.open("Data.txt",ios::in);
	while(getline(file,fname) && getline(file,mobileno) && getline(file,uname) && getline(file,cn) && getline(file,add) && getline(file,ag) && getline(file,proj))
	{
		fullname[i] = fname;
		mobilenumber[i] = mobileno;
	    username[i] = uname;
	    cnic[i] = cn;
	    address[i] = add;
		age[i] = ag;
		projects[i] = proj;
		i++;
	}
	file.close();
}

// Add new Employees
void addEmployees()
{
	system("cls");
	printHeader();
	darkRed();
	cout << "\t\t"<< " ADD EMPLOYEES " << endl;
	string application;
	cout << "Application of the employee is clear/not_clear: ";
	cin >> application;
    addEmployeesdecider(application);
	cout << "Press any key to continue...." << endl;
	getch();
}
void addEmployeesdecider(string app)
{
	if(app == "clear")
	{
	    signUp();
	}
	else if(app == "not_clear")
	{
		cout << "First Application/Interview of the employee should be clear to be a part of our software house...." << endl;
	}
}
// HR Menu
void HR()
{
	system("cls");
	printHeader();
	darkRed();
	cout << "\t\t"
		 << " HR's MENU " << endl;
	cout << "Press 1 to view all employees: " << endl;
	cout << "Press 2 to add employees: " << endl;
	cout << "Press 3 to remove any employee: " << endl;
	cout << "Press 4 to open projects menu: " << endl;
	cout << "Press 5 to open client's menu: " << endl;
	cout << "Press 6 to calculate Salary of any Employee: " << endl;
	cout << "Press 7 to exit: " << endl;
	cout << "Your Option: ";
	cin >> option;
    HRMenudecider(option);
}
void HRMenudecider(int option)
{
		if (option == 1)
	{
		viewEmployees();
	}
	else if (option == 2)
	{
		addEmployees();
	}
	else if (option == 3)
	{
		removeEmployees();
	}
	else if(option == 5)
	{
		ClientsMenu();
	}
	else if (option == 4)
	{
		Projectsmenu();
	}
}
// Remove Employees Interface
void removeEmployees()
{
	system("cls");
	printHeader();
	darkRed();
	cout << "\t\t" << "REMOVE ANY EMPLOY" << endl;
	cout << "Enter CNIC of the employ to remove the data of that employ: ";
	cin >> cnic[i];
	int j = i;
	for (i; i < j; i++)
	{
		
		cnic[i] = cnic[i + 1];
		fullname[i] = fullname[i + 1];
		password[i] = password[i + 1];
		mobilenumber[i] = mobilenumber[i + 1];
		age[i] = age[i + 1];
		address[i] = address[i + 1];
		username[i] = username[i + 1];
	}
	i--;
	cout << "Employee has been removed successfully." << endl;
	cout << "Press any key to continue: ";
	getch();
}
// Projects Menu
void Projectsmenu()
{
	system("cls");
	printHeader();
	darkRed();
	cout << "\t\t"<< "PROJECTS MENU" << endl;
	cout << "Enter cnic to check the progress in the Projects: ";
	cin >> cnic[i];
	cout << "Projects Progress " << endl;
	cout << "------------------" << endl;
	cout << projects[i] << endl;
	cout << "Press any key to continue..." << endl;
	getch();
}
void SalaryCalculation()
{
	system("cls");
	printHeader();
	cout << "\t\t" << "SALARY CALCULATION" << endl;
	bool res = submitproject();
    double Salary = SalaryCalculatorOnDecision(res); 
	cout << Salary << endl;
	cout << "Press any key to continue..." << endl;
	getch();
}
double SalaryCalculatorOnDecision(bool result)
{
	if(result == true)
	{
		Salary[i] = FullSalary();
	}
	else if(result == false)
	{
		cout << "First You have to complete your assigned projects..." << endl;
	}
	double SalaryIs = Salary[i];
	return SalaryIs;
}
double FullSalary()
{
	system("cls");
	printHeader();
	cout << "\t\t" << "SALARY CALCULATION" << endl;
    double salary;
	int projectscompleted,basicpay;
	char operation;
	cout << "Enter Projects completed in the month: ";
	cin >> projectscompleted;
	cout << "Enter the basic pay: ";
	cin >> basicpay;
	cout << "Enter the operation: ";
	cin >> operation;
	if(operation == '+')
	{
		Salary[i] = add(projectscompleted,basicpay);
	}
	else if(operation == '-')
	{
	    Salary[i] = subtract(projectscompleted,basicpay);
	}
	else if(operation == '*')
	{
		Salary[i] = multiply(projectscompleted,basicpay);
	}
	else if(operation == '/')
	{
		Salary[i] = divide(projectscompleted,basicpay);
	}
	return Salary[i];
}

int add(int projectcompleted,int basicpay)
{
	double salary;
	salary = projectcompleted + basicpay;
    return salary;
}

int subtract(int projectcompleted,int basicpay)
{
	double salary;
	salary = projectcompleted - basicpay;
    return salary;
}

int multiply(int projectcompleted,int basicpay)
{
	double salary;
	salary = projectcompleted * basicpay;
    return salary;
}

int divide(int projectcompleted,int basicpay)
{
	double salary;
	salary = projectcompleted / basicpay;
    return salary;
}
void ClientsMenu()
{

	system("cls");
	printHeader();
	cout << "\t\t" << "CLIENT'S MENU" << endl;
    cout << "Press 1 to check the previous given project's progess: " << endl;
	cout << "Press 2 to deal a new project: " << endl;
	cout << "Press 3 to calculate the price of the projects: " << endl;
	cout << "Press 4 to exit: " << endl;
	cout << "Your Option: ";
	cin >> option;
	while(option != 4)
	{
    ClientMenuDecider(option);
	}
}
void ClientMenuDecider(int option)
{
	if(option == 1)
	{
		checkproject();
	}
	else if(option == 2)
	{
        newproject();
	}
	else if(option == 3)
	{
		CalculatePrice();
	}
}
void checkproject()
{
	system("cls");
	printHeader();
	cout << "\t\t" << "CLIENT'S MENU" << endl;
    bool res = CheckProject();
	if(res == true)
	{
		cout << "The Employees have completed their tasks.... " << endl;
	}
	else if(res == false)
	{
		cout << "The Employees have not yet completed their tasks.... " << endl;
	}
	cout << "Press any key to continue...." << endl;
	getch();
}
bool CheckProject()
{
	system("cls");
	printHeader();
	cout << "\t\t CLIENT'S MENU" << endl;
	cout << "Enter cnic of the employees: ";
	cin >> cnic[i];
	bool res;
	if(projects[i] == "completed" || projects[i] == "Completed")
	{
		res = true;
	}
	else if(projects[i] == "not completed " || projects[i] == "Not Completed" || projects[i] == "Not Assigned")
	{
		res = false;
	}
	return res;
}
void newproject()
{
	system("cls");
	printHeader();
	cout << "\t\t" << "CLIENT'S MENU" << endl;
    bool res = CheckProject();
	if(res = true)
	{
		cout << "Since you have completed your previous projects successfully so you have been assigned with a new project..." << endl;
	}
	else if(res = false)
	{
		cout << "First you have to complete your previous projects successfully than you will be assigned with a new project...." << endl;
	}
	cout << "Press any key to continue....." << endl;
	getch();
}
void CalculatePrice()
{
	system("cls");
	printHeader();
	cout << "\t\t" << "CLIENT'S MENU" << endl;
	bool res = CheckProject();
	if(res = true)
	{
		cout << Price();
	}	
	else if(res = false)
	{
		cout << "First you have to complete your projects to get paid......" << endl;
	}
	cout << "Press any key to continue...." << endl;
	getch();
}
int Price()
{
	double cost,result;
	int number;
	cout << "Enter cost of project: ";
	cin >> cost;
	cout << "Enter number of projects done successfully: ";
	cin >> number;
	result = cost * number;
	return result;
}
void Employees()
{
	system("cls");
	printHeader();
	darkRed();
	cout << "\t\t" << "EMPLOYEES MENU" << endl;
	cout << "Press 1 to check your current progress in the projects assigned: " << endl;
	cout << "Press 2 to submit your Project: " << endl;
	cout << "Press 3 to get some new Project: " << endl;
	cout << "Press 4 to check your salary: " << endl;
	cout << "Press 5 to exit: " << endl;
	cout << "Your Option: ";
	cin >> option;
	while(option != 5)
	{
	    EmployeesMenuDecider(option);
	}
}
void EmployeesMenuDecider( int option)
{
    if(option == 1)
	{
		Projectsmenu();
	}
	if(option == 2)
	{
	    SubmitProject();
	}
	if(option == 3)
	{
		newprojects();
	}
	if(option == 4)
	{
		SalaryOfEmployee();
	}
}
void SalaryOfEmployee()
{
	system("cls");
	printHeader();
	cout << "\t\t" << "EMPLOYEES MENU" << endl;
	int salary[20];
	cout << "Enter Your CNIC: ";
	cin >> cnic[i];
	salary[i] = Salary[i];
	cout << "Your Salary for the current month is: " << salary[i] << endl; 
	cout << "Press any key to continue....." << endl;
	getch();
}
void SubmitProject()
{
	system("cls");
	printHeader();
	cout << "\t\t SUBMITTED PROJECTS" << endl;
	bool res = submitproject();
	if(res == true)
	{
		cout << "Your Project has been submitted successfully....." << endl;
	}
	else if(res == false)
	{
		cout << "You have to complete your Project first to submit it" << endl;
	}
	cout << "Press any key to continue....." << endl;
	getch();
}
bool submitproject()
{
    system("cls");
	printHeader();
	cout << "\t\t SUBMIT YOUR PROJECTS" << endl;
	cout << "Enter your cnic: ";
	cin >> cnic[i];
	cout << "Enter the current assigned project is completed or not completed or Not Assigned: ";
	cin >> projects[i];
	bool res;
	if(projects[i] == "completed" || projects[i] == "Completed")
	{
		res = true;
	}
	else if(projects[i] == "not completed " || projects[i] == "Not Completed" || projects[i] == "Not Assigned")
	{
		res = false;
	}
	return res;
}
void newprojects()
{
	system("cls");
	printHeader();
	cout << "\t\t NEW PROJECTS" << endl;
	bool res = submitproject();
	if(res == true)
    {
		cout << "You have assigned a new project...." << endl;
	}
	else if(res == false)
	{
		cout << "First you have to complete your previous projects to get some new projects..... " << endl;
	}
	cout << "Press any key to continue...." << endl;
	getch();
}
