#include<iostream>
using namespace std;
class Person{
	int id,salary;
	char name[80];
	float gs;
public:
	void input(){
		cin >> id >> salary >> name;
	}

	void display()
	{
		cout << "\t" << id <<"\t"<< gs << "\t" << name << "\n";
	}
	void gross()
	{
		gs = (float)salary/12;
	}


};

int main()
{
	int n =2,i;
	Person p[n];
	cout << "size class is"<< sizeof(Person)<<endl;
	

	for ( i = 0; i < n; ++i)
	{
		cout <<"enter id salary name\n";
		p[i].input();
		
	}
	
	cout << "======================================================\n";
	cout << "\tid\tsalary\tname\t\n";
	cout << "======================================================\n";


	for ( i = 0; i < n; ++i)
	{
		p[i].gross();
		p[i].display();
		
	}
	


}