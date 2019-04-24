#pragma warning(disable:4996)
#include <iostream>
using namespace std;

static int entrySize = 32;


struct StuRecord
{
	unsigned int id;
	char* name = (char*)malloc(sizeof(char) * entrySize);
	char* major = (char*)malloc(sizeof(char) * entrySize);
	char* email = (char*)malloc(sizeof(char) * entrySize);


};


void create(StuRecord *directory, bool *directoryUsage, int array_size)
{
	char* entry = (char*)malloc(sizeof(char) * entrySize);
	for (int i = 0; i < array_size; i++)
	{
		if (directoryUsage[i] == false)
		{
			directoryUsage[i] = true;
			cout << "Enter Name:";
			getchar();					//so that it waits for entry
			cin.getline(entry, entrySize);		//accepts spaces for full name
			strcpy(directory[i].name,entry);	//used char arrays because I couldnt get rid of access violation when assigning string here
			cout << "Enter Major:";		
			cin >> entry;
			strcpy(directory[i].major, entry);
			cout << "Enter eMail:";
			cin >> entry;
			strcpy(directory[i].email, entry);
			directory[i].id = i;
			break;
		}
	}
}

void destroy(unsigned int id, bool *directoryUsage)
{
	directoryUsage[id] = false;
}
void print(StuRecord *directory, bool *directoryUsage, int array_size)
{
	cout << "NAME\tID\tMAJOR\tEMAIL\n";					//dont know how to format with respect to length of inputs
	for (int i = 0; i < array_size; i++)
	{
		if (directoryUsage[i] == true)
		{
			cout << directory[i].name << "\t" << directory[i].id << "\t" << directory[i].major << "\t" << directory[i].email << endl;
		}
	}
}
int main()
{
	int array_size = 100;
	StuRecord *directory = (StuRecord*)malloc(sizeof(StuRecord)*array_size);
	bool *directoryUsage = (bool*)malloc(sizeof(bool)*array_size);
	for (int i = 0; i < array_size; i++)
	{
		directoryUsage[i] = false;
	}
	for (;;)
	{
		cout << "{1}:Add student\n{2}:Remove student\n{3}:List directory\n{4}:Exit\n::";
		char input;
		cin >> input;
		if (input == '1')
		{
			create(directory, directoryUsage, array_size);
		}
		else if (input == '2')
		{
			unsigned int entry;
			cout << "Enter student ID to remove:";
			cin >> entry;
			destroy(entry,directoryUsage);

		}
		else if (input == '3')
		{
			print(directory, directoryUsage, array_size);
		}
		else if (input == '4')
		{
			break;
		}
		else
		{
			cout << "invalid\n";
		}
	}

	return 0;
}