#include<iostream.h>
#include<conio.h>
struct student
	{
	char name[20];
	int r_no;
	int age;
	};
int main()
{
struct student s;
clrscr();
cout<<"enter name :";
cin>>s.name;
cout<<"enter roll number :";
cin>>s.r_no;
cout<<"enter age :";
cin>>s.age;
cout<<"display entered values"<<endl;
cout<<"your name is :"<<s.name<<endl;
cout<<"your roll number is :"<<s.r_no<<endl;
cout<<"your age is :"<<s.age<<endl;
getch();
return 0;
}
