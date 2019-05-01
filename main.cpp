#include<iostream>
#include<windows.h>
#include<cstring>
#include<math.h>
using namespace std;
void aaby();
void ip();
void sp();
void pp();
void up();
void mip();
void wp();
void hp();
static int i,j,k,l,c;



//address class


class new_agt;
class address
{
char hno[20];
char area[20];
char city[20];
char state[20];
public:
friend class new_agt;
friend class customer;
void access();
void display();
}add;
void address::access()
	{
		cout<<"GIVE YOUR HOUSE NUMBER"<<endl;
		cin>>hno;
		cout<<"GIVE YOUR AREA"<<endl;
		cin>>area;
		cout<<"GIVE YOUR CITY"<<endl;
		try
		   {
		       cin>>city;
		       for(int i=0;i<20;i++)
               {
		       if(city[i]>=0&&city[i]<=9)
                {
                    break;
                    throw city;
                }
               }
               cout<<"GIVE YOUR STATE"<<endl;
               cin>>state;
		       for(int i=0;i<20;i++)
               {
		       if(state[i]>=0&&state[i]<=9)
                {
                    break;
                    throw state;
                }
               }
		   }
		   catch(char*)
		   {
		       cout<<"THE NAME CONTAINS NUMERIC VALUES"<<endl;
		   }
		   system("cls");
	}
void address::display()
	{
		cout<<"HOUSE NUMBER IS "<<hno<<endl;
		cout<<"AREA IS"<<area<<endl;
		cout<<"CITY IS "<<city<<endl;
        cout<<"STATE IS "<<state<<endl;
        Sleep(4000);
        system("cls");
	}

//for a working agent


class new_agt;
class mgr;
class agent
{
public:
char name[30];
int age;
int phone;
char email[20];
private:
int pin;
int polsld;
char type[20];
int sal;
void display()  ;   //displaying agents working details
public:     //constructor to set its pin value
agent();
void set_pin();
void p() ;            //to show the pin value
public:
int code;
friend class mgr;
friend class new_agt;
void access() ;                                                     //agent have to give his password
void details_display() ;              //displaying agents personal details
}a[10];



void agent:: display()     //displaying agents working details
{
    cout<<"NAME="<<name<<endl;
    cout<<"POLICY SOLD="<<polsld<<endl;
    cout<<"TYPE="<<type<<'\n';
    cout<<"SALARY="<<sal<<endl<<endl;
    Sleep(4000);
    system("cls");
}
agent::agent()
{
	pin=12345678;
	polsld=0;
	sal=20000;
}
void agent::set_pin()
{
    pin=pin+5*j-3*j;
    p();
}
void agent::p()             //to show the pin value
{
	cout<<" YOUR PIN IS "<<pin<<endl;
}
void agent::access()                                                      //agent have to give his password
{
    int i=3;
    while(i>=1)
    {
	cout<<" LOGIN PASSWORD "<<endl;
	cin>>code;
	system("cls");
	if(code==pin)                                                   //if his password is correct then his details will be displayed
	{
	    display();
	    break;
	}
	else
    {
	cout<<" YOUR PASSWORD IS INCORRECT "<<endl;
	i--;
	cout<<"TRY AGAIN WITH REMAINING "<<i<<" CHANCES"<<endl;
    }
    }
}

void agent::details_display()               //displaying agents personal details
{
	cout<<" YOUR DETAILS ARE "<<endl;
	cout<<"NAME="<<name<<'\n';
	cout<<"AGE="<<age<<'\n';
	cout<<"PHONE NUMBER="<<phone<<'\n';
	cout<<"EMAIL ID="<<email<<endl;
	Sleep(4000);
	system("cls");
}


//for new agent

class agent;
class new_agt
{
public:
char name[30];
int age;
int phone;
char email[20];
void adrs(address obj);
  public:
  	friend class agent;
  	void details(address add) ;              //details with house address
}na[10];



