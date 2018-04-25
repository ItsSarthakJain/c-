#include<fstream>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void star()
   {
  	int i;
  	for(i=1;i<=71;i++)
			cout<<"* ";
   }
void in()
 {
   ifstream fin;
   fin.open("out.txt",ios::in|ios::app);
 int choise,check;
 char id[20],gt_no[6];
 cout<<"1. GT-NUMBER\n";
 cout<<"2. ID-NUMBER\n";
 cin>>check;
 int flag=0;
 if(check==1)
  {
    cout<<"ENTER THE GT-NUMBER\n";
    cin>>gt_no;
    char line[20];
    ofstream temp;
    temp.open("temp.txt");
    while (!fin.eof())
    {
      fin>>line;
      if(strcmp(line,gt_no)==0)
      {
      cout<<"STUDENT SUCESSFULLY ENTERED\n";
      flag=1;
      }
      else
      temp<<line<<endl;
    }
    temp.close();
    fin.close();
    remove("out.txt");
    rename("temp.txt","out.txt");
  }
 else if(check==2)
  {
    cout<<"ENTER THE ID-NUMBER\n";
    cin>>id;
    char line[20];
    ofstream temp;
    temp.open("temp.txt");
    while (!fin.eof())
    {
      fin>>line;
      if(strcmp(line,id)==0)
      {
        cout<<"STUDENT SUCESSFULLY ENTERED\n";
        flag=1;
      }
      else
      temp<<line<<endl;
    }
    temp.close();
    fin.close();
    remove("out.txt");
    rename("temp.txt","out.txt");
  }
 else
    cout<<"PLEASE CHOOSE FROM THE TWO OPTIONS\n";
 }
void out()
 {
 ofstream oout;
 oout.open("out.txt",ios::in|ios::out|ios::app);
 ifstream ain;
 ain.open("approval.txt",ios::in|ios::out|ios::app);
 int check,choise,i,flag=0;
 char id[20],gt_no[6];
 cout<<"1. GT-NUMBER\n";
 cout<<"2. ID-NUMBER\n";
 cin>>check;
 if(check==1)
  {
    cout<<"ENTER THE GT-NUMBER\n";
    cin>>gt_no;
    char line[20];
    ofstream temp;
    temp.open("temp.txt",ios::out);
    while (!ain.eof())
    {
      ain>>line;
      if(strcmp(line,gt_no)==0)
      {
        flag=1;
      }
      else
      {
        temp<<line;
      }
    }
    if(flag==1)
    oout<<gt_no<<endl;
    ain.close();
    temp.close();
    oout.close();
    remove("approval.txt");
    rename("temp.txt","approval.txt");
  }
 else if(check==2)
  {
    cout<<"ENTER THE ID-NUMBER\n";
    cin>>id;
    char line[20];
    ofstream temp;
    temp.open("temp.txt",ios::out);
    while (!ain.eof())
    {
      ain>>line;
      if(strcmp(line,id)==0)
      {
        flag=1;
      }
      else
      {
        temp<<line;
      }
    }
    if(flag==1)
    oout<<id<<endl;
    ain.close();
    temp.close();
    oout.close();
    remove("approval.txt");
    rename("temp.txt","approval.txt");
  }
 else
    cout<<"PLEASE CHOOSE FROM THE TWO OPTIONS\n";
    if(flag==1)
    cout<<"\nOUT SUCESSFULL\n\n";
    else
    cout<<"\nGATE PASS NOT APPROVED BY WARDEN\n\n";
 }
int check_out()
 {
   ifstream oin;
   oin.open("out.txt",ios::in|ios::app);
 int check,choise,i;
 char gt_no[20],id[6];
 cout<<"1. GT-NUMBER\n";
 cout<<"2. ID-NUMBER\n";
 cin>>check;
 if(check==1)
  {
    cout<<"ENTER THE GT-NUMBER:";
    cin>>gt_no;
    char line[20];
    while (!oin.eof())
    {
      oin>>line;
      if(strcmp(line,gt_no)==0);
      return 1;
    }
  }
 else if(check==2)
  {
    cout<<"ENTER THE ID-NUMBER:";
    cin>>id;
    char line[20];
    while (!oin.eof())
    {
      oin>>line;
      if(strcmp(line,id)==0)
      return 1;
    }
  }
 else
  return 0;
}
void exit()
 {
   ofstream fout;
   fout.open(".txt",ios::out|ios::app);
   ifstream fin;
   fin.open(".txt",ios::in);
  int check,choise,i,gt_no;
  string id;
 }
