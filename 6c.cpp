#include<iostream>
using namespace std;
class Person
{
    protected:
      int age;
      string name;
    public:
          virtual void getdata(){};
          virtual void putdata(){};
};
class Professor : public Person
{
	int publication;
    static int id1;
      public:
       void getdata()
       {
       	   cout<<"enter name of professor:";
           cin>>name;
           cout<<"enter age of professor:";
           cin>>age;
           cout<<"enter publications:";
           cin>>publication;
       }
       void putdata()
       {
          cout<<name<<" "<<age<<" "<<publication<<" "<<endl;
       }
};
class Student : public Person
{
    int marks[6];
     public:
       void getdata()
     { 
       cout<<"enter name of student:";
       cin>>name;
       cout<<"enter age of student:";
       cin>>age;
       cout<<"enter marks of student:";
       for(int i=0;i<=2;i++)
       {
          cin>>marks[i];
       }
     }
   void putdata()
   {
      cout<<name<<" "<<age<<" "<<endl;
      for(int i=0;i<=2;i++)
       {
          cout<<marks[i]<<" ";
       }
   }
};
int main()
{
  Professor p;
  Student s;
  p.getdata();
  s.getdata();
  p.putdata();
  s.putdata();   
}

