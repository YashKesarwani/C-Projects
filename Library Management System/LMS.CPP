#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<fstream.h>
#include<time.h>
#include<dos.h>
#include<math.h>

class Welcome
{
   private:
    int choice,x,i,y,k,width;
   public:
    void display2()
    {
	cout<<"\n\t\t  Welcome   \tto   \tStar    \tLibrary\n";
	cout<<"          ------------------------------------------------------------";
	cout<<"\n          ------------------------------------------------------------\n\n";
    }
    void display()
    {
	    textbackground(1);
	    textcolor(WHITE);
	    display_line();
        cout<<"\n";
	    printf("	      S         \tT            \t   A            R      \n");
        delay(80);
        printf("	      S         \tT            \t   A            R      \n");
        delay(80);
        printf("	      S         \tT            \t   A            R      \n");
        delay(80);
        printf("	      S         \tT            \t   A            R      \n");
        delay(80);
        printf("	      S         \tT            \t   A            R      \n");
        delay(80);
	    printf("	      S         \tT            \t   A            R      \n");
	    delay(80);
	    printf("	      S         \tT            \t   A            R      \n");
	    delay(80);
	    printf("	      S         \tT            \t   A            R      \n");
        display_line();
	cout<<"\n\n\t\t\t";
	cprintf("Created By:- ");
	cprintf("YASH KESARWANI");
	cout<<"\n\n\n\n\n\n\n\n";
	    system("pause");
   }
    void options();
    void out();
    void display_line();
};
 void Welcome::display_line()
 {
     width=80;
	i=0;
	x=wherex();
	y=wherey()+1;
	x=40;
	for(k=0;k<40;k++)
	{
	    delay(30);
	    gotoxy(x+k,y);
	    cprintf("%c",240);
	    gotoxy(x-k,y);
	    delay(30);
	    cprintf("%c",240);
	}
 }
 void Welcome::out()
 {
    display_line();
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t";
	cprintf("THANK YOU..!!");
	cout<<"\n\t\t\t";
	cprintf("WISH TO SEE YOU BACK AGAIN..!!");
	cout<<"\n\n\n\n\n\n\n\n\n";
	display_line();
	cout<<"\n";
	system("pause");
	exit(1);
 }
class Make_lib
{
    private:
     int book_code;
     char book_name[20], author_name[20];
     float price;
    public:
     void write_book();
     int getcode();
     void display();
};
 void Make_lib::write_book()
 {
     cout<<"\nEnter Book Code: ";
     cin>>book_code;
     cout<<"\nEnter Book Name: ";
     gets(book_name);
     cout<<"\nEnter Author name: ";
     gets(author_name);
     cout<<"\nEnter Price: ";
     cin>>price;
 }
 int Make_lib::getcode()
 {
     return book_code;
 }
 void Make_lib::display()
 {
     cout<<book_code<<"\t\t  ";
     cout<<book_name<<"\t\t ";
     cout<<author_name<<"\t";
     cout<<price<<"\n";
 }
class open_lib:public Welcome
{
    private:
     char ch,ans,found,confirm;
     int choice,chc,book_code,book_id,lc_no;
     char line[250],name[20];
    public:
     void display_book();
     void append_book();
     void del_book();
     void purchase_book();
     void lend_book();
     void deposit_book();
     void check();
     void options2();
 };
