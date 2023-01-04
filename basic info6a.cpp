#include<iostream>
using namespace std;

class Basic_Info
{
	 public:
	     char name[100];
         int  rollno;
	     char gender[20];
         void getData_B()
	   {
	   	  fflush(stdin);
	  	  cout<<"student name is:";
		  cin.get(name,100);
		  cout<<"student roll number is:";
		  cin>>rollno;
		  fflush(stdin);
		  cout<<"student gender is:";
		  cin.get(gender,20);
	   }
	void display_B()
	{
	  cout<<"student details:"<<name<<"\t"<<rollno<<"\t"<<gender;	
	}
};
class Physical_Fit: private Basic_Info
{
	public:
	     float height,weight;
	     void getData()
	     {
		   getData_B();
		   cout<<"student height:";
		   cin>>height;
		   cout<<"student weight:";
		   cin>>weight;
	     }
	void display()
	{
		display_B();
		cout<<"\t"<<height<<"\t"<<weight<<endl;
	}
};
int main()
{
	Physical_Fit p;
	p.getData();
	p.display();
	return 0;
}