void req()
 {
  char id[20];
  cout<<"ENTER THE STUDENT ID:";
  ofstream rout;
  rout.open("request.txt",ios::out|ios::app);
  cin>>id;
  rout<<endl<<id<<endl;
  rout.close();
  cout<<"GATE PASS REQUEST SUBMITTED SUCESSFULLY\n\n";
 }
void approve_gt()
{
 long int r;
 fstream aout;
 aout.open("approval.txt",ios::out|ios::app|ios::in);
 fstream rin;
 rin.open("request.txt",ios::in|ios::out|ios::app);
 int check,choise,i,flag=0;
 char id[20];
 cout<<"ENTER THE ID-NUMBER:";
 cin>>id;
 char line[20];
 ofstream tmp;
 tmp.open("temp.txt");
 while (!rin.eof())
 {
  rin>>line;
  if(strcmp(line,id)==0)
   {
    aout<<id<<"\n";
    flag=1;
   }
  else
  {
    tmp<<line<<endl;
  }
 }
 rin.close();
 tmp.close();
 remove("request.txt");
 rename("temp.txt","request.txt");
 srand(time(0));
 if(flag==1)
 {
   r=(rand() %999999 + 111111);
 cout<<"GATE PASS REQUEST APPROVED SUCESSFULL\n";
 cout<<"GT NO::"<<r;
 string gt_no = to_string(r);
 aout<<gt_no<<endl;
 aout<<id<<endl;
}
 else
 cout<<"NO MATCHING GATE PASS REQUEST FOR THAT ID FOUND\n";
}
void start()
{
  cout<<"\n\nCHOOSE THE OPTIONS FROM THE FOLLOWING ->->-> \n\n\n";
  cout<<"1. GATE PASS (IN) \n\n";
  cout<<"2. GATE PASS (OUT) \n\n";
  cout<<"3. CHECK STUDENT IS OUTSIDE OR NOT \n\n";
  cout<<"4. REQUEST GATE \n\n";
  cout<<"5. APPROVE A GATE PASS REQUEST \n\n";
  cout<<"6. DELETE ALL STORED DATA ON PORTAL\n\n";
  cout<<"7. EXIT....\n\n\n";
}
int main()
	{
    int check,choise,i,gt_no;
		double id;
    star();
		for(i=1;i<=61;i++)
		   cout<<" ";
		cout<<"CHITKARA UNIVERSITY\n";
		for(i=1;i<=67;i++)
		   cout<<" ";
		cout<<"WELCOMES\n";
		for(i=1;i<=13;i++)
	  	   cout<<" ";
		cout<<"YOU TO THE GATE-PASS PORTAL\n";
		star();
		start();
    int c,a;
    do
    {
		cin>>choise;
    char a;
		switch(choise)
			{
			case 1:
			  in();
				break;
			case 2:
        out();
        break;
			case 3:
			  c=check_out();
        if(c==1)
        cout<<"THE STUDENT IS OUT OF THE UNIVERSITY CAMPUS\n";
        else
        cout<<"THE STUDENT IS NOT OUT OF THE UNIVERSITY CAMPUS\n";
				break;
			case 4:
				req();
				break;
      case 5:
        approve_gt();
        break;
      case 6:
       cout<<"ARE YOU SURE ALL THE STORED DATA WOULD BE ERASED\n\n";
       cin>>a;
      if(a=='y')
      {
      remove("approval.txt");
      remove("out.txt");
      remove("request.txt");
    }
				break;
      case 7:
          cout<<"THANKS FOR USING GATE PASS PORTAL \n made by sarthak jain\n";
  				exit(0);
          break;
			default:
				cout<<"ENTER FROM THE ABOVE CHOISES\n";
			}
      start();
    }while(1);
	return 0;
	}
