//============================================================================
// Name        : lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<fstream>
using namespace std;
class student
{
	string usn;
	string name;
	string branch;
	string semester;

public:
	  void readfromconsole()
	  {
		cin.clear();
		cin.ignore(255,'\n');
	    cin.clear();
	    cout<<"Enter the name"<<endl;
	    getline(cin,name);
	    cin.clear();
	    cin.ignore(255,'\n');
	    cout<<"Enter the usn"<<endl;
	    cin>>usn;
	    cout<<"Enter the branch"<<endl;
	    cin>>branch;
	    cout<<"Enter the semester"<<endl;
	    cin>>semester;

	  }
	  void showstudent()
	  {
		  cout<<"\nusn:"<<usn<<endl;
		  cout<<"\nname:"<<name<<endl;
		  cout<<"\nbranch:"<<branch<<endl;
		  cout<<"\nsemester:"<<semester<<endl;
	  }
	  void pack()
	  {
		  string temp,buffer,sem1;

		  int i;

				  temp=usn+'|'+name+'|'+branch+'|'+semester;
				  buffer=temp;
	     for(i=temp.size();i<100;i++)

	       buffer+='$';


	     cout<<buffer<<endl;
	  }
	  void write()
	  {
		  fstream f1;
		  string buffer;
		  f1.open("Data.txt",ios::out|ios::app);
		  f1<<buffer;
		  f1.close();
	  }
};

int main()
{
	int choice;
	student s;
  while(1)
  {
	  cout<<"1.INSERT"<<endl<<"2.SEARCH"<<endl<<"3.DELETE"<<endl<<"4.MODIFY"<<endl;
	  cout<<"Enter your choice";
	  cin>>choice;
      switch(choice)
		{
		  case 1:s.readfromconsole();
		       s.showstudent();
		       s.pack();
		       s.write();
		       break;
		  default:return 0;
		 }
	}
	return 0;
}
