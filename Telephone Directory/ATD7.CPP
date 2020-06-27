#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void welcome();
void welcome()
{
textbackground(0);
textcolor(4+BLINK);
cout<<"\t\t\t";
cprintf("ALLAHABAD TELEPHONE DIRECTORY");
cout<<"\n";
}
class directory
{
public:
char name[25];
long double tp;
void selection();
void Contacts();
void important();
void Add();
void display();
};
void STD();
void STD()
{
textbackground(0);
textcolor(4);
cprintf("Important STD Contacts");
cout<<"\n";
cprintf("**********************");
cout<<"\n";
textbackground(0);
textcolor(2);
cprintf(" City");
cout<<"                                   ";
cprintf("Code");
cout<<"\n";
cprintf(" Agra");
cout<<"                                   ";
cprintf("0562");
cout<<"\n";
cprintf(" Allahabad");
cout<<"                              ";
cprintf("0532");
cout<<"\n";
cprintf(" Amritsar");
cout<<"                               ";
cprintf("0183") ;
cout<<"\n";
cprintf(" Bangalore");
cout<<"                              ";
cprintf("080");
cout<<"\n";
cprintf(" Bhopal");
cout<<"                                 ";
cprintf("0755");
cout<<"\n";
cprintf(" Calcutta");
cout<<"                               ";
cprintf("033");
cout<<"\n";
cprintf(" Chandigarh");
cout<<"                             ";
cprintf("0172");
cout<<"\n";
cprintf(" Delhi");
cout<<"                                  ";
cprintf("011");
cout<<"\n";
cprintf(" Hyderabad");
cout<<"                              ";
cprintf("040");
cout<<"\n";
cprintf(" Jaipur");
cout<<"                                 ";
cprintf("0141");
cout<<"\n";
cprintf(" Jammu");
cout<<"                                  ";
cprintf("0191");
cout<<"\n";
cprintf(" Kanpur");
cout<<"                                 ";
cprintf("0512");
cout<<"\n";
cprintf(" Lucknow");
cout<<"                                ";
cprintf("0522");
cout<<"\n";
cprintf(" Mumbai");
cout<<"                                 ";
cprintf("022");
cout<<"\n";
cprintf(" Nagpur");
cout<<"                                 ";
cprintf("0712");
cout<<"\n";
cprintf(" Nainital");
cout<<"                               ";
cprintf("05942");
cout<<"\n";
cprintf(" Patna");
cout<<"                                  ";
cprintf("0612");
cout<<"\n";
cprintf(" Pune");
cout<<"                                   ";
cprintf("0202");
cout<<"\n";
cprintf(" Shimla");
cout<<"                                 ";
cprintf("0177");
cout<<"\n";
cprintf(" Srinagar");
cout<<"                               ";
cprintf("0194");
cout<<"\n";
cprintf(" Ujjain");
cout<<"                                 ";
cprintf("0734");
cout<<"\n";
cprintf(" Varanasi");
cout<<"                               ";
cprintf("0542");
cout<<"\n";
}
void ISD();
void ISD()
{
textbackground(0);
textcolor(2);
cprintf("Important ISD Contacts");
cout<<"\n";
cprintf("**********************");
cout<<"\n";
textbackground(0);
textcolor(4);
cprintf(" Australia");
cout<<"                           ";
cprintf("0061");
cout<<"\n";
cprintf(" Bangladesh");
cout<<"                          ";
cprintf("00880");
cout<<"\n";
cprintf(" China");
cout<<"                               ";
cprintf("86");
cout<<"\n";
cprintf(" Egypt");
cout<<"                               ";
cprintf("0020");
cout<<"\n";
cprintf(" France");
cout<<"                              ";
cprintf("0033");
cout<<"\n";
cprintf(" Germany");
cout<<"                             ";
cprintf("0049");
cout<<"\n";
cprintf(" Greece");
cout<<"                              ";
cprintf("0030");
cout<<"\n";
cprintf(" Hong Kong");
cout<<"                           ";
cprintf("00852");
cout<<"\n";
cprintf(" Italy");
cout<<"                               ";
cprintf("0039");
cout<<"\n";
cprintf(" Malaysia");
cout<<"                            ";
cprintf("0060");
cout<<"\n";
cprintf(" Maldives");
cout<<"                            ";
cprintf("00960");
cout<<"\n";
cprintf(" Nepal");
cout<<"                               ";
cprintf("00977");
cout<<"\n";
cprintf(" New Zealand");
cout<<"                         ";
cprintf("0064");
cout<<"\n";
cprintf(" Pakistan");
cout<<"                            ";
cprintf("0092");
cout<<"\n";
cprintf(" Singapore");
cout<<"                           ";
cprintf("0065");
cout<<"\n";
cprintf(" South Africa");
cout<<"                        ";
cprintf("0027");
cout<<"\n";
cprintf(" Sri Lanka");
cout<<"                           ";
cprintf("0094");
cout<<"\n";
cprintf(" Switzerland");
cout<<"                         ";
cprintf("0041");
cout<<"\n";
cprintf(" Thailand");
cout<<"                            ";
cprintf("0066");
cout<<"\n";
cprintf(" U.A.E.");
cout<<"                              ";
cprintf("00971");
cout<<"\n";
cprintf(" United Kingdom");
cout<<"                      ";
cprintf("44");
cout<<"\n";
cprintf(" United States of America");
cout<<"            ";
cprintf("001");
cout<<"\n";
cprintf(" Zimbabwe");
cout<<"                            ";
cprintf("00263");
cout<<"\n";
}
void directory::Contacts()
{
textbackground(0);
textcolor(3);
char let;
cout<<"\t\t* A  ----  B  ----  C  ----  D  ----  G *\n\t\t* H  ----  J  ----  K  ----  L  ----  M *\n\t\t* N  ----  P  ----  R  ----  S  ----  T *";
cout<<"\n\t\t\t";
cprintf("Choose the area:");
cout<<"\n";
cout<<"\t\t\t----------------\n";
cin>>let;
switch(let)
{
char ar[50];
case'A':{
textcolor(3);
cout<<"\t\t\t";
cprintf("ALLENGANJ");cout<<"\n\t\t\t";cprintf("ASHOK NAGAR");cout<<"\n\t\t\t";cprintf("ALOPIBAGH");
cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"ALLENGANJ")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(26)<<"ARUN KUMAR\t\t"<<"2026783"<<"\t\t"<<"kumararun@gmail.com"<<"\n";
cout<<setw(30)<<"VINEETA KUMARI\t\t"<<"2653658"<<"\t\t"<<"vineeta2020@gmail.com"<<"\n";
cout<<setw(28)<<"VINAY MISHRA\t\t"<<"2564862"<<"\t\t"<<"vinaymishra@yahoo.com"<<"\n";
cout<<setw(28)<<"SANJAY SINGH\t\t"<<"2826243"<<"\t\t"<<"sanjaysingh11@gmail.com"<<"\n";
cout<<setw(33)<<"PRADEEP KESARWANI\t\t"<<"2445673"<<"\t\t"<<"33/29 A, Allenganj"<<"\n";}
else if(strcmp (ar,"ASHOK NAGAR")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"ROHAN GUPTA\t\t"<<"2501312"<<"\t\t"<<"rohangupta@yahoo.com"<<"\n";
cout<<setw(22)<<"MOHAN\t\t\t"<<"2965932"<<"\t\t"<<"mohan1989@gmail.com"<<"\n";
cout<<setw(29)<<"MANJEET SINGH\t\t"<<"2062783"<<"\t\t"<<"55/65 B Ashok Nagar"<<"\n";
cout<<setw(28)<<"HARDIK GUPTA\t\t"<<"2026863"<<"\t\t"<<"hardikgupta@hotmail.com"<<"\n";
cout<<setw(26)<<"ARYAN RAI\t\t\t"<<"2699913"<<"\t\t"<<"099raiaryan@gmail.com"<<"\n";}
else if(strcmp (ar,"ALOPIBAGH")==0)
{textcolor(5);
cout<<"\t";
cprintf("    Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(26)<<"RIYA KUMARI\t\t\t"<<"2821223"<<"\t\t"<<"riyakumari@gmail.com"<<"\n";
cout<<setw(26)<<"SAURAV KUMAR\t\t"<<"2085463"<<"\t\t"<<"krsaurav@gmail.com"<<"\n";
cout<<setw(32)<<"CHITRANSH BANERJEE\t\t"<<"2362753"<<"\t\t"<<"21/33 D Alopibagh"<<"\n";
cout<<setw(24)<<"ABHIMANYU\t\t\t"<<"3562684"<<"\t\t"<<"abhimanyu99@hotmail.com"<<"\n";
cout<<setw(28)<<"ABHINAV MISHRA\t\t"<<"2311327"<<"\t\t"<<"abhinavmishra@gmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'B':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("BENIGANJ");cout<<"\n\t\t\t";cprintf("BAKSHI BANDH");cout<<"\n\t\t\t";cprintf("BAHADURGANJ");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"BENIGANJ")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(30)<<"PIYUSH VAISHYA\t\t"<<"2381173"<<"\t\t"<<"piyushvaishya@gmail.com"<<"\n";
cout<<setw(27)<<"VARUN KUMAR\t\t"<<"2897532"<<"\t\t"<<"55varunkumar@gmail.com"<<"\n";
cout<<setw(29)<<"RANVEER SINGH\t\t"<<"2036589"<<"\t\t"<<"ranveersingh@yahoo.com"<<"\n";
cout<<setw(29)<<"DALBEER SINGH\t\t"<<"3532642"<<"\t\t"<<"dalbeer@gmail.com"<<"\n";
cout<<setw(26)<<"C.L. GUPTA\t\t"<<"2402118"<<"\t\t"<<"22/56 A Beniganj"<<"\n";}
else if(strcmp (ar,"BAKSHI BANDH")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(30)<<"AKHILESH YADAV\t\t"<<"2370701"<<"\t\t"<<"45/85C Bakshi Bandh"<<"\n";
cout<<setw(28)<<"SUNIL DINKAR\t\t"<<"2036598"<<"\t\t"<<"sunildinkar@hotamil.com"<<"\n";
cout<<setw(28)<<"YUVRAJ SINGH\t\t"<<"2083345"<<"\t\t"<<"yuvrajsingh@gmail.com"<<"\n";
cout<<setw(27)<<"JIGAR DUBEY\t\t"<<"3872631"<<"\t\t"<<"jigardubey@yahoo.com"<<"\n";
cout<<setw(25)<<"U.R. DAS\t\t\t"<<"2162891"<<"\t\t"<<"das0119@gmail.com"<<"\n";}
else if(strcmp (ar,"BAHADURGANJ")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(29)<<"PANKAJ ADVANI\t\t"<<"2831102"<<"\t\t"<<"pankajadv898@gmail.com"<<"\n";
cout<<setw(28)<<"DILIP MISHRA\t\t"<<"2927783"<<"\t\t"<<"mishradilip1@yahoo.com"<<"\n";
cout<<setw(27)<<"RANI MISHRA\t\t"<<"2826584"<<"\t\t"<<"ranimishra@gmail.com"<<"\n";
cout<<setw(28)<<"SHAZAM AHMAD\t\t"<<"2626686"<<"\t\t"<<"ahamdshazam@yahoo.com"<<"\n";
cout<<setw(29)<<"SUSHMITA SULE\t\t"<<"3224071"<<"\t\t"<<"ssushmita19@gmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'C':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("CHAK NIRATUL");cout<<"\n\t\t\t";cprintf("CHAKDUNDI");cout<<"\n\t\t\t";cprintf("CHAK RAGHUNATH");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"CHAK NIRATUL")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(28)<<"MUKESH TOMAR\t\t"<<"3889123"<<"\t\t"<<"tomarmukesh@gmail.com"<<"\n";
cout<<setw(30)<<"MANISH AGRAWAL\t\t"<<"3025784"<<"\t\t"<<"9manishagrwl@gmail.com"<<"\n";
cout<<setw(33)<<"SHAILENDRA AGRAWAL\t"<<"2028376"<<"\t\t"<<"7/54 B Chak Niratul"<<"\n";
cout<<setw(27)<<"SANJAY GAUR\t\t"<<"2067985"<<"\t\t"<<"sanjaygaur@hotmail.com"<<"\n";
cout<<setw(32)<<"HARISH GOVARDHAN\t\t"<<"2637893"<<"\t\t"<<"13/42 A Chak Niratul"<<"\n";}
else if(strcmp (ar,"CHAKDUNDI")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(29)<<"MANISH TIWARI\t\t"<<"2667785"<<"\t\t"<<"manishtiwari@yahoo.com"<<"\n";
cout<<setw(30)<<"NEERAJ DWIVEDI\t\t"<<"3056885"<<"\t\t"<<"neeraj990@hotmail.com"<<"\n";
cout<<setw(29)<<"SANJAY MISHRA\t\t"<<"3820867"<<"\t\t"<<"mishrasanjay@gmail.com"<<"\n";
cout<<setw(30)<<"MANISHA KUMARI\t\t"<<"2780632"<<"\t\t"<<"manishakumari@gmail.com"<<"\n";
cout<<setw(26)<<"RAM DUBEY\t\t\t"<<"2056782"<<"\t\t"<<"ramdubey@hotmail.com"<<"\n";}
else if(strcmp (ar,"CHAK RAGHUNATH")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"KIRTI SUMAN\t\t"<<"2269786"<<"\t\t"<<"kirtisuman@gmail.com"<<"\n";
cout<<setw(30)<<"ASHA CHOUDHARY\t\t"<<"2328657"<<"\t\t"<<"ashachoudhary@yahoo.com"<<"\n";
cout<<setw(26)<<"AJHAR ALI\t\t\t"<<"2026798"<<"\t\t"<<"ajharali@gmail.com"<<"\n";
cout<<setw(24)<<"WILLIAM\t\t\t"<<"3278355"<<"\t\t"<<"556william@gmail.com"<<"\n";
cout<<setw(27)<<"ABHAY SINGH\t\t"<<"2432872"<<"\t\t"<<"29/45A Chak Raghunath"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'D':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("DARAGANJ");cout<<"\n\t\t\t";cprintf("DARIYABAD 1");cout<<"\n\t\t\t";cprintf("DARIYABAD 2");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"DARAGANJ")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"S.N. THAKUR\t\t"<<"2467898"<<"\t\t"<<"31/2D Daraganj"<<"\n";
cout<<setw(26)<<"ASHOK RAI\t\t\t"<<"2898653"<<"\t\t"<<"ashokrai@hotmail.com"<<"\n";
cout<<setw(27)<<"ROBIN SIMGH\t\t"<<"3267835"<<"\t\t"<<"robinsingh@yahoo.com"<<"\n";
cout<<setw(29)<<"SHEELA MISHRA\t\t"<<"3783456"<<"\t\t"<<"sheelamishra@gmail.com"<<"\n";
cout<<setw(26)<<"B.L. YADAV\t\t"<<"2710231"<<"\t\t"<<"blyadav25@gmail.com"<<"\n";}
else if(strcmp (ar,"DARIYABAD 1")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(28)<<"B.B. JAISWAL\t\t"<<"2480701"<<"\t\t"<<"65/3B Dariyabad-1"<<"\n";
cout<<setw(27)<<"RAVI SONKAR\t\t"<<"3678345"<<"\t\t"<<"ravisonkar@gmail.com"<<"\n";
cout<<setw(28)<<"ARJUN KAPOOR\t\t"<<"2678356"<<"\t\t"<<"kapoorarjun@gmail.com"<<"\n";
cout<<setw(29)<<"PRIYANKA SONI\t\t"<<"3260783"<<"\t\t"<<"priyankasoni@yahoo.com"<<"\n";
cout<<setw(29)<<"K.K. KHUSWAHA\t\t"<<"2201225"<<"\t\t"<<"kkkuswaha@gmail.com"<<"\n";}
else if(strcmp (ar,"DARIYABAD 2")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(30)<<"AANCHAL TIWARI\t\t"<<"2382465"<<"\t\t"<<"tiwarianchal1@yahoo.com"<<"\n";
cout<<setw(29)<<"ANKITA TIWARI\t\t"<<"3675395"<<"\t\t"<<"ankitatiwari@gmail.com"<<"\n";
cout<<setw(28)<<"RAMESH SINGH\t\t"<<"2675613"<<"\t\t"<<"singhramesh@hotmail.com"<<"\n";
cout<<setw(30)<<"RANVIJAY SINGH\t\t"<<"2567815"<<"\t\t"<<"ranvijaysingh@gmail.com"<<"\n";
cout<<setw(31)<<"RAJENDRA PRASAD\t\t"<<"2830011"<<"\t\t"<<"rajendra758@gmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'G':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("GOVINDPUR");cout<<"\n\t\t\t";cprintf("GANGA NAGAR");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"GOVINDPUR")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"RAVI MAURYA\t\t"<<"2511033"<<"\t\t"<<"ravimaurya8@yahoo.com"<<"\n";
cout<<setw(28)<<"GOVIND YADAV\t\t"<<"2528975"<<"\t\t"<<"govindyadav@hotmail.com"<<"\n";
cout<<setw(29)<<"SRISHTI SINGH\t\t"<<"2725713"<<"\t\t"<<"55/9A Govindpur"<<"\n";
cout<<setw(30)<<"VARUN KUSHWAHA\t\t"<<"3028785"<<"\t\t"<<"kuswahavarun@gmail.com"<<"\n";
cout<<setw(26)<<"OM PRAKASH\t\t"<<"2478909"<<"\t\t"<<"prakashom@gmail.com"<<"\n";}
else if(strcmp (ar,"GANGA NAGAR")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"DEEPU SINGH\t\t"<<"3244278"<<"\t\t"<<"singhdeepu@gmail.com"<<"\n";
cout<<setw(29)<<"SHAILI MISHRA\t\t"<<"2029875"<<"\t\t"<<"mishrashaili@gmail.com"<<"\n";
cout<<setw(28)<<"SUSHIL KUMAR\t\t"<<"2216752"<<"\t\t"<<"sushilkumar@gmail.com"<<"\n";
cout<<setw(25)<<"ARUN RAO\t\t\t"<<"2701653"<<"\t\t"<<"raoarun@hotmail.com"<<"\n";
cout<<setw(28)<<"PRAKASH ARYA\t\t"<<"2887893"<<"\t\t"<<"arya9prakash@gmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'H':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("HARWARA");cout<<"\n\t\t\t";cprintf("HIMMATGANJ");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"HARWARA")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"MEERA KUMAR\t\t"<<"2380092"<<"\t\t"<<"meerakumar85@gmail.com"<<"\n";
cout<<setw(27)<<"ASHOK SINGH\t\t"<<"3675180"<<"\t\t"<<"12/5A Harwara"<<"\n";
cout<<setw(30)<<"KARTIKEY DIXIT\t\t"<<"2326291"<<"\t\t"<<"kartikeydixit@gmail.com"<<"\n";
cout<<setw(27)<<"ARPIT KUMAR\t\t"<<"3680563"<<"\t\t"<<"kumararpit@gmail.com"<<"\n";
cout<<setw(28)<<"ASHOK KUMARI\t\t"<<"2412580"<<"\t\t"<<"kumariashok@gmail.com"<<"\n";}
else if(strcmp (ar,"HIMMATGANJ")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(30)<<"ABHINAV MISHRA\t\t"<<"2522454"<<"\t\t"<<"abhinavmishra@gmail.com"<<"\n";
cout<<setw(26)<<"S.K. JAIN\t\t\t"<<"3067815"<<"\t\t"<<"23/34C Himmatganj"<<"\n";
cout<<setw(25)<<"Y.K. SEN\t\t\t"<<"2982642"<<"\t\t"<<"313/364L Himmatganj "<<"\n";
cout<<setw(26)<<"G.T. KUMAR\t\t"<<"2708153"<<"\t\t"<<"kumargt@gmail.com"<<"\n";
cout<<setw(28)<<"P.V. KUSWAHA\t\t"<<"2734941"<<"\t\t"<<"kuswahapv@gmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'J':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("JAYANTIPUR");cout<<"\n\t\t\t";cprintf("JAGAT TARAN");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"JAYANTIPUR")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(29)<<"MUKESH AMBANI\t\t"<<"2411359"<<"\t\t"<<"ambanimukesh@yahoo.com"<<"\n";
cout<<setw(29)<<"NILESH MISHRA\t\t"<<"3228673"<<"\t\t"<<"mishranilesh@gmail.com"<<"\n";
cout<<setw(27)<<"RAHUL KUMAR\t\t"<<"3654984"<<"\t\t"<<"rahulkr121@hotmail.com"<<"\n";
cout<<setw(32)<<"DEEPAK CHAURASIA\t\t"<<"2398657"<<"\t\t"<<"chaurasiadeep@gmail.com"<<"\n";
cout<<setw(27)<<"NITA AMBANI\t\t"<<"2458876"<<"\t\t"<<"nitaambani@gmail.com"<<"\n";}
else if(strcmp (ar,"JAGAT TARAN")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(22)<<"BILLU\t\t\t"<<"2679890"<<"\t\t"<<"billu@hotmail.com"<<"\n";
cout<<setw(29)<<"SURESH KHATRI\t\t"<<"2780563"<<"\t\t"<<"khatrisuresh@gmail.com"<<"\n";
cout<<setw(27)<<"ABHAY SINGH\t\t"<<"2986723"<<"\t\t"<<"singhabhay@yahoo.com"<<"\n";
cout<<setw(29)<<"ARUNIMA SINGH\t\t"<<"3260765"<<"\t\t"<<"arunima23@gmail.com"<<"\n";
cout<<setw(28)<<"TINKU MISHRA\t\t"<<"2911234"<<"\t\t"<<"51/8E Jagat Taran"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'K':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("KHULDABAD");cout<<"\n\t\t\t";cprintf("KRISHNA NAGAR");cout<<"\n\t\t\t";cprintf("KATRA");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"KHULDABAD")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"C.L. MISHRA\t\t"<<"2244864"<<"\t\t"<<"19clmishra@gmail.com"<<"\n";
cout<<setw(29)<<"SURBHI SAXENA\t\t"<<"2986655"<<"\t\t"<<"surbhisaxena@gmail.com"<<"\n";
cout<<setw(27)<<"VINAY SINGH\t\t"<<"2363524"<<"\t\t"<<"35/9D Khuldabad"<<"\n";
cout<<setw(29)<<"NIKHIL MISHRA\t\t"<<"3765987"<<"\t\t"<<"mishranikhil@yahoo.com"<<"\n";
cout<<setw(29)<<"RAMESH TIWARI\t\t"<<"2418981"<<"\t\t"<<"tiwariramesh@gmail.com"<<"\n";}
else if(strcmp (ar,"KRISHNA NAGAR")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(28)<<"POONAM SAROJ\t\t"<<"2382896"<<"\t\t"<<"34/7B Krishna Nagar "<<"\n";
cout<<setw(28)<<"RAKESH KUMAR\t\t"<<"2035963"<<"\t\t"<<"22/15B Krishna Nagar"<<"\n";
cout<<setw(27)<<"PRITI SINGH\t\t"<<"2266993"<<"\t\t"<<"singhpriti@gmail.com"<<"\n";
cout<<setw(27)<<"D.K. MISHRA\t\t"<<"2805632"<<"\t\t"<<"11dkmishra@yahoo.com"<<"\n";
cout<<setw(27)<<"SANI SEHGAL\t\t"<<"2368770"<<"\t\t"<<"sanisehgal@gmail.com"<<"\n";}
else if(strcmp (ar,"KATRA")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(30)<<"MANMOHAN KUMAR\t\t"<<"2699013"<<"\t\t"<<"krmanmohan@gmail.com"<<"\n";
cout<<setw(30)<<"R.K. CHOUDHRAY\t\t"<<"2036584"<<"\t\t"<<"51/9D Katra"<<"\n";
cout<<setw(29)<<"DEEPIKA SINGH\t\t"<<"2806582"<<"\t\t"<<"singhdeepika@gmail.com"<<"\n";
cout<<setw(28)<<"NITESH SINGH\t\t"<<"3607398"<<"\t\t"<<"niteshsingh@gmail.com"<<"\n";
cout<<setw(26)<<"PRANAB DAS\t\t"<<"2458987"<<"\t\t"<<"pranabdas@gmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'L':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("LOKNATH");cout<<"\n\t\t\t";cprintf("LALGANJ");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"LOKNATH")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"AKHIL KUMAR\t\t"<<"2480701"<<"\t\t"<<"akhilkumar@yahoo.com"<<"\n";
cout<<setw(26)<<"RAJA SINGH\t\t"<<"2809333"<<"\t\t"<<"32/16E Loknath"<<"\n";
cout<<setw(27)<<"VINAY KUMAR\t\t"<<"2758961"<<"\t\t"<<"vinaykumar@gmail.com"<<"\n";
cout<<setw(29)<<"PRACHI MISHRA\t\t"<<"2365324"<<"\t\t"<<"prachimishra@gmail.com"<<"\n";
cout<<setw(28)<<"AKSHAY KUMAR\t\t"<<"2188984"<<"\t\t"<<"krakshay@hotmail.com"<<"\n";}
else if(strcmp (ar,"LALGANJ")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(29)<<"RAJEEV BHATIA\t\t"<<"2234970"<<"\t\t"<<"rajeevbhatia@yahoo.com"<<"\n";
cout<<setw(29)<<"KSHITIJ SINGH\t\t"<<"3003691"<<"\t\t"<<"kshitijsingh@gmail.com"<<"\n";
cout<<setw(26)<<"RITIK RAI\t\t\t"<<"2932641"<<"\t\t"<<"ritikrai@gmail.com"<<"\n";
cout<<setw(25)<<"A.K. RAI\t\t\t"<<"3225801"<<"\t\t"<<"akrai@hotmail.com"<<"\n";
cout<<setw(28)<<"RESHMA SINGH\t\t"<<"2313428"<<"\t\t"<<"reshma99@hotmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'M':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("MAMFODGANJ");cout<<"\n\t\t\t";cprintf("MEERAPUR");cout<<"\n\t\t\t";cprintf("MUNDERA");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"MAMFODGANJ")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(26)<<"MEENA DAS\t\t\t"<<"2381484"<<"\t\t"<<"meenadas@yahoo.com"<<"\n";
cout<<setw(26)<<"S.P. SINGH\t\t"<<"2369841"<<"\t\t"<<"spsingh@hotmail.com"<<"\n";
cout<<setw(29)<<"ANUSHKA SINGH\t\t"<<"3070851"<<"\t\t"<<"12/5B Mamfodganj"<<"\n";
cout<<setw(26)<<"ALI JAFAR\t\t\t"<<"2089861"<<"\t\t"<<"alijafar@gmail.com"<<"\n";
cout<<setw(26)<<"ABU AZHAR\t\t\t"<<"2259875"<<"\t\t"<<"abuazhar@gmail.com"<<"\n";}
else if(strcmp (ar,"MEERAPUR")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(30)<<"VINAY MALHOTRA\t\t"<<"2680048"<<"\t\t"<<"33/6D meerapur"<<"\n";
cout<<setw(26)<<"KUMAR SANU\t\t"<<"2961742"<<"\t\t"<<"sanukumar@gmail.com"<<"\n";
cout<<setw(28)<<"ASHISH KUMAR\t\t"<<"2659741"<<"\t\t"<<"krashish@gmail.com"<<"\n";
cout<<setw(30)<<"ASHUTISH YADAV\t\t"<<"3026913"<<"\t\t"<<"97/8D Meerapur"<<"\n";
cout<<setw(26)<<"AJAY KUMAR\t\t"<<"2722133"<<"\t\t"<<"kumarajay@gmail.com"<<"\n";}
else if(strcmp (ar,"MUNDERA")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"ANIL KESHRI\t\t"<<"2722304"<<"\t\t"<<"keshrianil@gmail.com"<<"\n";
cout<<setw(27)<<"VIKAS SINGH\t\t"<<"3236541"<<"\t\t"<<"vikas2singh@gmail.com"<<"\n";
cout<<setw(26)<<"GARIMA SEN\t\t"<<"2765412"<<"\t\t"<<"garimasen@yahoo.com"<<"\n";
cout<<setw(28)<<"ANAND MISHRA\t\t"<<"2089301"<<"\t\t"<<"anandmishra@gmail.com"<<"\n";
cout<<setw(27)<<"AKBAR AHMAD\t\t"<<"2701327"<<"\t\t"<<"akhbarahmad@gmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'N':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("NEEM SARAI");cout<<"\n\t\t\t";cprintf("NAYA KATRA");cout<<"\n\t\t\t";cprintf("NAYI BASTI");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"NEEM SARAI")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(26)<<"AAMIR KHAN\t\t"<<"2259875"<<"\t\t"<<"aamirkhan@hotmail.com"<<"\n";
cout<<setw(27)<<"DILIP KUMAR\t\t"<<"3226642"<<"\t\t"<<"krdilip@yahoo.com"<<"\n";
cout<<setw(27)<<"RAMESH DEEP\t\t"<<"2086971"<<"\t\t"<<"rameshdeep@gmail.com"<<"\n";
cout<<setw(26)<<"Md. AZHAR\t\t\t"<<"2607365"<<"\t\t"<<"25/8D Neem Sarai"<<"\n";
cout<<setw(27)<<"SALMAN ALAM\t\t"<<"2869918"<<"\t\t"<<"alamsalman@gmail.com"<<"\n";}
else if(strcmp (ar,"NAYA KATRA")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(30)<<"PRANJAL KHANNA\t\t"<<"3405521"<<"\t\t"<<"pranjal1265@gmail.com"<<"\n";
cout<<setw(27)<<"SANJU SINGH\t\t"<<"2363254"<<"\t\t"<<"sanjusingh19@gmail.com"<<"\n";
cout<<setw(27)<<"ARJUN SINGH\t\t"<<"2369875"<<"\t\t"<<"singharjun@gmail.com"<<"\n";
cout<<setw(29)<<"SHIVAM MISHRA\t\t"<<"3630568"<<"\t\t"<<"mishrashivam@gmail.com"<<"\n";
cout<<setw(27)<<"SANJAY KHAN\t\t"<<"3277087"<<"\t\t"<<"khansanjay@gmail.com"<<"\n";}
else if(strcmp (ar,"NAYI BASTI")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"REWA ANSARI\t\t"<<"3133727"<<"\t\t"<<"rewaansari@gmail.com"<<"\n";
cout<<setw(28)<<"SUSHIL SINGH\t\t"<<"3671250"<<"\t\t"<<"sushilsingh@gmail.com"<<"\n";
cout<<setw(27)<<"RAJU PRASAD\t\t"<<"2965743"<<"\t\t"<<"prasadraju@yahoo.com"<<"\n";
cout<<setw(27)<<"DIVYA SINGH\t\t"<<"2607635"<<"\t\t"<<"divyasingh1@gmail.com"<<"\n";
cout<<setw(22)<<"MANOJ\t\t\t"<<"3343530"<<"\t\t"<<"33/9A Nayi Basti"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'P':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("PREETAM NAGAR");cout<<"\n\t\t\t";cprintf("PHAPHAMAU");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"PREETAM NAGAR")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"ANAND SINGH\t\t"<<"3636378"<<"\t\t"<<"anandsingh@gmail.com"<<"\n";
cout<<setw(27)<<"SATYA YADAV\t\t"<<"2202642"<<"\t\t"<<"satyayadav@gmail.com"<<"\n";
cout<<setw(27)<<"SURAJ SINGH\t\t"<<"3626240"<<"\t\t"<<"singhsuraj@gmail.com"<<"\n";
cout<<setw(22)<<"SHILA\t\t\t"<<"3220121"<<"\t\t"<<"1225shilla@gmail.com"<<"\n";
cout<<setw(27)<<"ABHAY KUMAR\t\t"<<"3411023"<<"\t\t"<<"abhaykumar@gmail.com"<<"\n";}
else if(strcmp (ar,"PHAPHAMAU")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"TANUJ KUMAR\t\t"<<"2845678"<<"\t\t"<<"24/8B Phaphamau"<<"\n";
cout<<setw(27)<<"AMRIT SINGH\t\t"<<"3296852"<<"\t\t"<<"singhamrit@yahoo.com"<<"\n";
cout<<setw(32)<<"NARESH AGNIHOTRI\t\t"<<"3062839"<<"\t\t"<<"66/7A Phaphamau"<"\n";
cout<<setw(35)<<"RAHUL ROY\t\t\t"<<"3606215"<<"\t\t"<<"rahulroy@gmail.com"<<"\n";
cout<<setw(27)<<"ANKIT SINGH\t\t"<<"3253377"<<"\t\t"<<"singhankit@gmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'R':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("RAJAPUR");cout<<"\n\t\t\t";cprintf("RAMBAGH");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"RAJAPUR")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(28)<<"RAJEEV KUMAR\t\t"<<"3122131"<<"\t\t"<<"krrajeev@yahoo.com"<<"\n";
cout<<setw(29)<<"SANJEEV SINGH\t\t"<<"3229873"<<"\t\t"<<"singhsanjeev@gmail.com"<<"\n";
cout<<setw(24)<<"JAYDEEP\t\t\t"<<"3258364"<<"\t\t"<<"jaydeep286@hotmail.com"<<"\n";
cout<<setw(26)<<"RAHUL RAJ\t\t\t"<<"2161362"<<"\t\t"<<"rajrahul@gmail.com"<<"\n";
cout<<setw(28)<<"SANJAY KUMAR\t\t"<<"2965512"<<"\t\t"<<"sanjaykr11@gmail.com"<<"\n";}
else if(strcmp (ar,"RAMBAGH")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(27)<<"ANUJ TIWARI\t\t"<<"3244278"<<"\t\t"<<"anujtiwari50@gmail.com"<<"\n";
cout<<setw(27)<<"JEETU SINGH\t\t"<<"3126578"<<"\t\t"<<"14/9C Rambagh"<<"\n";
cout<<setw(29)<<"AMRITA KUMARI\t\t"<<"3369871"<<"\t\t"<<"12/8C Rambagh"<<"\n";
cout<<setw(27)<<"NEETU SINGH\t\t"<<"2369213"<<"\t\t"<<"singhneetu@yahoo.com"<<"\n";
cout<<setw(26)<<"AMIT SINGH\t\t"<<"3954590"<<"\t\t"<<"singhamit@gmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'S':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("SULEM SARAI");cout<<"\n\t\t\t";cprintf("SHAHGANJ");cout<<"\n\t\t\t";cprintf("SALORI");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"SHAHGANJ")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(28)<<"AMITA MISHRA\t\t"<<"3456789"<<"\t\t"<<"mishraamita@gmail.com"<<"\n";
cout<<setw(28)<<"DEEPAK KUMAR\t\t"<<"3269871"<<"\t\t"<<"krdeepak258@gmail.com"<<"\n";
cout<<setw(24)<<"RAVIDAS\t\t\t"<<"3015689"<<"\t\t"<<"ravidas152@yahoo.com"<<"\n";
cout<<setw(26)<<"SURAJ OJHA\t\t"<<"3301697"<<"\t\t"<<"ojhasuraj@hotmail.com"<<"\n";
cout<<setw(28)<<"DURGA PRASAD\t\t"<<"3782211"<<"\t\t"<<"durgaprasad@gmail.com"<<"\n";}
else if(strcmp (ar,"SULEM SARAI")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(26)<<"T.S GUPTA\t\t\t"<<"3780567"<<"\t\t"<<"32/8BC Sulem Sarai"<<"\n";
cout<<setw(25)<<"N.K. LAL\t\t\t"<<"3013241"<<"\t\t"<<"25/8BC Sulem Sarai"<<"\n";
cout<<setw(29)<<"ARPIT JAISWAL\t\t"<<"3121687"<<"\t\t"<<"arpitjaiswal@gmail.com"<<"\n";
cout<<setw(28)<<"PRIYA KUMARI\t\t"<<"3103671"<<"\t\t"<<"priyakumari@yahoo.com"<<"\n";
cout<<setw(29)<<"GULSHAN KUMAR\t\t"<<"3944567"<<"\t\t"<<"krgulshan@gmail.com"<<"\n";}
else if(strcmp (ar,"SALORI")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(28)<<"JAGJIT SINGH\t\t"<<"2932149"<<"\t\t"<<"jagjit897@gmail.com"<<"\n";
cout<<setw(28)<<"NITIN SONKAR\t\t"<<"3109743"<<"\t\t"<<"sonkarnitin@yahoo.com"<<"\n";
cout<<setw(22)<<"DISHA\t\t\t"<<"3023651"<<"\t\t"<<"disha1120@hotmail.com"<<"\n";
cout<<setw(28)<<"RAJEEV SINGH\t\t"<<"3187562"<<"\t\t"<<"singhrajeev@gmail.com"<<"\n";
cout<<setw(29)<<"DIVYA RASTOGI\t\t"<<"2862210"<<"\t\t"<<"divyarastogi@gmail.com"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
case'T':{
textbackground(0);
textcolor(3);
cout<<"\t\t\t";cprintf("TRANSPORT NAGAR");cout<<"\n\t\t\t";cprintf("TULSIPUR");cout<<"\n";
cout<<"\nChoose your area:\n";
gets(ar);
if (strcmp (ar,"TRANSPORT NAGAR")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(28)<<"VINOD MISHRA\t\t"<<"3134576"<<"\t\t"<<"mishravinod@gmail.com"<<"\n";
cout<<setw(29)<<"SANJAY KHANNA\t\t"<<"3123642"<<"\t\t"<<"khannasanjay@gmail.com"<<"\n";
cout<<setw(27)<<"ANIL SHARMA\t\t"<<"3129120"<<"\t\t"<<"sharmaanil@yahoo.com"<<"\n";
cout<<setw(29)<<"RASHMI MISHRA\t\t"<<"3136345"<<"\t\t"<<"rashmimishra@gmail.com"<<"\n";
cout<<setw(27)<<"SUNIL SINGH\t\t"<<"2953291"<<"\t\t"<<"sunilsingh@gmail.com"<<"\n";}
else if(strcmp (ar,"TULSIPUR")==0)
{textcolor(5);
cout<<"\t";
cprintf("      Name");cout<<"\t\t\t";
cprintf("TL no.");cout<<"\t\t";cprintf("Email Id/Address");cout<<"\n";
cout<<setw(30)<<"ABHISHEK KUMAR\t\t"<<"2856789"<<"\t\t"<<"kumarabhishek@gmail.com"<<"\n";
cout<<setw(22)<<"ASHOK\t\t\t"<<"2126203"<<"\t\t"<<"12/5D Tulsipur"<<"\n";
cout<<setw(30)<<"ABHINAV MISHRA\t\t"<<"3924113"<<"\t\t"<<"52/6A Tulsipur"<<"\n";
cout<<setw(28)<<"DIPTI KHANNA\t\t"<<"3193021"<<"\t\t"<<"25/8B Tulsipur"<<"\n";
cout<<setw(28)<<"SONIA MISHRA\t\t"<<"3921375"<<"\t\t"<<"31/4C Tulsipur"<<"\n";}
else
cout<<"Sorry..!!\n";
}
break;
default: cout<<"Sorry, Wrong Choice..!\n";
break;
} }
void directory::important()
{
textbackground(1);
textcolor(15);
cout<<"\n";
cprintf("Name");cout<<setw(50)<<"Contact Number\n";
cout<<"----"<<setw(50)<<"--------------\n";
textbackground(0);
textcolor(6);
cprintf("Abhilasha Gupta(MAYOR)");cout<<setw(28)<<"7408422301\n";
cprintf("S S P");cout<<setw(41)<<"641902\n";
cprintf("S P City");cout<<setw(38)<<"641903\n";
cprintf("IG(Baba Chauraha)");cout<<setw(33)<<"9454400139\n";
cprintf("DIG(Sitapur)");cout<<setw(38)<<"9454400195\n";
cprintf("SSP(Court Parisar)");cout<<setw(32)<<"9454400380\n";
cprintf("ASP");cout<<setw(47)<<"9454400379\n";
cprintf("ADDL.SP(Yamunapar)");cout<<setw(32)<<"9454401013\n";
cprintf("ADDL.SP(Chowk)");cout<<setw(36)<<"9454401014\n";
cprintf("DSP CO (Traffic Kotwali)");cout<<setw(26)<<"9454401275\n";
cprintf("DSP CO (SSP office)");cout<<setw(31)<<"9454401277\n";
cprintf("DSP CO(Naini)");cout<<setw(37)<<"9454401283\n";
cprintf("DSP CO(Meja)");cout<<setw(38)<<"9454401284\n";
cprintf("ADDL.SP(Crime)");cout<<setw(36)<<"9454401908\n";
cprintf("SSP office");cout<<setw(40)<<"9454402417\n";
cprintf("PS Civil Lines");cout<<setw(36)<<"9454402822\n";
cprintf("ALLAHABAD AIRPORT");cout<<setw(29)<<"633574\n";
cprintf("FIRE DEPARTMENT");cout<<setw(34)<<"101600453\n";
cprintf("ALLAHABAD RAILWAYS(reservation)");cout<<setw(19)<<"6026671330\n";
}
void directory::Add()
{
textbackground(0);
textcolor(2);
ofstream fout;
fout.open("Record.TXT",ios::app);
char ans='Y';
while(ans=='Y'||ans=='y')
{
cout<<"\n";
cprintf("Enter name");
cout<<"\n";
gets(name);
cprintf("Enter telephone no.");
cout<<"\n";
cin>>tp;
fout<<name<<"\n"<<tp<<"\n";
textbackground(0);
textcolor(4);
cout<<"\nWant to add more records?(Y/N)\n";
cin>>ans;
}
fout.close();
display();
}
void directory::display()
{
textbackground(0);
textcolor(4);
char ch;
ifstream fin;
fin.open("RECORD.TXT",ios::in);
if(!fin)
{
cout<<"Cannot open file!!\n";
}
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();
}
void directory::selection()
{
X:
{
textbackground(0);
textcolor(6);
char num;
cout<<"                                        !!\n";
cout<<"...........................\t\t";cout<<"* * * * *\n";
cout<<": 1 :";cprintf("Important STD Codes  ");cout<<":\t\t";cout<<"*'''''''*\n";
cout<<":.........................:\t\t";cout<<"*'     '*\n";
cout<<": 2 :";cprintf("Important ISD Codes  ");cout<<":\t\t";cout<<"*'     '*\n";
cout<<":.........................:\t\t";cout<<"*'''''''*\n";
cout<<": 3 :";cprintf("Important Contacts   ");cout<<":\t\t";cout<<"*:1:2:3:*\n";
cout<<":.........................:\t\t";cout<<"*:4:5:6:*\n";
cout<<": 4 :";cprintf("Contacts(area wise)  ");cout<<":\t\t";cout<<"*:7:8:9:*\n";
cout<<":.........................:\t\t";cout<<"* * * * *\n";
cout<<": 5 :";cprintf("Add Contacts ");cout<<"        :\n";
cout<<":.........................:\t\t";cout<<"\n";
cout<<": 6 :";cprintf("Display Contacts");cout<<"     :\n";
cout<<":.........................:\t\t";
cout<<"\nYour choice\n";
cin>>num;
switch(num)
{
case '1': STD();
break;
case '2': ISD();
break;
case '3': important();
break;
case '4': Contacts();
break;
case '5': Add();
break;
case '6': display();
break;
default:{ cout<<"Wrong input!! Enter the appropriate option\n";
goto X;}
}
}
Y:
{cout<<"\n\n\nWant to search again(Y or N)?\n";
char dcs;
cin>>dcs;
if(dcs=='Y'||dcs=='y')
goto X;
else if(dcs=='N'||dcs=='n')
{cout<<"\n\n\n";
cout<<"\t\t\t\t...............\n";
cout<<"\t\t\t\t:";cprintf("  THANK YOU  ");cout<<":\n";
cout<<"\t\t\t\t:.............:\n";
}
else
{cout<<"Wrong input!! Enter the appropriate option\n";
goto Y;} }
}
void main()
{
clrscr();
textcolor(6);
cout<<"\n\n\n\n\n"<<setw(53)<<"*****************************";
cout<<"\n";
welcome();
cout<<setw(53)<<"*****************************";
cout<<"\n\n\n\n\n\n";
directory d;
d.selection();
getch();
}