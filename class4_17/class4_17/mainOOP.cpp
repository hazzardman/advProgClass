#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include<vector>
#include<map>
#include <fstream> 
using namespace std;

class StuRecord
{
	unsigned int id;
	string name;
	string major;
	string email;

public:
	StuRecord(int _id)
	{
		id = _id;
		name = "";
		major = "undetermined";
		email = "";
	}
	void print()
	{
		cout << name << "\t" << id << "\t" << major << "\t" << email << endl;
	}
	void setName(string _name)
	{
		name.assign(_name);
	}
	void setMajor(string _major)
	{
		major.assign(_major);
	}
	void setEmail(string _email)
	{
		email.assign(_email);
	}
};

class StuRecordManager
{
	StuRecord **students;
	int array_size;
public:
	StuRecordManager(int _array_size = 1000)
	{
		array_size = _array_size;
		students = new StuRecord*[array_size];
		for (int i = 0; i < array_size; i++) students[i] = NULL;
	}

	~StuRecordManager()
	{
		for (int i = 0; i < array_size; i++)
		{
			if (students[i] != NULL)
			{
				delete students[i];
			}
		}

		delete[] students;
	}

	StuRecord* create()
	{
		for (int i = 0; i < array_size; i++)
		{
			if (students[i] == NULL)
			{
				students[i] = new StuRecord(i);
				return students[i];
			}
		}

		return NULL;
	}

	void destroy(StuRecord *p)
	{
		for (int i = 0; i < array_size; i++)
		{
			if (students[i] == p)
			{
				delete students[i];
				students[i] = NULL;
				return;
			}
		}
	}
	void destroy(int id)
	{
		if (students[id] != NULL)
		{
			delete students[id];
			students[id] = NULL;
			return;
		}
	
	}
	void print()
	{
		cout << "NAME\tID\tMAJOR\tEMAIL\n";
		for (int i = 0; i < array_size; i++)
		{
			if (students[i] != NULL)
			{
				students[i]->print();
			}
		}
	}

};

int main()
{
	StuRecordManager directory;

	for (;;)
	{
		cout << "{1}:Add student\n{2}:Remove student\n{3}:List directory\n{4}:Exit\n::";
		char input;
		cin >> input;
		if (input == '1')
		{
			string entry;
			StuRecord* p = directory.create();
			cout << "Enter Name:";
			cin >> entry;
			p->setName(entry);
			cout << "Enter Major:";
			cin >> entry;
			p->setMajor(entry);
			cout << "Enter eMail:";
			cin >> entry;
			p->setEmail(entry);
			
		}
		else if (input == '2')
		{
			unsigned int entry;
			cout << "Enter student ID to remove:";
			cin >> entry;
			directory.destroy(entry);

		}
		else if (input == '3')
		{
			directory.print();
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

	//getchar();
	return 0;
}