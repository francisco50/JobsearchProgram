#include<iostream>
#include<string>

using namespace std;

struct school
{
	string info;
	string firstname;
	string lastname;
	string degree;
	school *next;


};


class job {

private:
	school *head;
	school *tail;


public:
	job()
	{
		head = NULL;
		tail = NULL;

	}


	void degree_fillup(string Fname, string Lname);
	void show_result();
	void display();



};


void job::degree_fillup(string Fname, string Lname)
{
	school *temp = new school;
	temp->firstname = Fname;
	temp->lastname = Lname;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;

	}
}

void job::display()
{
	cout << endl;
	cout << " ******** Choose your Degree ******** " << endl << endl;
	cout << " Enter the number to your choice, Enter 1 or 2 " << endl;
	cout << " 1. Computer Science - CSS " << endl;
	cout << " 2. Accounting - ACC " << endl;
	cout << " 3. Quit " << endl;
	cout << " choice ------> ";

}


void job::show_result()
{
	cout << endl;
	if (head == NULL) {
		cout << " Job search isn't filled up yet :: " << endl;
	}
	else {
		cout << "This is the information you enetred :: " << endl << endl;
	}
	school *temp = new school;
	temp = head;
	while (temp != NULL)
	{
		cout << "First Name :: " << temp->firstname << endl;
		cout << "Last Name :: " << temp->lastname << endl;
		cout << endl;
		temp = temp->next;
	}
}



int getchoice()
{


	int choice;
	while (true)
	{
		cin >> choice;
		if (choice < 1 || choice > 3) {
			cout << "Invalid choice. try again" << endl;
			break;
		}
		else {
			break;
		}
	}
	return choice;
}


int main()
{
	job students;
	string lastname, firstname, degree;


	int quit;

	while (true)
	{
		system("CLS");
		double gpa;
		int job;

		cout << "*****WELCOME TO EQUATORIAL JOB SEARCH*****" << endl << endl;
		cout << " Enter your First name : ";
		cin >> firstname;
		cout << " Enter your Last name  : ";
		cin >> lastname;

		students.degree_fillup(firstname, lastname);
		students.display();

		int choice = getchoice();

		switch (choice)
		{


			while (gpa >= 3.5 || gpa <= 3.5)
			{

		case 1:
			cout << endl;
			cout << " 1. Computer Science " << endl;
			cout << " What is your current gpa, (EG. 3.2 , 3.5 , 2.7 ) : ";
			cin >> gpa;

			if (gpa >= 3.5)
			{
				cout << endl;
				cout << " !!!!!congratulations you qualify for the graduate job level!!!!! " << endl << endl;
				cout << " The following are the jobs available for your criteria " << endl;
				cout << " **Enter the number to your choice** " << endl;
				cout << " 1. Assisteant software developer " << endl;
				cout << " 2. Assistant system Analyst " << endl;
				cout << " --select from the category given above---> ";

				cin >> job;

				while (job == 1 || job == 2)
				{

					if (job == 1)
					{
						cout << endl;
						cout << " 1. Assistant software developer, you have apllied for this job. " << endl;
						break;
					}
					else if (job == 2)
					{
						cout << endl;
						cout << " 2. Assistant system Analyst. " << endl;
						break;
					}
				}
			}
			else if (gpa < 3.5)
			{
				cout << endl;
				cout << " !!!congratulations you qualify for the entry level!!! " << endl << endl;
				cout << " The following are the jobs available for your criteria  " << endl;
				cout << " **Enter the number to your choice** " << endl;
				cout << " 1. intern with computer science department " << endl;
				cout << " 2. Computer science Assistant Tech " << endl;
				cout << " --select from the category given above---> ";

				cin >> job;

				while (job == 1 || job == 2)
				{

					if (job == 1)
					{
						cout << endl;
						cout << " Intern with computer science department , you have succesfully apllied for this job. " << endl;
						break;
					}
					else if (job == 2)
					{
						cout << endl;
						cout << " 2. Computer Science Assiatant Tech. " << endl;
						break;
					}
				}
			}

			break;

		case 2:
			cout << endl;
			cout << " 2. Accounting ACC " << endl;
			cout << " what is your current GPA, (EG. 3.2 , 3.5 , 2.7 ) :";
			cin >> gpa;

			if (gpa >= 3.5)
			{
				cout << endl;
				cout << " !!!congratulations you qualify for the graduate job level!!!" << endl << endl;
				cout << " The following are the jobs available for your criteria " << endl;
				cout << " **Enter the number to your choice** " << endl;
				cout << " 1. Accountant " << endl;
				cout << " 2. Senior Trader " << endl;
				cout << " --select from the category given above---> ";
				cin >> job;

				while (job == 1 || job == 2)
				{


					if (job == 1)
					{
						cout << endl;
						cout << " Accountant, you have succesfully apllied for this job. " << endl;
						break;
					}
					else if (job == 2)
					{
						cout << endl;
						cout << " Senior Trader. " << endl;
						break;
					}

				}
			}
			else if (gpa < 3.5)
			{
				cout << " !!!congratulations you qualify for the entry level!!! " << endl << endl;
				cout << " the following are the jobs available in Entry level for students below a 3.5 gpa " << endl;
				cout << " **Enter the number to your choice** " << endl;
				cout << " 1. intern Accountant  " << endl;
				cout << " 2. Entry level Auditor " << endl;


				cin >> job;

				while (job == 1 || job == 2)
				{

					if (job == 1)
					{
						cout << endl;
						cout << " Intern Accountant , you have successfully apllied for this job. " << endl;
						break;
					}
					else if (job == 2)
					{
						cout << endl;
						cout << " 2. Entry Level Auditor. " << endl;
						break;
					}
				}

			}

			break;
		case 3:
			return 0;
			}
		}


		students.show_result();
		cout << " Choice of Major ( 1. CS and 2. ACC ) ----> " << choice << endl;
		cout << " GPA ----> " << gpa << endl << endl;


		int quit;
		cout << " **Do you want to Continue or Quit** " << endl << endl;
		cout << " Type 1 to Quit and 2 to Continue ::-----> ";
		cin >> quit;
		if (quit == 1)
		{
			return 0;

		}
		else if (quit == 2)
		{
			continue;

		}

		/*system("CLS");*/
	}


	system("pause");
	return 0;

}