class Search_lib:public open_lib
{
     private:
      int book_code;
      char found;
     public:
      void search();
      void search2();
};
 void Search_lib::search()
 {
     found='n';
     cout<<"\nEnter the book's code..\n";
     cin>>book_code;
     Make_lib m;
     ifstream f("Books.txt",ios::in);
     if(!f)
     {
	 cout<<"Cannot open file\n";
	 return;
     }
     while(!f.eof())
     {
	  f.read((char*)&m,sizeof(m));
      if(m.getcode()==book_code)
      {
	cout<<"\nBook Code\t  Book Name\t\t  Author name\t\t     Price\n";
	    m.display();
	    found='y';
	    break;
      }
     }
     if(found=='n')
     {
	 cout<<"No such book code. Enter correct book code\n";
     }
     f.close();
     cout<<"\n";
     options2();
 }
 void Search_lib::search2()
 {
     found='n';
     cout<<"\nEnter the book's code..\n";
     cin>>book_code;
     Make_lib m;
     ifstream f("Books.txt",ios::in);
     if(!f)
     {
	 cout<<"Cannot open file\n";
	 return;
     }
     while(!f.eof())
     {
	  f.read((char*)&m,sizeof(m));
      if(m.getcode()==book_code)
      {
	   cout<<"\nBook Code\t  Book Name\t\t  Author name\t\t     Price\n";
	       m.display();
	       found='y';
	       break;
      }
     }
     if(found=='n')
     {
	 cout<<"No such book code. Enter correct book code\n";
	 options2();
     }
     f.close();
 }
 void open_lib::display_book()
 {
     ifstream fin;
     Make_lib m;
     fin.open("Books.txt", ios::in);
     if(!fin)
     {
	 cout<<"Cannot open file\n";
	 return;
     }
	  cout<<"\nBook Code\t  Book Name\t\t  Author name\t\t  Price\n";
     //for(int i=0;i<=4;i++)
     while(fin)
      {
	  fin.read((char*)&m,sizeof(m));
	  m.display();
      }
     fin.close();
     cout<<"\n";
     options2();
 }
 void open_lib::purchase_book()
 {
     Search_lib s;
     s.search2();
     cout<<"\nEnter Your name\n";
     gets(name);
     ofstream fout;
     fout.open("Pur_records.txt",ios::app);
     fout<<name<<"\n";
     fout.close();
     cout<<"\nThank You for purchasing the book.\n";
     check();
 }
 void open_lib::lend_book()
 {
     Search_lib s;
     s.search2();
     cout<<"\nEnter Your name\n";
     gets(name);
     cout<<"\nEnter your Library Card No.\n";
     cin>>lc_no;
     ofstream fout;
     fout.open("Issue_records.txt",ios::app);
     fout<<name<<"\t"<<lc_no<<"\t";
     cout<<"\nYou can have the book for 10 days.\n";
     time_t t=time(NULL);
     tm* timeptr=localtime(&t);
     cout<<"That is up to date : "<<(timeptr->tm_mday)+10<<"/"<<(timeptr->tm_mon)+1<<"/"<<(timeptr->tm_year)+1900<<"\n";
     fout<<(timeptr->tm_mday)+10<<"/"<<(timeptr->tm_mon)+1<<"/"<<(timeptr->tm_year)+1900<<"\n";
     fout.close();
     check();
 }
 void open_lib::append_book()
 {
     ofstream f("Books.txt",ios::app);
     ans='y';
     Make_lib m;
     while(ans=='y'||ans=='Y')
     {
	 m.write_book();
	 f.write((char*)&m,sizeof(m));
	 cout<<"Book added to library\n";
	 cout<<"Want to enter more books..??(Y for yes N for No)\n";
	 cin>>ans;
     }
     f.close();
     cout<<"\n";
     options();
 }
 void open_lib::del_book()
 {
     ifstream fio("Books.txt",ios::in);
     ofstream file("temp.txt",ios::out);
     found='f';
     confirm='n';
     Make_lib m;
     cout<<"Enter book code:";
     cin>>book_code;
     while(!fio.eof())
     {
	 fio.read((char*)&m,sizeof(m));
	 if(m.getcode()==book_code)
	 {
	      cout<<"\nBook Code\t  Book Name\t\t  Author name\t     Price\n";
	     m.display();
	     found='t';
	     cout<<"\nSure delete the book..??(Y for Yes & N for No)\n";
	     cin>>confirm;
	     if(confirm=='n'|| confirm=='N')
	     {
		 file.write((char*)&m,sizeof(m));
	     }
	     break;
	 }
	 else
	 {
	     file.write((char*)&m,sizeof(m));
	     found='n';
	 }
     }
     if(found=='n')
     {
	 cout<<"Book not found\n";
     }
     fio.close();
     file.close();
     remove("Books.txt");
     rename("temp.txt","Books.txt");
     cout<<"\nReturning to Library...\n";
     options();
 }
 void open_lib::deposit_book()
 {
     cout<<"\nEnter the book code\n";
     cin>>book_code;
     ifstream fin;
     ofstream fout;
     fin.open("Books.txt",ios::in);
     Make_lib m;
     while(!fin.eof())
     {
	 fin.read((char*)&m,sizeof(m));
         if(m.getcode()==book_code)
	 {
             book_id=book_code;
	 }
	 else
	 {
	     book_id=0;
	 }
     }
     if(book_id!=0)
     {
     cout<<"Enter your name\n";
     gets(name);
     time_t t=time(NULL);
     tm* timeptr=localtime(&t);
     fout.open("Dep_records.txt",ios::app);
     fout<<name<<"\t"<<book_id<<"\t";
     fout<<(timeptr->tm_mday)<<"/"<<(timeptr->tm_mon)+1<<"/"<<(timeptr->tm_year)+1900<<"\n";
     fout.close();
     cout<<"\n";
     options();
     }
     else
     {
      clrscr();
      cout<<"This book does not belongs to this Library\n";
      cout<<"Returning to menu....\n";
      options();
     }
 }
 void open_lib::check()
 {
     cout<<"\nWant to look for more books..??(Y for Yes & N for No)\n";
     cin>>ch;
     if(ch=='y'|| ch=='Y')
     {
	 display_book();
     }
     else if(ch=='n'|| ch=='N')
     {
	 X:
	 {
	     cout<<"1.Return to main menu??\n";
	     cout<<"2.Exit the Library?\n";
	     cout<<"Enter your choice....\n";
	     cin>>choice;
	     if(choice==1)
	     {	       
	       options();
             }
	     else if(choice==2)
             {
	       exit(0);
             }
             else
             {
               goto X;   
             }
         }   
     }
     else
     {
         cout<<"Enter correct choice\n";
	 check();
     }
 }
 void open_lib::options2()
 {
     cout<<"1. Purchase from Library\n";
     cout<<"2. Take a book on lend from Library\n";
     cout<<"3. Search from Library\n";
     cout<<"4. Deposit a book back to Library\n";
     cout<<"5. Exit from Library..??\n";
     cout<<"Enter your choice\n";
     cin>>chc;
     cout<<"\n";
     clrscr();
     switch(chc)
     {
	 case 1: purchase_book();
	 break;
	 case 2: lend_book();
	 break;
	 case 3: Search_lib s;s.search();
	 break;
     case 4: deposit_book();
     break;
	 case 5:  Welcome w;w.out();
	 break;
	 default: clrscr();
		  cout<<"\nSorry..!! Wrong choice\n";
		  cout<<"Returning to main menu\n";
		  options();
     }
 }
 void Welcome::options()
 {
     C:
      {
     open_lib obj;
     cout<<"1. View Library\n";
     cout<<"2. Purchase from Library\n";
     cout<<"3. Take a book on lend from Library\n";
     cout<<"4. Deposit a book back to Library\n";
     cout<<"5. Search from Library\n";
     cout<<"6. Add books to library..??\n";
     cout<<"7. Delete book from library..??\n";
     cout<<"8. Exit from Library..??\n";
     cout<<"Enter your choice\n";
     cin>>choice;
     clrscr(); 
     switch(choice)
     {
	 case 1: obj.display_book();
	 break;
	 case 2: obj.purchase_book();
	 break;
	 case 3: obj.lend_book();
	 break;
     case 4: obj.deposit_book();
     break;
	 case 5: Search_lib s;s.search();
	 break;
	 case 6: obj.append_book();
	 break;
     case 7: obj.del_book();
     break;
	 case 8: Welcome w;w.out();
	 break;
	 default: clrscr();
		  cout<<"\nSorry..!! Wrong choice\n";
		  cout<<"Returning to main menu\n";
		  goto C;
     }
      }
 }
void main()
{
    clrscr();
    /*Make_lib m[5];
    fstream fout;
    fout.open("Books.txt",ios::app);
    if(!fout)
    {
	cout<<"Cannot open file\n";
	exit(1);
    }
    cout<<"Enter details of 5 books\n";
    for(int i=0;i<=4;i++)
    {
	m[i].write_book();
	fout.write((char*)&m[i],sizeof(m[i]));
    }
    fout.seekg(0);
    fout.close();
    clrscr();*/
    Welcome w;
    w.display();
    clrscr();
    w.display2();
    w.options();
    getch();
}