void new_agt:: adrs(address obj)
{
 obj.access();
}



void new_agt::details(address add)               //details with house address
  	{
  		try
	{
	    int found=0;
        cout<<"GIVE YOUR NAME"<<endl;
        cin>>name;
        for(int i=0;i<strlen(name);i++)
    {
        if(name[i]>=0&&name[i]<=9||name[0]=='\0')
        {
            found=1;
            throw name;
        }
    }
    if(found!=1)
    {
        cout<<"GIVE YOUR AGE "<<endl;
        cin>>age;
        if(age==0)
            throw age;
            else
        {
        cout<<"GIVE YOUR PHONE NUMBER"<<endl;
        cin>>phone;
        if(phone==0)
            throw phone;
        else
        {
        cout<<"GIVE YOUR EMAIL ID"<<endl;
        cin>>email;
        if(email[0]=='\0')
            throw email;
        else
        {
            cout<<"GIVE YOUR ADDRESS"<<endl;
                adrs(add);
        }
        }
        }
    }
	}
catch(char*)
{
    cout<<"NUMERIC NAME IS NOT ALLOWED"<<endl;
    cout<<"NULL INPUTS ARE NOT ALLOWED"<<endl;
    Sleep(3000);
    system("cls");
}
catch(int)
{
    cout<<"INVALID INPUT"<<endl;
    Sleep(2000);
    system("cls");
}
catch(char)
{
    cout<<"GENDER MUST BE NON NUMERIC"<<endl;
    cout<<"NULL INPUTS ARE NOT ALLOWED"<<endl;
    Sleep(3000);
    system("cls");
}
}


//customer class


class customer
{public:
float prem;
private:
char name[30];
int age;
int code;
int pin;
char gender;
int ph_no;
char email[30];
float salary;
char type[40];
void data_show();
void set_pre();
void set_pin();          //displaying customer data
public:
friend class manager;
customer();
void data_give() ;   //taking new customer data
void access();     //accessing the customer data
}cust[10];


void customer::data_show()             //displaying customer data
{
	cout<<" YOUR DETAILS ARE "<<endl;
	cout<<"NAME="<<name<<'\n';
	cout<<"AGE="<<age<<'\n';
	cout<<"PHONE NUMBER="<<ph_no<<'\n';
	cout<<"EMAIL="<<email<<endl;
	cout<<"GENDER="<<gender<<endl;
	cout<<"SALARY IS Rs."<<salary<<endl;
	cout<<"TYPE OF POLICY="<<type<<endl;
	cout<<"PREMIUM="<<prem<<endl;
	Sleep(5000);
	system("cls");
}
customer::customer()
{
    code=123456;
}
void customer::set_pin()
{
	code=code+5*c-2*c;
}

