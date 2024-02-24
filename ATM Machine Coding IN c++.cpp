#include <iostream>
#include <stdlib.h>
using namespace std;
 
//GLOBAL VARIABLES
char menuInput;
int Balance=0;
int Deposit=0;
int Withdraw=0;
int userid;
int password;

void printIntrMenu();
void printMainMenu();
void start();
void login();
void createAccount();
int main()
{
system("cls");
cout<<"Hi! Welcome to UBL ATM Machine'"<<endl;
cout<<endl;
system("pause");
start();
}
void printIntroMenu()
{
system("cls");
cout<<"\nPlease! Select an option from the menu below"<<endl<<endl;
cout<<"\nL-Login\n\nC-Create Account\n\nQ-Quit\n"<<endl;
cin>>menuInput;
switch(menuInput)
{
case'L':case'l':
system("cls");
login();
break;
case'C':case'c':
system("cls");
createAccount();
break;
case'Q':case'q':
exit(0);
default:
system("cls");
cout<<"Invalid Input ";
system("pause");
main();
break;
}
}
void printMainMenu()
{

cout<<"\nD-Deposit Money\n\nW-Withdraw Money\n\nR-Requist Balance\n\nQ-Quit\n"<<endl;
cin>>menuInput;
switch(menuInput)
{
case'D':case'd':
system("cls");
cout<<"Enter Aount: ";
cin>>Deposit;
Balance+=Deposit;
cout<<Deposit<<" Amount Deposited!! "<<endl;
system("pause");
system("cls");
printMainMenu();
break;
case'W':case'w':
cout<<"Enter Amount: ";
cin>>Withdraw;
if(Withdraw>Balance)
{
cout<<"Sorry! Insuffecient Balance! Please Deposit Some Amount"<<endl;
system("pause");
main();
}
else
{
Balance=Balance-Withdraw;
cout<<"Amount Withdrawn!! "<<endl;
system("pause");
system("cls");
printMainMenu();
}
case'R':case'r':
system("cls");
cout<<"Your Balance is: "<<Balance<<endl;
system("pause");
printMainMenu();
main();
case'Q':case'q':
exit(0);
default:
system("cls");
cout<<"Invalid Input!! "<<endl;
system("pause");
break;
}
}
void start()
{
printIntroMenu();
}

void createAccount()
{
cout<<"Enter User ID: ";
cin>>userid;
cout<<"Enter Password: ";
cin>>password;
cout<<"Account Created Successfully!"<<endl<<endl<<endl;
system("pause");
main();
}
void login()
{
int tempId,tempPassword;
cout<<"Enter User ID: ";
cin>>tempId;
if(tempId==userid)
{
cout<<"Enter Password: ";
cin>>tempPassword;
if(tempPassword==password)
{
cout<<"Login Successful!"<<endl<<endl<<endl;
system("pause");
system("cls");
printMainMenu();
}
else
{
cout<<"Invalid Password"<<endl<<endl<<endl;
system("pause");
system("cls");
printIntroMenu();
}
}
else
{
cout<<"Invalid Id"<<endl<<endl<<endl;
system("pause");
system("cls");
printIntroMenu();
}
}
