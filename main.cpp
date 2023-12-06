#include <windows.h>
#include <iostream>
#include <iomanip>
using namespace std;
#include "employees.h"
#include <stdlib.h>

int main()
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15);
    cout<<"                   .                                            ."<<endl;
    cout<<"     *   .                  .              .        .      "<<endl;
    cout<<"*          ."<<endl;
    cout<<"  .         .                     .       .           .      .        ."<<endl;
    cout<<"        ";SetConsoleTextAttribute(hConsole,14);cout<<"o";SetConsoleTextAttribute(hConsole,15);cout<<"                             .                   ."<<endl;
    cout<<"         .              .                  .           ."<<endl;
    cout<<"          ";SetConsoleTextAttribute(hConsole,14);cout<<"0";SetConsoleTextAttribute(hConsole,15);cout<<"     ."<<endl;
    cout<<"                 .          .                 ,                ,    ,"<<endl;
    cout<<" .          ";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,15);cout<<"          .                         ."<<endl;
    cout<<"      .      ";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,15);cout<<"   ,"<<endl;
    cout<<"   .          ";SetConsoleTextAttribute(hConsole,14);cout<<"o";SetConsoleTextAttribute(hConsole,15);cout<<"     .                 .                   .            ."<<endl;
    cout<<"     .         ";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,15);cout<<"                 ,             .                ."<<endl;
    cout<<"               ";SetConsoleTextAttribute(hConsole,6);cout<<"#";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,6);cout<<"##";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,6);cout<<"#";SetConsoleTextAttribute(hConsole,15);cout<<"      .                              .        ."<<endl;
    cout<<"             ";SetConsoleTextAttribute(hConsole,6);cout<<"#  #";SetConsoleTextAttribute(hConsole,14);cout<<"o";SetConsoleTextAttribute(hConsole,6);cout<<"##";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,6);cout<<"###";SetConsoleTextAttribute(hConsole,15);cout<<"                .                        ."<<endl;
    cout<<"   .        ";SetConsoleTextAttribute(hConsole,6);cout<<"#*#  #";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,6);cout<<"##";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,6);cout<<"###";SetConsoleTextAttribute(hConsole,15);cout<<"                       .                     ,"<<endl;
    cout<<"        .   ";SetConsoleTextAttribute(hConsole,6);cout<<"##*#  #";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,6);cout<<"##";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,6);cout<<"##";SetConsoleTextAttribute(hConsole,15);cout<<"      .                              .        ."<<endl;
    cout<<"      .      ";SetConsoleTextAttribute(hConsole,6);cout<<"##*#  #";SetConsoleTextAttribute(hConsole,14);cout<<"o";SetConsoleTextAttribute(hConsole,6);cout<<"##";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,6);cout<<"#";SetConsoleTextAttribute(hConsole,15);cout<<"         .                             ,       ."<<endl;
    cout<<"          .    ";SetConsoleTextAttribute(hConsole,6);cout<<"#*#  #";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,6);cout<<"#";SetConsoleTextAttribute(hConsole,15);cout<<"     .                    .             .          ,"<<endl;
    cout<<"                      ";SetConsoleTextAttribute(hConsole,14);cout<<"\\";SetConsoleTextAttribute(hConsole,15);cout<<"          .                         ."<<endl;
    SetConsoleTextAttribute(hConsole,12);cout<<"____^/\\___^--____/\\____";SetConsoleTextAttribute(hConsole,14);cout<<"O";SetConsoleTextAttribute(hConsole,12);cout<<"______________/\\/\\---/\\___________---______________"<<endl;
    cout<<"   /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---"<<endl;
    cout<<"         --           -            --  -      -         ---  __       ^"<<endl;
    cout<<"   --  __                      ___--  ^  ^                         --  __"<<endl;SetConsoleTextAttribute(hConsole,15);
    cout<<"                               Daphnis INC                            "<<endl;

    Sleep(3000);
    system("CLS");





    int numberSelect;
        int gbdk=0;

while (gbdk==0){
            SetConsoleTextAttribute(hConsole,5);
    cout<<"+======================================+"<<endl;
    cout<<"||";SetConsoleTextAttribute(hConsole,13);cout<<"....................................";SetConsoleTextAttribute(hConsole,5);cout<<"||"<<endl;
    cout<<"||";SetConsoleTextAttribute(hConsole,13);cout<<"....................................";SetConsoleTextAttribute(hConsole,5);cout<<"||"<<endl;
    cout<<"||";SetConsoleTextAttribute(hConsole,13);cout<<"....................................";SetConsoleTextAttribute(hConsole,5);cout<<"||"<<endl;
    cout<<"||";SetConsoleTextAttribute(hConsole,13);cout<<"....................................";SetConsoleTextAttribute(hConsole,5);cout<<"||"<<endl;
    cout<<"||";SetConsoleTextAttribute(hConsole,13);cout<<".............";SetConsoleTextAttribute(hConsole,15);cout<<"Main Menu";SetConsoleTextAttribute(hConsole,13);cout<<"..............";SetConsoleTextAttribute(hConsole,5);cout<<"||"<<endl;
    cout<<"||";SetConsoleTextAttribute(hConsole,13);cout<<"....................................";SetConsoleTextAttribute(hConsole,5);cout<<"||"<<endl;
    cout<<"||";SetConsoleTextAttribute(hConsole,13);cout<<"....................................";SetConsoleTextAttribute(hConsole,5);cout<<"||"<<endl;
    cout<<"||";SetConsoleTextAttribute(hConsole,13);cout<<"....................................";SetConsoleTextAttribute(hConsole,5);cout<<"||"<<endl;
    cout<<"||";SetConsoleTextAttribute(hConsole,13);cout<<"....................................";SetConsoleTextAttribute(hConsole,5);cout<<"||"<<endl;
    cout<<"+======================================+"<<endl;
    SetConsoleTextAttribute(hConsole,15);
    cout<<"Please select one of the following by number: \n\n1 - Employee Login \n2 - Customer Service\n3 - Exit "<<endl;
    cin>>numberSelect;

    if(numberSelect==1){
    employees();}

    else if(numberSelect==2){
    int num;
    cout<<"Welcome to Customer Service! How can we help you?"<<endl;
    cout<<"\n Please input 1 or 2 according to the list below: \n1. File a complaint \n2. Leave a review!"<<endl;
    cin>>num;

        while(num==1){
        string complaint;

        cout<<"Hi there! What's the problem?\n"<<endl;
        cin>>complaint;
        cout<<"Thank you for your feedback, we will take it into consideration! Have a nice day :)"<<endl;

    Sleep(3000);
    system("PAUSE");
    system("CLS");
    num=0;
        }

    while(num==2){
        string complaint;

        cout<<"Leave your review here!\n"<<endl;
        cin>>complaint;
        cout<<"Thank you for your review, we apreciate! Have a nice day :)"<<endl;
    Sleep(3000);
    system("PAUSE");
    system("CLS");
    num=0;}
        }


    else if (numberSelect==3){cout<<"Bye bye!"<<endl;
    gbdk=1;}

    else{
    cout<<"\nPlease enter a number from the list. Goodbye :)"<<endl;
        }



        }
    }

