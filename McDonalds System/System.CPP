#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<iomanip.h>
#include<graphics.h>
class mcdonalds
{
int tkno,y,z,u,a,b,s,ph,g,fc,qt,c,d,e,qty,f;
float gtot,cost;
char name[100];
char add[100];
char meal[80];
char price[80];
void ordermeal()
{
if(c==1)
{
strcpy(meal,"HAPPY MEAL");
}
else if(c==2)
{
strcpy(meal,"COMBO MEAL 1-VEGETARIAN");
}
else if(c==3)
{
strcpy(meal,"COMBO MEAL 2-NON VEGETARIAN");
}
else
{
strcpy(meal,"HAPPY MEAL");
}
}
float calprice()
{
gtot=(cost*qt+20+9);
return gtot;
}
public:
void intro();
void about();
void mealo();
void showmeal();
void vegorder();
void nonorder();
void vegshoworder();
void nonshoworder();
void homedelivery();
void showhome();
void cancel();
void showcancel();
};
void mcdonalds::intro()
{
  gotoxy(2, 50);
       textcolor(RED+BLINK);
       textbackground(YELLOW);

 cprintf("                               INTRODUCTION\n");
 cprintf("\r~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 gotoxy(2, 50);
   textcolor(RED);
 cprintf("           \r\n          McDonalds Corporation(NYSE:MCD) is the world's largest");
cout<<endl;
 cprintf("         chain of hamburger fast food restaurant,serving around");
cout<<endl;
 cprintf("         68 million customers daily in 119 countries.The company");
cout<<endl;
 cprintf("         has headquarter in United States of America.Mcdonalds ");
cout<<endl;
 cprintf("         restaurant chain began in 1940 as a barbecue restaurant");
cout<<endl;
 cprintf("         operated by Richard & Maurice McDonald. In 1948 they   ");
cout<<endl;
 cprintf("          organized their bussiness as a hamburger stand using   ");
cout<<endl;
 cprintf("\r                production line principles.");
 cprintf("\n\n");
 cprintf("\r______________________________________________________________________________________________________");
 cprintf("__________________________________________________________");
 cprintf("\r\n");
// cprintf("____________________________________________________________________\n");
 //cprintf("____________________________________________________________________\n");
  cprintf("\r\n");
cout<<"Press any numeric key to return to the main menu\n";
cin>>a;
clrscr();
}
void mcdonalds::about()
{
cprintf("\n\rThis software is mainly created for the purpose of project\n");
cout<<"\nwork in the school for CBSE Board CLASS- XII examination\n";
cout<<"\n";
cout<<"\r____________________________________________________________________";
cout<<"____________________________________________________________________\n";
cout<<endl;
cout<<"***************************************************************\n";
cout<<endl;
cout<<"               COMPUTER SCIENCE PROJECT                \n";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"               MADE BY- ANJALI PANDEY & SURYANSH SRIVASTAVA		\n";
cout<<endl;
cout<<"               CLASS- XII                              \n";
cout<<endl;
cout<<"               TOPIC- MC-DONALDS                        \n";
cout<<endl;
cout<<"               ROLL NO.-                               \n";
cout<<endl;
cout<<endl;
cout<<"***************************************************************\n";
cout<<endl;
cout<<endl;
cout<<"____________________________________________________________________\n";
cout<<"____________________________________________________________________\n";
cout<<"\n\n\n\n\nPress any numeric key to return to the main menu\n";
cin>>b;
clrscr();
}
void mcdonalds::mealo()
{
cout<<"WELCOME TO MCDONALDS\n";
cout<<"\n\n\n\n";
cout<<"Which meal you will prefer\n\n\n";
cout<<"MEAL CODE         MEAL                            PRICE \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"1234          HAPPY MEAL (INCLUDE Burger+               \n";
cout<<"              Mazaa/Coke bottle+Toy)              300   \n";
cout<<endl;
cout<<"4567          COMBO MEAL 1(INCLUDING VEG/                \n";
cout<<"              NON-VEG CUSINE+WRAP[VEG/                   \n";
cout<<"              NON-VEG]+DESSERT+Cold Drink)        450    \n";
cout<<endl;
cout<<"8910          COMBO MEAL 2(INCUDING VEG+                 \n";
cout<<"              NON VEG CUSINIE+WRAPS                      \n";
cout<<"             +DESSERT+Cold Drink+Toy)             500    \n";
cout<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"\n\n\n";
cout<<"Enter the meal code\n";
cin>>c;
cout<<"Enter the quantity\n";
cin>>qt;
{
if(c==1234)
{cost=300;}
else if (c==4567)
{cost=450;}
else if (c==8910)
{cost=500;}
}
ordermeal();
calprice();
cout<<"\n\n\n";
cout<<"PRESS ANY NUMERIC KEY TO CONTINUE\n";
cin>>d;
clrscr();
}
void mcdonalds::showmeal()
{
cout<<"----------------------------------------------------------------------\n";
cout<<endl;
cout<<setw(24)<<"MCDONALDS\n";
cout<<"  1st FLOOR,ATLANTIS MALL\n";
cout<<"  M.G.MARG CIVIL LINES   \n";
cout<<setw(23)<<"ALLAHABAD-211001\n";
cout<<"    TELEPHONE NO. 0532-234567\n";
cout<<endl;
cout<<"______________________________________________________________________\n";
cout<<endl;
cout<<"ORDER NO: K00071363                                      \n";
cout<<endl;
cout<<"`````````````````````````````````````````````````````````````````````\n";
cout<<"BILL NO             B00071204      \n";
cout<<"DATE & TIME         21/10/2013   1:20 PM \n";
cout<<"CASHIER: JOSEPH                      \n";
cout<<"***************************************************\n";
cout<<endl;
cout<<endl;
cout<<"TOKEN NO:-\t\t 8715\n";
cout<<"Meal code\t\t\t\t\t"<<c;
cout<<"\nMeal\t\t\t\t\t\t";puts(meal);
cout<<"Price\t\t\t\t\t\t"<<cost;
cout<<"\nQuantity\t\t\t\t\t"<<qt;
cout<<"\nService tax\t\t\t\t\t"<<"20\n";
cout<<"Value added tax\t\t\t\t\t"<<"9\n";
cout<<endl;
cout<<"-------------------------------------------------------------\n";
cout<<"Grand total\t\t\t\t\t"<<gtot;
cout<<endl;
cout<<"\n\n\n\n\n";
cout<<"\t!!!!!!!THANK YOU, VISIT AGAIN!!!!!!!\n";
cout<<"\n\n\n\n\n";
cout<<"PRESS ANY NUMERIC KEY TO RETURN TO THE MAIN MENU\n\t\t";
cin>>y;
clrscr();
}
void mcdonalds::vegorder()
{
cout<<"\n\n\n\n\n\n\n";
cout<<"WELCOME TO MCDONALDS\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"\n\n\n\n\n";
cout<<"\t\tVEGETARIAN MENU\n";
cout<<"--------------------------------------------------------------\n";
cout<<"Food code       Food                           Price\n";
cout<<"1078          hamburger                         90\n";
cout<<"2345          cheese burger                     120\n";
cout<<"3812          double burger veggie spice        105 \n";
cout<<"4690          french fries                      85\n";
cout<<"5345          spghattie                         90 \n";
cout<<"6007          chilly toast and french fries     45\n";
cout<<"\n\n\n";
cout<<"Enter your food code\n";
cin>>fc;
cout<<"Enter the quantity\n";
cin>>qt;
{
if(c==1078)
{cost=90;}
else if (c==2345)
{cost=120;}
else if (c==3812)
{cost=305;}
}
calprice();
cout<<"\n\n\n\n";
cout<<"PRESS ANY NUMERIC KEY TO CONTINUE\n";
cin>>e;
clrscr();
}
void mcdonalds::nonorder()
{
cout<<"\n\n\n\n\n";
cout<<"\t\tWELCOME TO MCDONALDS\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"\n\n\n\n";
cout<<"NON-VEGETARIAN MENU\n";
cout<<"---------------------------------------------------------------\n";
cout<<"\n\n\n\n\n";
cout<<"Food code         Food                          Price\n";
cout<<"2309              chicken tikki                  45\n";
cout<<"3456              mcgrill chicken                55\n";
cout<<"9876              cheese chicken burger          87\n";
cout<<"6675              mcaloo chic roll               95\n";
cout<<"9041              chicken nuggets with dip       105\n";
cout<<"\n\n\n\n\n\n";
cout<<"Enter your food code\n";
cin>>fc;
cout<<"Enter the quantity\n";
cin>>qt;
{
if(fc==2309)
{cost=45;}
else if (fc==3456)
{cost=55;}
else if (fc==9876)
{cost=87;}
else if (fc==3456)
{cost=55;}
else if (fc==6675)
{cost=95;}
else if (fc==9041)
{cost=105;}
}
calprice();
cout<<"\n\n\n\n";
cout<<"PRESS ANY NUMERIC KEY TO CONTINUE\n";
cin>>f;
clrscr();
}
void mcdonalds::vegshoworder()
{
cout<<"----------------------------------------------------------------------\n";
cout<<endl;
cout<<setw(24)<<"MCDONALDS\n";
cout<<"  1st FLOOR,ATLANTIS MALL\n";
cout<<"  M.G.MARG CIVIL LINES   \n";
cout<<setw(23)<<"ALLAHABAD-211001\n";
cout<<"    TELEPHONE NO. 0532-234567\n";
cout<<endl;
cout<<"______________________________________________________________________\n";
cout<<endl;
cout<<"ORDER NO: K00071363                                      \n";
cout<<endl;
cout<<"`````````````````````````````````````````````````````````````````````\n";
cout<<"BILL NO             B00071204      \n";
cout<<"DATE & TIME         21/10/2014   1:20 PM \n";
cout<<"CASHIER: JOSEPH                      \n";
cout<<"***************************************************\n";
cout<<endl;
cout<<"TOKEN NO:-\t\t 9862\n";
cout<<"Food code\n";
cout<<fc;
if(fc==1078)
{
cout<<"\n\nFood\nHamburger\n";
}
else if(fc==2345)
{
cout<<"\n\nFood\nCheese burger\n";
}
else if(fc==3812)
{
cout<<"\n\nFood\nDouble burger veggie spice\n";
}
else if(fc==4690)
{
cout<<"\n\nFood\nFrench garlic fries\n";
}
else if(fc==5345)
{
cout<<"\n\nFood\nSpghattie\n";
}
else if(fc==6007)
{
cout<<"\n\nFood\nChilly garlic bread\n";
}
else
{
cout<<"\n\nFood\nCheese veggie spice burger\n";
}
cout<<"\nQuantity\n";
cout<<qt;
cout<<"\n\nService tax\n20\n";
cout<<"\nVat\n9\n";
cout<<"\nGrand total\n"<<gtot;
cout<<"\n\n";
cout<<"\t!!!!!!!!THANK YOU,VISIT AGAIN!!!!!!!!!!\n";
cout<<"\n\n\n";
cout<<"PRESS ANY NUMERIC KEY TO RETURN TO THE MAIN MENU\n";
cin>>z;
clrscr();
}
void mcdonalds::nonshoworder()
{
cout<<"----------------------------------------------------------------------\n";
cout<<endl;
cout<<setw(24)<<"MCDONALDS\n";
cout<<"  1st FLOOR,ATLANTIS MALL\n";
cout<<"  M.G.MARG CIVIL LINES   \n";
cout<<setw(23)<<"ALLAHABAD-211001\n";
cout<<"    TELEPHONE NO. 0532-234567\n";
cout<<endl;
cout<<"______________________________________________________________________\n";
cout<<endl;
cout<<"ORDER NO: K00071363                                      \n";
cout<<endl;
cout<<"`````````````````````````````````````````````````````````````````````\n";
cout<<"BILL NO             B00071204      \n";
cout<<"DATE & TIME         21/10/2013   1:20 PM \n";
cout<<"CASHIER: JOSEPH                      \n";
cout<<"***************************************************\n";
cout<<endl;
cout<<"TOKEN NO:-\t\t\t\t  8003\n";
cout<<"Food code\n";
cout<<fc;
if(fc==2309)
cout<<"\n\nFood\nChicken tikki\n";
else if(fc==3456)
cout<<"\n\nFood\nMcgrill chicken\n";
else if(fc==9876)
cout<<"\n\nFood\nCheese chicken burger\n";
else if(fc==6675)
cout<<"\n\nFood\nMcaloo chic roll\n";
else if(fc==9041)
cout<<"\n\nFood\nChicken nuggets with dip\n";
cout<<"\nQuantity\n";
cout<<qt;
cout<<"\n\nService tax\n20\n";
cout<<"\nVat\n9\n";
cout<<"\nGrand total\n"<<gtot;
cout<<"\n\n\n";
cout<<"!!!!!!THANK YOU,VISIT AGAIN!!!!!!!!!\n";
cout<<"\n\n\n";
cout<<"PRESS ANY NUMERIC KEY TO RETURN TO THE MAIN MENU\n";
cin>>u;
clrscr();
}
void mcdonalds::homedelivery()
{
cout<<"\n\n\n\n\n\n\n\n";
cout<<"\tEnter your name\t";
gets(name);
cout<<"\n\tEnter your address\t";
gets(add);
cout<<"\n\tEnter your phone no.\t";
cin>>ph;
cout<<"\n\tPress any numeric key to continue\n";
cin>>g;
clrscr();
}
void mcdonalds::showhome()
{
cout<<"\n\n\n\n\n\n\n";
cout<<"\tHOME DELIVERY DETAILS\n";
cout<<"----------------------------------------\n";
cout<<"NAME-\t\n";
puts(name);
cout<<"\nADDRESS-\t\n";
puts(add);
cout<<"\nCONTACT NO-\t\n";
cout<<ph;
cout<<"\n\nYOUR ORDER HAS BEEN PLACED, AND SOON WILL BE DELIVERED\n";
cout<<"\n\n\n\n\n\n\nPRESS ANY NUMERIC KEY TO RETURN TO THE MAIN MENU\n";
cin>>s;
clrscr();
}
void mcdonalds::cancel()
{
cout<<"\n\n\n\n\n\n\n";
cout<<"\t\tCANCELLATION OF ORDER\n";
cout<<"\n\n\n\n";
cout<<"Enter your token no\n";
cin>>tkno;
clrscr();
}
void mcdonalds::showcancel()
{
cout<<"\tTOKEN NO.:-";
cout<<tkno;
}
void main()
{
int k,a,q,ch,h,s,w,f;
clrscr();
cout<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\n";
cout<<"\tM          M                   D  D  D  D            \n";
cout<<"\tM M      M M                   D          D          \n";
cout<<"\tM  M    M  M     C C C C C     D           D         \n";
cout<<"\tM   M  M   M    C         C    D            D        \n";
cout<<"\tM     M    M    C              D            D        \n";
cout<<"\tM          M    C              D           D         \n";
cout<<"\tM          M    C              D          D          \n";
cout<<"\tM          M    C         C    D         D           \n";
cout<<"\tM          M     C C C C C     D D D D D             \n";
cout<<"\n\n\n\n\n\n";
cout<<"\t\t         McDonalds                       \n";
cout<<endl;
cout<<"\t\t   I'm Lovin' it!!!!!!!!!!!            \n";
cout<<endl;
cout<<"\n\n\n\n\n\n";
cout<<"\tPress any numeric key to go to main menu\n\t\t\t";
cin>>w;
clrscr();
p:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"*************************************************************\n";
cout<<"\n\t\t  WELCOME TO MCDONALDS\n";
cout<<"\n\n\n";
cout<<"\t\tA FAMILY RESTAURANT\n";
cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"\n\n\n\n\n\n\n\n";
cout<<"\t1.Inroduction\n";
cout<<"\t2.About\n";
cout<<"\t3.Place your order\n";
cout<<"\t4.Exit from the program\n";
cout<<"\n\n\n\n\n\n";
cout<<"\t\tEnter your choice\n\t\t\t";
cin>>ch;
clrscr();
switch(ch)
{
case 1:
{
mcdonalds m;
m.intro();
goto p;
}
break;
case 2:
{
mcdonalds m;
m.about();
goto p;
}
break;
case 3:
{
j:
cout<<"\n\n\n\n\n\n";
cout<<"!!!!!!!!!!!!PLACING THE ORDER!!!!!!!!!!!!!!!!!!\n";
cout<<"\n\n\n\n\n\n";
cout<<"\t1.Select your Meal directly\n";
cout<<"\t2.Select your normal menu-Vegetarian\n";
cout<<"\t3.Select your normal menu-Non-Vegetarian\n";
cout<<"\t4.Return to the main menu\n";
cout<<"\t5.Exit from the program\n";
cout<<"\n\n\n\n\n\n";
cout<<"Enter your choice\n";
cin>>h;
clrscr();
mcdonalds m;
if(h==1)
{
m.mealo();
clrscr();
a:
cout<<"\n\n\n\n\n\n\n\n\n\n";
cout<<"______________________________________________________________________\n";
cout<<"----------------------------------------------------------------------\n";
cout<<"1.GENERATE THE BILL\n";
cout<<"2.CANCEL THE ORDER\n";
cout<<"3.REORDER\n";
cout<<"4.HOME DELIVERY\n";
cout<<"\n\n\n\n\n\n";
cout<<"Enter your choice\n";
cin>>k;
clrscr();
if(k==1)
{
m.showmeal();}
else if(k==2)
{
mcdonalds m;
m.cancel();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\tYOUR ORDER IS BEING CANCELLED\n";
cout<<"**********************************************************\n\n\n";
m.showcancel();
cout<<"\n\tORDER NO. 6784\n";
cout<<"\tDATE- 16/11/2013\n";
cout<<"\tTIME- 1:30P.M.\n";
cout<<"**********************************************************\n\n";
cout<<"\n\n\nTHNAX FOR USING OUR SERVICE\n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n";
cout<<"**********************************************************\n\n\n\n\n\n";
cout<<"Press any numeric key to continue\n";
cin>>q;
clrscr();
goto j;
}
else if(k==3)
{
goto j;
}
else if(k==4)
{
mcdonalds m;
m.homedelivery();
m.showhome();
goto j;
}
else
{
goto a;
}
}
else if(h==2)
{
m.vegorder();
clrscr();
b:
cout<<"\n\n\n\n\n\n\n\n\n\n";
cout<<"______________________________________________________________________\n";
cout<<"----------------------------------------------------------------------\n";
cout<<"1.GENERATE THE BILL\n";
cout<<"2.CANCEL THE ORDER\n";
cout<<"3.REORDER\n";
cout<<"4.HOME DELIVERY\n";
cout<<"\n\n\n\n\n\n";
cout<<"Enter your choice\n";
cin>>k;
clrscr();
if(k==1)
{
m.vegshoworder();
}
else if(k==2)
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\tYOUR ORDER IS BEING CANCELLED\n";
cout<<"**********************************************************\n\n\n";
cout<<"\tORDER NO. 6784\n";
cout<<"\tDATE- 16/11/2013\n";
cout<<"\tTIME- 1:30P.M.\n";
cout<<"**********************************************************\n\n";
cout<<"\n\n\nTHNAX FOR USING OUR SERVICE\n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n";
cout<<"**********************************************************\n\n\n\n\n\n";
cout<<"Press any numeric key to continue\n";
cin>>q;
clrscr();
goto j;
}
else if(k==3)
{
goto j;
}
else if(k==4)
{
mcdonalds m;
m.homedelivery();
m.showhome();
goto j;
}
else
{
goto b;
}
}
else if(h==3)
{
m.nonorder();
clrscr();
c:
cout<<"\n\n\n\n\n\n\n\n\n\n";
cout<<"______________________________________________________________________\n";
cout<<"----------------------------------------------------------------------\n";
cout<<"1.GENERATE THE BILL\n";
cout<<"2.CANCEL THE ORDER\n";
cout<<"3.REORDER\n";
cout<<"4.HOME DELIVERY\n";
cout<<"\n\n\n\n\n\n";
cout<<"Enter your choice\n";
cin>>k;
clrscr();
if(k==1)
{
m.nonshoworder();
}
else if(k==2)
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"**********************************************************\n\n\n\n\n";
cout<<"\t\tYOUR ORDER IS BEING CANCELLED\n\n\n\n";
cout<<"**********************************************************\n\n\n";
cout<<"\tORDER NO. 6784\n";
cout<<"\tDATE- 16/11/2013\n";
cout<<"\tTIME- 1:30P.M.\n";
cout<<"**********************************************************\n\n";
cout<<"\n\n\nTHNAX FOR USING OUR SERVICE\n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n";
cout<<"**********************************************************\n\n\n\n\n\n";
cout<<"Press any numeric key to return to the menu\n";
cin>>q;
clrscr();
goto j;
}
else if(k==3)
{
goto j;
}
else if(k==4)
{
mcdonalds m;
m.homedelivery();
m.showhome();
goto j;
}
else
{
goto c;
}
}
else if(h==4)
{
goto p;
}
else if(h==5)
{
exit(0);
}
else
{
cout<<"WRONG CHOICE\n";
cout<<"\n________________________________________________________________\n";
cout<<"\n\n\n\n\n\n\n\n";
cout<<"PRESS ANY NUMERIC KEY TO RETURN TO THE MAIN MENU\n";
cin>>f;
clrscr();
goto p;
}
}
break;
case 4:
{
exit(0);
}
break;
default:
{
cout<<"WRONG CHOICE\n";
cout<<"\n\n\n\n\n\n\n\n";
cout<<"Press any numeric key to return to the main menu\n";
cin>>s;
clrscr();
goto p;
}
}
getch();
}