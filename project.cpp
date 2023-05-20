#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
class Lib
{
   public:
       char bookname[100],auname[50],sc[20],sc1[50];
       int q,B,p;
       Lib()
       {
           strcpy(bookname,"NO Book Name");
           strcpy(auname,"No Author Name");
           strcpy(sc,"No Book ID");
           strcpy(sc1,"No Book ID");
           q=0;
           B=0;
           p=0;
       }
          void get();
          void student();
          void pass();
          void librarian();
          void password();
          void getdata();
          void show(int);
          void booklist(int);
          void modify();
          void see(int);
          int branch(int);
          void issue();
          void der(char[],int,int);
          void fine(int,int,int,int,int,int);
};
void Lib::getdata()
{
                    int i;
                    fflush(stdin);
                    cout<<"\n\t\tEnter the details :-\n";
                    cout<<"\n\t\tEnter Book's Name : ";
                    cin.getline(bookname,100);
                    for(i=0;bookname[i]!='\0';i++)
                    {
                    if(bookname[i]>='a'&&bookname[i]<='z')
                       bookname[i]-=32;
                    }
                    cout<<"\n\t\tEnter Author's Name : ";
                    cin.getline(auname,50);
                    cout<<"\n\t\tEnter Publication name : ";
                    cin.getline(sc1,50);
                    cout<<"\n\t\tEnter Book's ID : ";
                    cin.getline(sc,20);
                    cout<<"\n\t\tEnter Book's Price : ";
                    cin>>p;
                    cout<<"\n\t\tEnter Book's Quantity : ";
                    cin>>q;
}
void Lib::show(int i)
{
    cout<<"\n\t\tBook Name : "<<bookname<<endl;
    cout<<"\n\t\tBook's Author Name : "<<auname<<endl;
    cout<<"\n\t\tBook's ID : "<<sc<<endl;
    cout<<"\n\t\tBook's Publication : "<<sc1<<endl;
    if(i==2)
    {
        cout<<"\n\t\tBook's Price : "<<p<<endl;
        cout<<"\n\t\tBook's Quantity : "<<q<<endl;
    }
}

int main()
{

    return 0;
}