void customer::set_pre()
{
    while(1)
    {
        cout<<"THE POLICIES PROVIDED BY US ARE"<<endl;
    cout<<"1.aaby   2.ip  3.sp  4.pp   5.up   6.mip   7.wp   8.hp"<<endl;
    cout<<"GIVE YOUR TYPE OF POLICY "<<endl;
    cin>>this->type;
    system("cls");
       if(strcmp(this->type,"aaby")==0)
        {
            this->prem=10000;
             break;
        }
        else if(strcmp(this->type,"ip")==0)
        {
            this->prem=10000;
             break;
        }
        else if(strcmp(this->type,"sp")==0)
        {
            this->prem=10000;
             break;
        }
        else if(strcmp(this->type,"pp")==0)
        {
            this->prem=10000;
             break;
        }
        else if(strcmp(this->type,"up")==0)
        {
            this->prem=10000;
             break;
        }
        else if(strcmp(this->type,"mip")==0)
        {
            this->prem=10000;
             break;
        }
        else if(strcmp(this->type,"wp")==0)
        {
            this->prem=10000;
             break;
        }
        else if(strcmp(this->type,"hp")==0)
        {
            this->prem=10000;
             break;
        }
        else if(strcmp(this->type,"aaby")==0)
        {
            this->prem=10000;
             break;
        }
        else
            cout<<"SORRY!!! THE GIVEN POLICY IS NOT AVAILABLE"<<endl;
            cout<<"WANNA SELECT THE AVAILABLE ONE"<<endl;
    Sleep(2000);
    system("cls");
    }
}
void customer::data_give()    //taking new customer data
{
	try
	{
	    int found=0;
        cout<<"GIVE YOUR NAME"<<endl;
        cin>>name;
        for(int i=0;i<strlen(name);i++)
    {
        if(name[i]>=0&&name[i]<=9||name[0]=='\0')
        {
            found=1;
            throw name;
        }
    }
    if(found!=1)
    {
        cout<<"GIVE YOUR AGE "<<endl;
        cin>>age;
        if(age==0)
            throw age;
            else
        {
        cout<<"GIVE YOUR GENDER"<<endl;
        cin>>gender;
        if(gender>=0&&gender<=9||gender=='\0')
            throw gender;
            else
        {
        cout<<"GIVE YOUR PHONE NUMBER"<<endl;
        cin>>ph_no;
        if(ph_no==0)
            throw ph_no;
        else
        {
        cout<<"GIVE YOUR EMAIL ID"<<endl;
        cin>>email;
        if(email[0]=='\0')
            throw email;
        else
        {
        cout<<"GIVE YOUR SALARY"<<endl;
        cin>>salary;
        if(salary==0)
            throw salary;
            else
                set_pre();
        }
        }
        }
        }
    }
    }
catch(char*)
{
    cout<<"NUMERIC NAME IS NOT ALLOWED"<<endl;
    cout<<"NULL INPUTS ARE NOT ALLOWED"<<endl;
    Sleep(2000);
    system("cls");
}
catch(int)
{
    cout<<"INVALID INPUT"<<endl;
    Sleep(2000);
    system("cls");
}
catch(char)
{
    cout<<"GENDER MUST BE NON NUMERIC"<<endl;
    cout<<"NULL INPUTS ARE NOT ALLOWED"<<endl;
    Sleep(3000);
    system("cls");
}
system("cls");
     set_pin();
     cout<<"YOUR PIN IS "<<code<<endl;
	cout<<"YOUR SERIAL NUMBER IS "<<c<<endl;
	cout<<"YOUR ACCOUNT CREATED SUCCESSFULLY"<<endl;
	c++;
	Sleep(4000);
	system("cls");
}


void customer::access()     //accessing the customer data
{
    int i=3;
    while(i>=1)
    {
	cout<<"GIVE YOUR PIN "<<endl;
	cin>>pin;
	system("cls");
	if(pin==code)
    {
	data_show();
	break;
    }
	else
    {
	cout<<" YOUR PASSWORD IS INCORRECT "<<endl;
	i--;
	cout<<"TRY AGAIN WITH REMAINING "<<i<<" CHANCES"<<endl;
    }
    }
}



//manager class

class mgr
{
int pin;
public:
mgr();
void mgr_access(agent &a1) ;  //manager function to access agent class
void mgr_customer(customer &obj);
}m;

mgr::mgr()
{
	pin=87654321;
}


void mgr::mgr_access(agent &a1)   //manager function to access agent class
{
    int mgrcode;
    int i=3;
    while(i>=1)
    {//manger have to give his password
    cout<<" GIVE THE MANAGER'S CODE "<<endl;
    cin>>mgrcode;
    system("cls");
    if(mgrcode==pin)                                                             //if manager puts correct password he can access agents details
    {
    cout<<" GIVE THE NUMBER OF POLICY SOLD ,TYPE AND HIS/HER SALARY "<<endl;
    cin>>a1.polsld>>a1.type>>a1.sal;
    system("cls");
    break;
    }
    else
    {
	cout<<" YOUR PASSWORD IS INCORRECT "<<endl;
	i--;
	cout<<"TRY AGAIN WITH REMAINING "<<i<<" CHANCES"<<endl;
    }
    }
}


