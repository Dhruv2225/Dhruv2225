#include<iostream.h>
#include<conio.h>
class base
	{
	public:
	base()
		{
		cout<<"base class constructor."<<endl;
		}
	};
class derived:public base
	{
	public:
	derived()
		{
		cout<<"derived class constructor."<<endl;
		}
	};
void main()
	{
	clrscr();
	derived d;
	derived d1;
	getch();
	}