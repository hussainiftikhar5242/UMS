#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{	
	string st3_name;
	string st1_name;
	string st2_name;
	string st4_name;
	float st1_matric=0,st1_fsc=0,st1_ecat=0,st2_matric=0,st2_fsc=0,st2_ecat=0,st3_matric,st3_fsc,st3_ecat,st4_matric,st4_fsc,st4_ecat;
	
	cout<<"****************************************************"<<endl;
	cout<<"*    University Admission Management System        *"<<endl;
	cout<<"****************************************************"<<endl;
	cout<<"Main Menu >"<<endl;
	cout<<"_ _ _ _ _ _ _ _ _ _ _ "<<endl;
	cout<<"Select one of the following options number:"<<endl;
	cout<<"1. Add new student record:"<<endl;
	cout<<"2. View All Record"<<endl;
	cout<<"3. Print The Record In Merit Order"<<endl;
	cout<<"4. Generate Merit List:"<<endl;
	cout<<"5. Program Seat Management "<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"Your Option.."<<endl;
	int number=0;
	cin>> number;
	system("cls");
	if(number==1)
	{
		cout<<"enter a student information :"<<endl;
		cout<<"enter student name:";
		cin>> st1_name;
		cout<<"enter matric marks:";
		cin>> st1_matric;
		cout<<"enter inter marks:";
		cin>> st1_fsc;
		cout<<"enter ecat marks:";
		cin>> st1_ecat;
	}
	if(number==2)
	{
		cout<<"No record found:";
	}
	if(number==3)
	{
		cout<<"sorry no marit order:";
	}
	cout<<"Main Menu >"<<endl;
	cout<<"_ _ _ _ _ _ _ _ _ _ _ "<<endl;
	cout<<"Select one of the following options number:"<<endl;
	cout<<"1. Add new student record:"<<endl;
	cout<<"2. View All Record"<<endl;
	cout<<"3. Print The Record In Merit Order"<<endl;
	cout<<"4. Generate Merit List:"<<endl;
	cout<<"5. Program Seat Management "<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"Your Option.."<<endl;
	cin>> number;
	system("cls");
	if(number==1)
	{
		cout<<"enter a student information :"<<endl;
		cout<<"enter student name:";
		cin>> st2_name;
		cout<<"enter matric marks:";
		cin>> st2_matric;
		cout<<"enter inter marks:";
		cin>> st2_fsc;
		cout<<"enter ecat marks:";
		cin>> st2_ecat;
	}
	if(number==2)
	{
		cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<endl;
		
		cout<<"name:"<<st2_name<<"\t"<<"matric marsk:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<endl;
	}
	if(number==3)
	{
		
		st1_matric=(st1_matric*100)/1100;
		st1_fsc=(st1_fsc*100)/1100;
		st1_ecat=(st1_ecat*100)/1100;
		float st1_matric1=(st1_matric*0.25);
		float st1_fsc1=(st1_fsc*0.45);
		float st1_ecat1=(st1_ecat*0.30);
		float aggregate_1=st1_ecat1+st1_fsc1+st1_matric1;
		st2_matric=(st2_matric*100)/1100;
		st2_fsc=(st2_fsc*100)/1100;
		st2_ecat=(st2_ecat*100)/1100;
		float st2_matric2=(st2_matric*0.25);
		float st2_fsc2=(st2_fsc*0.45);
		float st2_ecat2=(st2_ecat*0.30);
		float aggregate_2=st2_ecat2+st2_fsc2+st2_matric2;
		st3_matric=(st3_matric*100)/1100;
		st3_fsc=(st3_fsc*100)/1100;
		st3_ecat=(st3_ecat*100)/1100;
		float st3_matric3=(st3_matric*0.25);
		float st3_fsc3=(st3_fsc*0.45);
		float st3_ecat3=(st3_ecat*0.30);
		float aggregate_3=st3_ecat3+st3_fsc3+st3_matric3;
		st4_matric=(st4_matric*100)/1100;
		st4_fsc=(st4_fsc*100)/1100;
		st4_ecat=(st4_ecat*100)/1100;
		float st4_matric4=(st4_matric*0.25);
		float st4_fsc4=(st4_fsc*0.45);
		float st4_ecat4=(st4_ecat*0.30);
		float aggregate_4=st4_ecat4+st4_fsc4+st4_matric4;
	  if(aggregate_1>aggregate_2 && aggregate_1>aggregate_3 && aggregate_1>aggregate_4  )
		{	
			cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
			if(aggregate_2>aggregate_3 && aggregate_2>aggregate_4)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_3>aggregate_4)
				{	
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else 
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}	
			}
			if(aggregate_3>aggregate_2 && aggregate_3>aggregate_4)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_2>aggregate_4)
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else 
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}
			}
			if(aggregate_4>aggregate_2 && aggregate_4>aggregate_3)
			{
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				if(aggregate_2>aggregate_3)
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}
				else 
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}
			}		
		}
		
	 if(aggregate_2>aggregate_1 && aggregate_2>aggregate_3 && aggregate_2>aggregate_4 )
	 
		{	
			
			cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
			if(aggregate_1>aggregate_3 && aggregate_1>aggregate_4)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_3>aggregate_4)
				{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;	
				}		
			}
			if(aggregate_3>aggregate_1 && aggregate_3>aggregate_4)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_1>aggregate_4)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}
			}		
		}
		if(aggregate_3>aggregate_1 && aggregate_3>aggregate_2 && aggregate_3>aggregate_4 )
	 
		{	
			
			cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
			if(aggregate_1>aggregate_2 && aggregate_1>aggregate_4)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_2>aggregate_4)
				{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}		
			}
			if(aggregate_4>aggregate_1 && aggregate_4>aggregate_2)
			{
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				if(aggregate_1>aggregate_2)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}
			}
			if(aggregate_2>aggregate_4 && aggregate_2>aggregate_1)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_1>aggregate_4)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}	
			}		
		}
		if(aggregate_4>aggregate_1 && aggregate_4>aggregate_2 && aggregate_4>aggregate_3 )
	 
		{	
			
			cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
			if(aggregate_1>aggregate_2 && aggregate_1>aggregate_3)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_2>aggregate_3)
				{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}
				else
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}		
			}
			if(aggregate_2>aggregate_1 && aggregate_2>aggregate_3)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_3>aggregate_2)
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					
				}
			}
			if(aggregate_3>aggregate_1 && aggregate_3>aggregate_2)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_1>aggregate_2)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}	
			}		
		}		
	}
	cout<<"Main Menu "<<endl;
	cout<<"_ _ _ _ _ _ _ _ _ _ _ "<<endl;
	cout<<"Select one of the following options number:"<<endl;
	cout<<"1. Add new student record:"<<endl;
	cout<<"2. View All Record"<<endl;
	cout<<"3. Print The Record In Merit Order"<<endl;
	cout<<"4. Generate Merit List:"<<endl;
	cout<<"5. Program Seat Management "<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"Your Option.."<<endl;
	cin>> number;
	system("cls");
	if(number==1)
	{
		cout<<"enter a student information :"<<endl;
		cout<<"enter student name:";
		cin>> st3_name;
		cout<<"enter matric marks:";
		cin>> st3_matric;
		cout<<"enter inter marks:";
		cin>> st3_fsc;
		cout<<"enter ecat marks:";
		cin>> st3_ecat;
	}
	if(number==2)
	{
		
		cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<endl;
		cout<<"name:"<<st2_name<<"\t"<<"matric marsk:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<endl;
		cout<<"name:"<<st3_name<<"\t"<<"matric marsk:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<endl;
		
	}
	if(number==3)
	{
		
		st1_matric=(st1_matric*100)/1100;
		st1_fsc=(st1_fsc*100)/1100;
		st1_ecat=(st1_ecat*100)/1100;
		float st1_matric1=(st1_matric*0.25);
		float st1_fsc1=(st1_fsc*0.45);
		float st1_ecat1=(st1_ecat*0.30);
		float aggregate_1=st1_ecat1+st1_fsc1+st1_matric1;
		st2_matric=(st2_matric*100)/1100;
		st2_fsc=(st2_fsc*100)/1100;
		st2_ecat=(st2_ecat*100)/1100;
		float st2_matric2=(st2_matric*0.25);
		float st2_fsc2=(st2_fsc*0.45);
		float st2_ecat2=(st2_ecat*0.30);
		float aggregate_2=st2_ecat2+st2_fsc2+st2_matric2;
		st3_matric=(st3_matric*100)/1100;
		st3_fsc=(st3_fsc*100)/1100;
		st3_ecat=(st3_ecat*100)/1100;
		float st3_matric3=(st3_matric*0.25);
		float st3_fsc3=(st3_fsc*0.45);
		float st3_ecat3=(st3_ecat*0.30);
		float aggregate_3=st3_ecat3+st3_fsc3+st3_matric3;
		
	  if(aggregate_1>aggregate_2 && aggregate_1>aggregate_3 && aggregate_2>aggregate_3)
		{
			cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
			cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
			cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
		}
	 if(aggregate_2>aggregate_1 && aggregate_2>aggregate_3 && aggregate_1>aggregate_3)
		{
			cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
			cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
			cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
			
		}
	}
	cout<<"****************************************************"<<endl;
	cout<<"*    University Admission Management System        *"<<endl;
	cout<<"****************************************************"<<endl;
	cout<<"Main Menu >"<<endl;
	cout<<"_ _ _ _ _ _ _ _ _ _ _ "<<endl;
	cout<<"Select one of the following options number:"<<endl;
	cout<<"1. Add new student record:"<<endl;
	cout<<"2. View All Record"<<endl;
	cout<<"3. Print The Record In Merit Order"<<endl;
	cout<<"4. Generate Merit List:"<<endl;
	cout<<"5. Program Seat Management "<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"Your Option.."<<endl;
	cin>> number;
	system("cls");
	if(number==1)
	{
		cout<<"enter a student information :"<<endl;
		cout<<"enter student name:";
		cin>> st4_name;
		cout<<"enter matric marks:";
		cin>> st4_matric;
		cout<<"enter inter marks:";
		cin>> st4_fsc;
		cout<<"enter ecat marks:";
		cin>> st4_ecat;
	}
	if(number==2)
	{
		
		cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<endl;
		cout<<"name:"<<st2_name<<"\t"<<"matric marsk:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<endl;
		cout<<"name:"<<st3_name<<"\t"<<"matric marsk:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<endl;
		cout<<"name:"<<st4_name<<"\t"<<"matric marsk:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<endl;
	}
	if(number==3)
	{
		
		st1_matric=(st1_matric*100)/1100;
		st1_fsc=(st1_fsc*100)/1100;
		st1_ecat=(st1_ecat*100)/1100;
		float st1_matric1=(st1_matric*0.25);
		float st1_fsc1=(st1_fsc*0.45);
		float st1_ecat1=(st1_ecat*0.30);
		float aggregate_1=st1_ecat1+st1_fsc1+st1_matric1;
		st2_matric=(st2_matric*100)/1100;
		st2_fsc=(st2_fsc*100)/1100;
		st2_ecat=(st2_ecat*100)/1100;
		float st2_matric2=(st2_matric*0.25);
		float st2_fsc2=(st2_fsc*0.45);
		float st2_ecat2=(st2_ecat*0.30);
		float aggregate_2=st2_ecat2+st2_fsc2+st2_matric2;
		st3_matric=(st3_matric*100)/1100;
		st3_fsc=(st3_fsc*100)/1100;
		st3_ecat=(st3_ecat*100)/1100;
		float st3_matric3=(st3_matric*0.25);
		float st3_fsc3=(st3_fsc*0.45);
		float st3_ecat3=(st3_ecat*0.30);
		float aggregate_3=st3_ecat3+st3_fsc3+st3_matric3;
		st4_matric=(st4_matric*100)/1100;
		st4_fsc=(st4_fsc*100)/1100;
		st4_ecat=(st4_ecat*100)/1100;
		float st4_matric4=(st4_matric*0.25);
		float st4_fsc4=(st4_fsc*0.45);
		float st4_ecat4=(st4_ecat*0.30);
		float aggregate_4=st4_ecat4+st4_fsc4+st4_matric4;
	  if(aggregate_1>aggregate_2 && aggregate_1>aggregate_3 && aggregate_1>aggregate_4  )
		{	
			cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
			if(aggregate_2>aggregate_3 && aggregate_2>aggregate_4)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_3>aggregate_4)
				{	
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else 
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}	
			}
			if(aggregate_3>aggregate_2 && aggregate_3>aggregate_4)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_2>aggregate_4)
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else 
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}
			}
			if(aggregate_4>aggregate_2 && aggregate_4>aggregate_3)
			{
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				if(aggregate_2>aggregate_3)
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}
				else 
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}
			}		
		}
		
	 if(aggregate_2>aggregate_1 && aggregate_2>aggregate_3 && aggregate_2>aggregate_4 )
	 
		{	
			
			cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
			if(aggregate_1>aggregate_3 && aggregate_1>aggregate_4)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_3>aggregate_4)
				{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;	
				}		
			}
			if(aggregate_3>aggregate_1 && aggregate_3>aggregate_4)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_1>aggregate_4)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}
			}		
		}
		if(aggregate_3>aggregate_1 && aggregate_3>aggregate_2 && aggregate_3>aggregate_4 )
	 
		{	
			
			cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
			if(aggregate_1>aggregate_2 && aggregate_1>aggregate_4)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_2>aggregate_4)
				{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}		
			}
			if(aggregate_4>aggregate_1 && aggregate_4>aggregate_2)
			{
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				if(aggregate_1>aggregate_2)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}
			}
			if(aggregate_2>aggregate_4 && aggregate_2>aggregate_1)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_1>aggregate_4)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}	
			}		
		}
		if(aggregate_4>aggregate_1 && aggregate_4>aggregate_2 && aggregate_4>aggregate_3 )
	 
		{	
			
			cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
			if(aggregate_1>aggregate_2 && aggregate_1>aggregate_3)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_2>aggregate_3)
				{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}
				else
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}		
			}
			if(aggregate_2>aggregate_1 && aggregate_2>aggregate_3)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_3>aggregate_2)
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					
				}
			}
			if(aggregate_3>aggregate_1 && aggregate_3>aggregate_2)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_1>aggregate_2)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}	
			}		
		}		
	}
	cout<<"****************************************************"<<endl;
	cout<<"*    University Admission Management System        *"<<endl;
	cout<<"****************************************************"<<endl;
	cout<<"Main Menu "<<endl;
	cout<<"_ _ _ _ _ _ _ _ _ _ _ "<<endl;
	cout<<"Select one of the following options number:"<<endl;
	cout<<"1. Add new student record:"<<endl;
	cout<<"2. View All Record"<<endl;
	cout<<"3. Print The Record In Merit Order"<<endl;
	cout<<"4. Generate Merit List:"<<endl;
	cout<<"5. Program Seat Management "<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"Your Option.."<<endl;
	cin>> number;
	system("cls");
	if(number==1)
	{
		cout<<"no more space:"<<endl;
	}
	if(number==2)
	{
		
		cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<endl;
		cout<<"name:"<<st2_name<<"\t"<<"matric marsk:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<endl;
		cout<<"name:"<<st3_name<<"\t"<<"matric marsk:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<endl;
		cout<<"name:"<<st4_name<<"\t"<<"matric marsk:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<endl;
	}
	if(number==3)
	{
		
		st1_matric=(st1_matric*100)/1100;
		st1_fsc=(st1_fsc*100)/1100;
		st1_ecat=(st1_ecat*100)/1100;
		float st1_matric1=(st1_matric*0.25);
		float st1_fsc1=(st1_fsc*0.45);
		float st1_ecat1=(st1_ecat*0.30);
		float aggregate_1=st1_ecat1+st1_fsc1+st1_matric1;
		st2_matric=(st2_matric*100)/1100;
		st2_fsc=(st2_fsc*100)/1100;
		st2_ecat=(st2_ecat*100)/1100;
		float st2_matric2=(st2_matric*0.25);
		float st2_fsc2=(st2_fsc*0.45);
		float st2_ecat2=(st2_ecat*0.30);
		float aggregate_2=st2_ecat2+st2_fsc2+st2_matric2;
		st3_matric=(st3_matric*100)/1100;
		st3_fsc=(st3_fsc*100)/1100;
		st3_ecat=(st3_ecat*100)/1100;
		float st3_matric3=(st3_matric*0.25);
		float st3_fsc3=(st3_fsc*0.45);
		float st3_ecat3=(st3_ecat*0.30);
		float aggregate_3=st3_ecat3+st3_fsc3+st3_matric3;
		st4_matric=(st4_matric*100)/1100;
		st4_fsc=(st4_fsc*100)/1100;
		st4_ecat=(st4_ecat*100)/1100;
		float st4_matric4=(st4_matric*0.25);
		float st4_fsc4=(st4_fsc*0.45);
		float st4_ecat4=(st4_ecat*0.30);
		float aggregate_4=st4_ecat4+st4_fsc4+st4_matric4;
	  if(aggregate_1>aggregate_2 && aggregate_1>aggregate_3 && aggregate_1>aggregate_4  )
		{	
			cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
			if(aggregate_2>aggregate_3 && aggregate_2>aggregate_4)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_3>aggregate_4)
				{	
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else 
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}	
			}
			if(aggregate_3>aggregate_2 && aggregate_3>aggregate_4)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_2>aggregate_4)
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else 
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}
			}
			if(aggregate_4>aggregate_2 && aggregate_4>aggregate_3)
			{
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				if(aggregate_2>aggregate_3)
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}
				else 
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}
			}		
		}
		
	 if(aggregate_2>aggregate_1 && aggregate_2>aggregate_3 && aggregate_2>aggregate_4 )
	 
		{	
			
			cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
			if(aggregate_1>aggregate_3 && aggregate_1>aggregate_4)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_3>aggregate_4)
				{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;	
				}		
			}
			if(aggregate_3>aggregate_1 && aggregate_3>aggregate_4)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_1>aggregate_4)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}
			}		
		}
		if(aggregate_3>aggregate_1 && aggregate_3>aggregate_2 && aggregate_3>aggregate_4 )
	 
		{	
			
			cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
			if(aggregate_1>aggregate_2 && aggregate_1>aggregate_4)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_2>aggregate_4)
				{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}		
			}
			if(aggregate_4>aggregate_1 && aggregate_4>aggregate_2)
			{
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				if(aggregate_1>aggregate_2)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}
			}
			if(aggregate_2>aggregate_4 && aggregate_2>aggregate_1)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_1>aggregate_4)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}	
			}		
		}
		if(aggregate_4>aggregate_1 && aggregate_4>aggregate_2 && aggregate_4>aggregate_3 )
	 
		{	
			
			cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
			if(aggregate_1>aggregate_2 && aggregate_1>aggregate_3)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_2>aggregate_3)
				{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}
				else
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}		
			}
			if(aggregate_2>aggregate_1 && aggregate_2>aggregate_3)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_3>aggregate_1)
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					
				}
			}
			if(aggregate_3>aggregate_1 && aggregate_3>aggregate_2)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_1>aggregate_2)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}	
			}		
		}		
	}
	cout<<"****************************************************"<<endl;
	cout<<"*    University Admission Management System        *"<<endl;
	cout<<"****************************************************"<<endl;
	cout<<"Main Menu "<<endl;
	cout<<"_ _ _ _ _ _ _ _ _ _ _ "<<endl;
	cout<<"Select one of the following options number:"<<endl;
	cout<<"1. Add new student record:"<<endl;
	cout<<"2. View All Record"<<endl;
	cout<<"3. Print The Record In Merit Order"<<endl;
	cout<<"4. Generate Merit List:"<<endl;
	cout<<"5. Program Seat Management "<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"Your Option.."<<endl;
	cin>> number;
	system("cls");
	if(number==1)
	{
		cout<<"no more space:";
	}
	if(number==2)
	{
		
		cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<endl;
		cout<<"name:"<<st2_name<<"\t"<<"matric marsk:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<endl;
		cout<<"name:"<<st3_name<<"\t"<<"matric marsk:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<endl;
		cout<<"name:"<<st4_name<<"\t"<<"matric marsk:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<endl;
	}
	if(number==3)
	{
		
		st1_matric=(st1_matric*100)/1100;
		st1_fsc=(st1_fsc*100)/1100;
		st1_ecat=(st1_ecat*100)/1100;
		float st1_matric1=(st1_matric*0.25);
		float st1_fsc1=(st1_fsc*0.45);
		float st1_ecat1=(st1_ecat*0.30);
		float aggregate_1=st1_ecat1+st1_fsc1+st1_matric1;
		st2_matric=(st2_matric*100)/1100;
		st2_fsc=(st2_fsc*100)/1100;
		st2_ecat=(st2_ecat*100)/1100;
		float st2_matric2=(st2_matric*0.25);
		float st2_fsc2=(st2_fsc*0.45);
		float st2_ecat2=(st2_ecat*0.30);
		float aggregate_2=st2_ecat2+st2_fsc2+st2_matric2;
		st3_matric=(st3_matric*100)/1100;
		st3_fsc=(st3_fsc*100)/1100;
		st3_ecat=(st3_ecat*100)/1100;
		float st3_matric3=(st3_matric*0.25);
		float st3_fsc3=(st3_fsc*0.45);
		float st3_ecat3=(st3_ecat*0.30);
		float aggregate_3=st3_ecat3+st3_fsc3+st3_matric3;
		st4_matric=(st4_matric*100)/1100;
		st4_fsc=(st4_fsc*100)/1100;
		st4_ecat=(st4_ecat*100)/1100;
		float st4_matric4=(st4_matric*0.25);
		float st4_fsc4=(st4_fsc*0.45);
		float st4_ecat4=(st4_ecat*0.30);
		float aggregate_4=st4_ecat4+st4_fsc4+st4_matric4;
	  if(aggregate_1>aggregate_2 && aggregate_1>aggregate_3 && aggregate_1>aggregate_4  )
		{	
			cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
			if(aggregate_2>aggregate_3 && aggregate_2>aggregate_4)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_3>aggregate_4)
				{	
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else 
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}	
			}
			if(aggregate_3>aggregate_2 && aggregate_3>aggregate_4)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_2>aggregate_4)
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else 
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}
			}
			if(aggregate_4>aggregate_2 && aggregate_4>aggregate_3)
			{
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				if(aggregate_2>aggregate_3)
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}
				else 
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}
			}		
		}
		
	 if(aggregate_2>aggregate_1 && aggregate_2>aggregate_3 && aggregate_2>aggregate_4 )
	 
		{	
			
			cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
			if(aggregate_1>aggregate_3 && aggregate_1>aggregate_4)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_3>aggregate_4)
				{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;	
				}		
			}
			if(aggregate_3>aggregate_1 && aggregate_3>aggregate_4)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_1>aggregate_4)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}
			}		
		}
		if(aggregate_3>aggregate_1 && aggregate_3>aggregate_2 && aggregate_3>aggregate_4 )
	 
		{	
			
			cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
			if(aggregate_1>aggregate_2 && aggregate_1>aggregate_4)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_2>aggregate_4)
				{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}		
			}
			if(aggregate_4>aggregate_1 && aggregate_4>aggregate_2)
			{
				cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				if(aggregate_1>aggregate_2)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}
			}
			if(aggregate_2>aggregate_4 && aggregate_2>aggregate_1)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_1>aggregate_4)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
				}
				else
				{
					cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}	
			}		
		}
		if(aggregate_4>aggregate_1 && aggregate_4>aggregate_2 && aggregate_4>aggregate_3 )
	 
		{	
			
			cout<<"name:"<<st4_name<<"\t"<<"matric marks:"<<st4_matric<<"\t"<<"inter marks:"<<st4_fsc<<"\t"<<"ecat marks:"<<st4_ecat<<"\t"<<"ecat marks:"<<aggregate_4<<endl;
			if(aggregate_1>aggregate_2 && aggregate_1>aggregate_3)
			{
				cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				if(aggregate_2>aggregate_3)
				{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				}
				else
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;	
				}		
			}
			if(aggregate_2>aggregate_1 && aggregate_2>aggregate_3)
			{
				cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				if(aggregate_3>aggregate_1)
				{
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
				}
				else
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
					
				}
			}
			if(aggregate_3>aggregate_1 && aggregate_3>aggregate_2)
			{
				cout<<"name:"<<st3_name<<"\t"<<"matric marks:"<<st3_matric<<"\t"<<"inter marks:"<<st3_fsc<<"\t"<<"ecat marks:"<<st3_ecat<<"\t"<<"ecat marks:"<<aggregate_3<<endl;
				if(aggregate_1>aggregate_2)
				{
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
				}
				else
				{
					cout<<"name:"<<st2_name<<"\t"<<"matric marks:"<<st2_matric<<"\t"<<"inter marks:"<<st2_fsc<<"\t"<<"ecat marks:"<<st2_ecat<<"\t"<<"ecat marks:"<<aggregate_2<<endl;
					cout<<"name:"<<st1_name<<"\t"<<"matric marks:"<<st1_matric<<"\t"<<"inter marks:"<<st1_fsc<<"\t"<<"ecat marks:"<<st1_ecat<<"\t"<<"ecat marks:"<<aggregate_1<<endl;
					
				}	
			}		
		}		
	}
}
	