void mgr::mgr_customer(customer &obj)                   //manager function to access customer class
{
   	int mgrcode;                                               //manger have to give his password
    int i=3;
    while(i>=1)
    {
    cout<<" GIVE THE MANAGER'S CODE "<<endl;
    cin>>mgrcode;
    system("cls");
    if(mgrcode==pin)                                                             //if manager puts correct password he can access agents details
    {
    cout<<" GIVE THE PREMIUM "<<endl;
    cin>>obj.prem;
    system("cls");
    break;
    }
    else
    {
	cout<<" YOUR PASSWORD IS INCORRECT "<<endl;
	i--;
	cout<<"TRY AGAIN WITH REMAINING "<<i<<" CHANCES"<<endl;
    }
    }
}
//class for feed back

class feedback
{
private:
    char name[30];
    char gndr;    //gender
    char occp[20];    //occupation
    float inc;       //income
    char a[12];     //ratings
public:
	void give()   ;                     //taking the feedback
    void d()  ;                         //displaying the feedback
}fdb;



void feedback:: give()                        //taking the feedback
	{
		try
	{
	    int found=0;
        cout<<"GIVE YOUR NAME"<<endl;
        cin>>name;
        for(int i=0;i<strlen(name);i++)
    {
        if(name[i]>=0&&name[i]<=9||name[0]=='\0')
        {
            found=1;
            throw name;
        }
    }
    if(found!=1)
    {
        cout<<"GIVE YOUR GENDER "<<endl;
        cin>>gndr;
        if(gndr>=0&&gndr<=9)
            throw gndr;
            else
        {
        cout<<"WHAT IS YOUR OCCUPATION"<<endl;
        cin>>occp;
        for(int i=0;i<strlen(occp);i++)
    {
        if(occp[i]>=0&&occp[i]<=9||occp[0]=='\0')
        {
            found=2;
            throw occp;
        }
    }
        if(found!=2)
        {
        cout<<"GIVE YOUR INCOME"<<endl;
        cin>>inc;
        if(inc==0)
            throw inc;
        else
        {
            cout<<"GIVE YOUR RATINGS"<<endl;
                cin>>a;
        }
        }
        }
    }
	}
catch(char*)
{
    cout<<"NUMERIC NAME IS NOT ALLOWED"<<endl;
    cout<<"NULL INPUTS ARE NOT ALLOWED"<<endl;
    Sleep(2000);
    system("cls");
}
catch(float)
{
    cout<<"INVALID INPUT"<<endl;
    Sleep(2000);
    system("cls");
}
catch(char)
{
    cout<<"GENDER MUST BE NON NUMERIC"<<endl;
    cout<<"NULL INPUTS ARE NOT ALLOWED"<<endl;
    Sleep(2000);
    system("cls");
}
system("cls");
		d();
	}


    void feedback:: d()                           //displaying the feedback

    {
    	cout<<" ACCORDING TO "<<name<<" THE RATINGS ARE "<<a<<endl<<endl;
          Sleep(2000);
          system("cls");
	}


//1--------->    called in main for customer

void cstmr()
{
	int select,z;
	cout<<"1.NEW CUSTOMER           2.REGULAR CUSTOMER "<<endl;
	cout<<"ENTER YOUR CHOICE"<<endl;
	cin>>select;
	system("cls");
	switch(select)
	{
		case 1:
			{
			cust[c].data_give();
			break;
		    }
		case 2:
			{
				cout<<"GIVE THE SERIAL NUMBER OF THE CUSTOMER"<<endl;
				cin>>z;
				system("cls");
				cust[z].access();
				break;
			}
	}

}

// 2-------->    called in main for agent

