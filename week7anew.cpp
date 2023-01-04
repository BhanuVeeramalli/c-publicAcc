#include <iostream>
#include <string>
using namespace std;
class Building{
public:
int floors,rooms,access_points;
string month;
int state;
Building(int floor,int room,int access_point, string mont,int stat){
	floors=floor;
	rooms=room;
	access_points=access_point;
	month=mont;
	state=stat;
}
};
class Floors : public Building{
public:
	void no_floors()
	{
		cout<<"\nno of floors in building ="<<floors;
	}
};
class Rooms : public Floors{
public:
	void no_rooms()
	{
		cout<<"\nno of rooms in floor ="<<rooms;
	}
};
class Access : public Rooms{
public:
	void no_accesspoints()
	{
	cout<<"\nno of accespoints in the room ="<<access_points;
		state==1?cout<<"these are in 'on' state in"<<month:cout<<"these are in 'off' state in"<<month;	
	}
};
int main()
{
	char ch;
	do{
		Building b1(5,25,4,"jan",1);
		Floors f;
		Rooms r;
		Access a;

		f.no_floors();
		r.no_rooms();
		a.no_accesspoints();
	cout<<"\nenter 'y' or 'Y' to continue:";
	cin>>ch;
	}
	while(ch == 'y' || ch =='Y');

	cout<<"\nprogram is terminated:";
}



