#include <iostream>
using namespace std;
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <windows.h>
#include "employees.h"

void emEmployeeMenus(){
    cout<<"Welcome Emily, here you can find how much you earn per week, every week they will reset back to zero."<<endl;

    int emhours;
    double emwage, emearned;

        cout<<"Please enter your hours worked this week: ";
        cin>>emhours;

        cout<<"Please enter your current wage: $";
        cin>>emwage;

        emearned=emwage*emhours;
        cout<<"This week, you've made $"<<emearned<<"!"<<endl;
        Sleep(3000);
    cout<<"Press enter to sign out"<<endl;
    system("PAUSE");
    system("CLS");
}

void soEmployeeMenus(){
cout<<"Welcome Sonic, here you can find how much you earn per week, every week they will reset back to zero."<<endl;

    int sohours;
    double sowage, soearned;

    cout<<"Please enter your hours worked this week: ";
    cin>>sohours;

    cout<<"Please enter your current wage: $";
    cin>>sowage;

    soearned=sowage*sohours;
    cout<<"This week, you've made $"<<soearned<<"!"<<endl;

    Sleep(3000);
    cout<<"Press enter to sign out"<<endl;
    system("PAUSE");
    system("CLS");

}
void reEmployeeMenus(){
cout<<"Welcome Rebecca, here you can find how much you earn per week, every week they will reset back to zero."<<endl;

    int rehours;
    double rewage, reearned;

    cout<<"Please enter your hours worked this week: ";
    cin>>rehours;

    cout<<"Please enter your current wage: $";
    cin>>rewage;

    reearned=rewage*rehours;
    cout<<"This week, you've made $"<<reearned<<"!"<<endl;
    Sleep(3000);
    cout<<"Press enter to sign out"<<endl;
    system("PAUSE");
    system("CLS");
}
void daEmployeeMenus(){
cout<<"Welcome Emily, here you can find how much you earn per week, every week they will reset back to zero."<<endl;

    int dahours;
    double dawage, daearned;

    cout<<"Please enter your hours worked this week: ";
    cin>>dahours;

    cout<<"Please enter your current wage: $";
    cin>>dawage;

    daearned=dawage*dahours;
    cout<<"This week, you've made $"<<daearned<<"!"<<endl;
    Sleep(3000);
    cout<<"Press enter to sign out"<<endl;
    system("PAUSE");
    system("CLS");
}

void naEmployeeMenus(string name){
    cout<<"Welcome "<<name<<", here you can find how much you earn per week, every week they will reset back to zero."<<endl;

    int nahours;
    double nawage, naearned;

        cout<<"Please enter your hours worked this week: ";
        cin>>nahours;

        cout<<"Please enter your current wage: $";
        cin>>nawage;

        naearned=nawage*nahours;
        cout<<"This week, you've made $"<<naearned<<"!"<<endl;
        Sleep(3000);
    cout<<"Press enter to sign out"<<endl;
    system("PAUSE");
    system("CLS");
}

void goodbyeMessage()
{
    cout<<"An integer entered is not in the database. Have a nice day!"<<endl;
}

