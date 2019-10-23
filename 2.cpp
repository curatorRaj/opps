#include<iostream>
using namespace std;
struct  employee
{
	char name[100];
	int id;
	int salary;
	char date[20];

};
int main()
{
	int n =3;
	//char c[10];

	}

	for ( i = 0; i < n-1; ++i)
	{
		for (j = i+1; j < n; ++j)
		{
			/* code */
			if(emp[i].salary>emp[j].salary)
			{
				temp = emp[i];
				emp[i] = emp[j];
				emp[j] = temp;

			}
		}

	}
	cout << "======================================================\n";
	cout << "\tid\tname\tdob\tsalary\t\n";
	cout << "======================================================\n";

	for ( i = 0; i < n; ++i)
	{
		cout <<"\t"<<emp[i].id<<"\t"<<emp[i].name<<"\t"<<emp[i].date<<"\t"<<emp[i].salary<<"\t\n";
		employee emp[n],temp;
		int i,j;
		cout << "enter employee detal\n";
		for ( i = 0; i < n; ++i)
		{
			cout <<"enter id, name , date of birth and salary\n";
			cin >>emp[i].id;
			//cin.getline(emp[i].name,100);
			cin >> emp[i].name;
			cin>> emp[i].date;
			//cin.getline(emp[i].date,20);
			//cin.getline(c,10);
			cin >> emp[i].salary;
	}
	cout <<"heighest salary\n";
	cout <<"\t"<<emp[n].id<<"\t"<<emp[n].name<<"\t"<<emp[n].date<<"\t"<<emp[n].salary<<"\t\n";


	return 0;



}