void agt()
{
    int e;
	cout<<endl<<"1.NEW AGENT"<<endl;
	cout<<"2.WORKING AGENT"<<endl<<endl;
	cout<<"SELECT ONE OF THE ABOVE"<<endl;
    cin>>e;
    system("cls");
    switch(e)
    {
	    case 1:   //new agent
		   {
		     cout<<"GIVE YOUR DETAILS"<<endl;
		     na[j].details(add);
		     strcpy(a[j].name,na[j].name);
             a[j].age=na[j].age;
     	     a[j].phone=na[j].phone;
	         strcpy(a[j].email,na[j].email);
	         a[j].set_pin();
	         cout<<"YOUR SERIAL NUMBER IS "<<j<<endl<<endl;
	         j++;
	         Sleep(2000);
	         system("cls");
	         break;
	      }
	    case 2:         //working agent
	        {
		     int d;      //options
		     cout<<"1.PERSONAL DETAILS OF THE AGENT    2.WORKING DETAILS OF THE AGENT"<<endl;
	         cin>>d;
	         system("cls");  //taking options
	         int s;
	         cout<<"GIVE THE SERIAL NUMBER OF THE AGENT"<<endl;
	         cin>>s;
	         system("cls");
	         if(s>j)    //checking whether your given serial number exist or not
	         cout<<"SORRY! YOUR SERIAL NUMBER DOES NOT EXIST"<<endl<<endl;
	         else
	      {
		     switch(d)
	        {
		     case 1:
	     	    a[s].details_display();
			 case 2:
			 	a[s].access();
	     }
	      }
	      break;
		  }
}
}


// 3-------> called in main for manager

void manager()
{
int q,select;
cout<<"1.TO ACCESS AGENTS DATA 2.TO ACCESS CUSTOMER DATA "<<endl<<endl;
cin>>select;
system("cls");
if(select==1)
{
cout<<"WANT TO ACCESS THE AGENT'S DATA"<<endl;
cout<<"GIVE THE SERIAL NUMBER OF THE AGENT "<<endl;
cin>>q;
system("cls");
m.mgr_access(a[q]);         //accessing any q agent
}
if(select==2)
{
	cout<<"WANT TO ACCESS THE AGENT'S DATA"<<endl;
cout<<"GIVE THE SERIAL NUMBER OF THE AGENT "<<endl;
cin>>q;
system("cls");
m.mgr_customer(cust[q]);
}
}

//    4 ------->  called in main as products

// products of lic

void products()
{int w;
	cout<<"1. Aam Aadmi Bima Yojna"<<endl;
    cout<<"2. Insurance Plan "<<endl;
    cout<<"3. Special Plans "<<endl;
    cout<<"4. Pension Plan "<<endl;
    cout<<"5. Unit Plans "<<endl;
    cout<<"6. Micro Insurance Plans"<<endl;
    cout<<"7. Withdrawn Plans "<<endl;
    cout<<"8. Health Plans "<<endl<<endl;
    cout<<"select any of the above plan"<<endl;
    cin>>w;
    system("cls");
	switch(w)
    {
    	case 1:
    		aaby();  // Aam Aadmi Bima Yojna
    		case2:
    			ip();   // Insurance Plan
    			case 3:
    				sp();     //Special Plans
    				case 4:

    					case 5:
    						up();    //Unit Plans
    						case 6:
    							mip();    //Micro Insurance Plans
    							case 7:
    								wp();   //Withdrawn Plans
    								case 8:
    									hp();   //Health Plans
	}
}