employees::employees()
{
    string name, username, password;
    int n;
    char yesNo;
    double wage, earned;

system("CLS");

    cout<<"    _ _  __    _ _  __     _ _  __    _ _  __    _ _  __    _ _  __"<<endl;
    cout<<"   ( | )/_/   ( | )/_/    ( | )/_/   ( | )/_/   ( | )/_/   ( | )/_/"<<endl;
    cout<<"__( >O< )  __( >O< )   __( >O< )  __( >O< )  __( >O< )  __( >O< )"<<endl;
    cout<<"\\_\\(_|_)   \\_\\(_|_)    \\_\\(_|_)   \\_\\(_|_)   \\_\\(_|_)   \\_\\(_|_)"<<endl;
    cout<<"    _ _  __                                                 _ _  __"<<endl;
    cout<<"   ( | )/_/                                                ( | )/_/"<<endl;
    cout<<"__( >O< )                                               __( >O< )"<<endl;
    cout<<"\\_\\(_|_)                   EMPLOYEE                     \\_\\(_|_)"<<endl;
    cout<<"    _ _  __                 LOG IN                       _ _  __"<<endl;
    cout<<"   ( | )/_/                                                ( | )/_/"<<endl;
    cout<<"__( >O< )                                               __( >O< )"<<endl;
    cout<<"\\_\\(_|_)                                                \\_\\(_|_)"<<endl;
    cout<<"    _ _  __    _ _  __     _ _  __    _ _  __    _ _  __    _ _  __"<<endl;
    cout<<"   ( | )/_/   ( | )/_/    ( | )/_/   ( | )/_/   ( | )/_/   ( | )/_/"<<endl;
    cout<<"__( >O< )  __( >O< )   __( >O< )  __( >O< )   _( >O< )  __( >O< )"<<endl;
    cout<<"\\_\\(_|_)   \\_\\(_|_)    \\_\\(_|_)   \\_\\(_|_)   \\_\\(_|_)   \\_\\(_|_)"<<endl;

    cout<<"\n\nPlease input 1(employee login) or 2(administration login): ";
    cin>>n;

    system("PAUSE");
    system("CLS");

    if (n==1)
    {
        cout<<"Would you like to create an account? y/n"<<endl;
        cin>>yesNo;
        if (yesNo=='y'||yesNo=='Y')
        {
            cout<<"\nPlease enter your name: ";
            cin>>name;

            cout<<"\nPlease enter the username you would like to use as all numbers: ";
            cin>>username;

            cout<<"\nEnter the password you would like to use: ";
            cin>>password;

            Sleep(3000);


            cout<<"Welcome to the family "<<name<<endl;
            Sleep(1000);
            system("PAUSE");
            system("CLS");
        }
        int strawberry=0;
while (strawberry==0){


            cout<<"Please enter your username given from the list\n"<<endl;
            cout<<"Emily - e375920"<<endl; //place holders
            cout<<"Sonic - gottagofast"<<endl;
            cout<<"Rebecca - r293582"<<endl;
            cout<<"Daniel - d482947"<<endl;
            cout<<"Enter 'end' as your username to stop"<<endl;
            if (yesNo=='y'||yesNo=='Y')   // If the user inputted a custom account, it will be shown, otherwise it wont be seen
            {
                cout<<name<<" - "<<username<<endl;
            }

                string userSelect, passSelect;

                cout<<"\n\nEnter Username: ";
                cin>>userSelect;

                cout<<"\nEnter Password: ";
                cin>>passSelect;

                if (userSelect=="e375920" && passSelect=="may2004")
                {
                    cout<<"\nWelcome, Emily"<<endl;
                    emEmployeeMenus();
                    Sleep(1000);
                    system("PAUSE");
                    system("CLS");
                }
                else if (userSelect=="gottagofast"&&passSelect=="tails1992")
                {
                    cout<<"\nWelcome, Sonic"<<endl;
                    soEmployeeMenus();
                    Sleep(1000);
                    system("PAUSE");
                    system("CLS");
                }
                else if (userSelect=="r293582"&&passSelect=="cheetoes")
                {
                    cout<<"\nWelcome, Rebecca"<<endl;
                    reEmployeeMenus();
                    Sleep(1000);
                    system("PAUSE");
                    system("CLS");
                }
                else if (userSelect=="d482947"&&passSelect=="phanfan")
                {
                    cout<<"\nWelcome, Daniel"<<endl;
                    daEmployeeMenus();
                    Sleep(1000);
                    system("PAUSE");
                    system("CLS");
                } //gives each employee their own menu to go through
                else if (userSelect==username&&passSelect==password)
                {
                    cout<<"\nWelcome, "<<name<<endl;
                    naEmployeeMenus(name);
                    Sleep(1000);
                    system("PAUSE");
                    system("CLS");
                }
                else if (userSelect=="end")
                    strawberry=1;
                else
                {
                    cout<<"Sorry! Something went wrong. Try again later."<<endl;
                }
}
    }
    else if (n==2)
    {
        string user, pass;

        cout<<"Welcome Administrator, please enter your username and password."<<endl;

        cout<<"Username: ";
        cin>>user;

        cout<<"Password: ";
        cin>>pass;

        if (user=="delilahngu"&&pass=="cheese")
        {
            cout<<"Welcome Delilah!\n"<<endl;
            cout<<"SAY CHEEEEESE"<<endl;
        }
        else if (user=="gurnoorsleg"&&pass=="AHHHHHH")
        {
            cout<<"Welcome Gurnoor!\n"<<endl;
            cout<<"die"<<endl;
        }
        else
        {
            cout<<"Incorrect user or password, you are not an administrator."<<endl;
        }
    }
    else
    {
        goodbyeMessage();
    }
}
