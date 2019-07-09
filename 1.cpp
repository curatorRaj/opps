#include <iostream>
using namespace std;
struct Book
{
	char author[100];
	char title[100];
	int price;
	
};

int main()
{
	struct Book books[2];
	int i;
	char c[10];
	for ( i = 0; i < 2; ++i)
	{
		cout << "enter author title and price of book\n";
		cin.getline(books[i].author,100);
		//cin>>books[i].title;
		cin.getline(books[i].title,100);
		cin  >> books[i].price ;
		//cin.getline(c,10);
		cin>>c;

	}
	cout << "======================================================\n";
	cout <<"author\t title\t price\t\n";
	cout << "=====================================================\n";
	for ( i = 0; i < 2; ++i)
	{
		
		cout << books[i].author <<"\t"<< books[i].title <<"\t"<< books[i].price<<"\n" ;

	}

	return 0;


}