void aaby()  // Aam Aadmi Bima Yojna
{
	cout<<"Features "<<endl<<endl;
cout<<"Ministry of Finance, Government of India has approved the merger of Social Security Schemes"<<endl;
cout<<" viz., Aam Admi Bima Yojana (AABY) and Janashree Bima Yojana (JBY)."<<endl;

cout<<"The merged scheme is renamed Aam Admi Bima Yojana and has come into effect from 01.01.2013."<<endl;

cout<<"A) DETAILS OF THE SCHEME :"<<endl<<endl;
cout<<"1. Eligibility criteria :"<<endl;
cout<<"1. The members should be aged between 18 years completed and 59 years nearer birthday."<<endl;
cout<<"2. The member should normally be the head of the family or one earning member of the below poverty line family (BPL)"<<endl;
cout<<" or marginally above the poverty line under identified vocational group/rural landless household."<<endl;
cout<<"2. Nodal Agency"<<endl;
cout<<"Nodal Agency shall mean the Central Ministerial Department/State Government / Union Territory of India/"<<endl;
cout<<"any other institutionalized arrangement/any registered NGO appointed to administer the Scheme as per the rules."<<endl;
cout<<" In the case of \"Rural Landless Households\", the nodal agency will mean the State Government"<<endl;
cout<<"/Union Territory appointed to administer the Scheme."<<endl<<endl;;
Sleep(5000);
system("cls");
}

void ip()   // Insurance Plan
{
cout<<" 	Endowment Plan :"<<endl<<endl;
cout<<"»      Lic's Jeevan Pragati"<<endl;
cout<<"»      Lic's Jeevan Labh"<<endl;
cout<<"»      Lic's Single Premium Endowment Plan"<<endl;
cout<<"»      Lic's New Endowment Plan"<<endl;
cout<<"»      Lic's New Jeevan Anand"<<endl;
cout<<"»   LIC's Jeevan Rakshak"<<endl<<endl;
cout<<"       Whole Life Plans :"<<endl;
cout<<"»      LICs Jeevan Umang"<<endl;
cout<<"       Money Back Plans"<<endl;
cout<<"»      LIC's Bima Diamond"<<endl;
cout<<"»      LIC's NEW MONEY BACK PLAN - 20 YEARS"<<endl;
cout<<"»      LIC's NEW MONEY BACK PLAN - 25 YEARS"<<endl;
cout<<"»      LIC's NEW BIMA BACHAT"<<endl<<endl;
Sleep(5000);
system("cls");
}

void sp()     //Special Plans
{
cout<<"  Special Plans :"<<endl;
cout<<"  LIC’s Special Plans are not plans but opportunities that knock on your door once in a lifetime."<<endl;
cout<<"  These plans are a perfect blend of insurance, investment and a lifetime of happiness!"<<endl<<endl;
Sleep(5000);
system("cls");
}

void 	pp()   //Pension Plan
{
cout<<"   Pension Plans :"<<endl;
cout<<"   Pension ility during your old age. These policies are most suited for senior citizens "<<endl;
cout<<"   and those planning a secure future, so that you never give up on the best things in life."<<endl;
cout<<"»  Pradhan Mantri Vaya Vandana Yojana"<<endl;
cout<<"»  Jeevan Akshay-VI"<<endl;
cout<<"»  LIC's New Jeevan Nidhi"<<endl<<endl;
Sleep(5000);
system("cls");
}

void 	up()    //Unit Plans
{
cout<<"  Unit Plans :"<<endl<<endl;
cout<<"  Unit plans are investment plans for those who realise the worth of hard-earned money."<<endl;
cout<<"  These plans help you see your savings yield rich benefits and help you save tax even if you don't have consistent income."<<endl;
cout<<"»  LIC's NEW ENDOWMENT PLUS"<<endl<<endl;
Sleep(5000);
system("cls");
}


void mip()    //Micro Insurance Plans
{
cout<<"»  LICs New Jeevan Mangal"<<endl;
cout<<"»  Micro - Insurance Forms"<<endl;
cout<<"»  LIC's Bhagya Lakshmi Plan"<<endl<<endl;
Sleep(5000);
system("cls");
}

void wp()   //Withdrawn Plans
{
	cout<<"   Withdrawn Plans"<<endl;
    cout<<"»  Profit Plus"<<endl;
    cout<<"»  Jeevan Nischay"<<endl;
    cout<<"»  Wealth Plus"<<endl;
    cout<<"»  Jeevan Aastha"<<endl;
    cout<<"»  Money Plus-I"<<endl<<endl;
Sleep(5000);
system("cls");
}

void 	hp()   //Health Plans
{
cout<<"»  Jeevan Saral"<<endl;
cout<<"»  Jeevan Deep"<<endl;
cout<<"»  Jeevan Mangal"<<endl;
cout<<"»  Jeevan Madhur"<<endl;
cout<<"»  Jeevan Mangal"<<endl;
cout<<"»  Amulya Jeevan-I"<<endl;
cout<<"»  LIC's Jeevan Shagun"<<endl;
cout<<"»  Lic's Jeevan Shikhar"<<endl<<endl;
Sleep(5000);
system("cls");
}


//  6------> feedback function called in main

void faq()
{

	cout<<"1. Do I have to pay any charges for e-Services?"<<endl;
	cout<<"We are delighted to offer these facilities free of charge to our valuable customers."<<endl<<endl;
	cout<<"2. Who can avail LIC’s e-Services?"<<endl;
	cout<<"All our valuable customers who have a policy on his/her life or on the life of his/her minor children. "<<endl;
	cout<<"Registration on LIC Portal is mandatory for availing LIC’s e-Services."<<endl<<endl;
	cout<<"3.Can I add policies on the lives of my family members?"<<endl;
	cout<<"You can register policies on the life of your minor children in addition to policies on your own life."<<endl;
	cout<<"As soon as the children become major, separate user-id needs to be created for them to avail"<<endl;
	cout<<"e-services for the policies on their lives."<<endl<<endl;
	cout<<"4.How do I add my new policy number for e-Services?"<<endl;
	cout<<"Login through your user-id and add the new policies through “Enroll policies” option provided"<<endl;
	cout<<"on the Home Page of LIC’s e-Services."<<endl<<endl;
Sleep(5000);
system("cls");
}

//   main function

int main()
{
	int choice;
	cout<<"********************WELCOME*************************"<<endl<<endl;
	cout<<" SELECT ANY OPTION "<<endl;
	cout<<"1. CUSTOMER PORTAL "<<endl;
	cout<<"2. AGENT PORTAL "<<endl;
	cout<<"3. MANAGER PORTAL"<<endl;
	cout<<"4. PRODUCTS"<<endl;
	cout<<"5. FEEDBACK "<<endl;
	cout<<"6. F.A.Q's"<<endl;
	cout<<"7. premium calculator"<<endl;
	cout<<"0. EXIT"<<endl<<endl;
	while(1)
	{
		cout<<"*********YOU ARE AT THE HOME PAGE************"<<endl;
		cout<<"PLEASE SELECT ANY OPTION"<<endl;
		cin>>choice;
		system("cls");
    if(choice==1)
		{
		cstmr();
	    }
    if(choice== 2)
		{
		agt();
		}
	if(choice==3)
	    {
	    	cout<<"THE NUMBER OF WORKING AGENTS ARE "<<j<<endl;
	    	cout<<"THE NUMBER OF CUSTOMERS ARE "<<c<<endl<<endl;
	    	manager();
		}

	if(choice==4)
		{
	    products();
		}
	if(choice==5)
	    {
	    	fdb.give();
		}
	if(choice==6)
	    {
	     faq();
		}
	if(choice==7)
		{
			cout<<"go to the given link"<<endl;
		   cout<<"	file:///C:/Users/ITLAB-2/Desktop/premium.html"<<endl;
		   Sleep(2000);
system("cls");
		}
	if(choice==0)
	{
	    cout<<"******************THANK U************************************** "<<endl<<endl;
	   break;
    }
    }


return 0;
}


