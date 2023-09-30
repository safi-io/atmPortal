#include <iostream>
using namespace std;
int choice;
double balance = 100;

void menu() {
    cout<<endl<<"\t*****MENU*****"<<endl;
    cout<<"\t1. Balance Check"<<endl;
    cout<<"\t2. Deposit Cash"<<endl;
    cout<<"\t3. Withdraw Cash"<<endl;
    cout<<"\t4. Exit"<<endl;
    cout<<"\t**************"<<endl;
}

void wholeBank() {
    double balance = 100;
    do {
    menu();
    cin>>choice;
    switch (choice){
        case 1:
        system("CLS");
        cout<<"Your current balance is: "<<balance<<"$";
        
        break;

        case 2:
        system("CLS");
        cout<<"Add the Amount you want to deposit : \n";
        double deposit;
        cin>>deposit;
        balance += deposit;
        cout<<"Your new balance is: "<<balance<<"$";
        break;

        case 3:
        system("CLS");
        cout<<"Add the Amount you want to withdraw : \n";
        double withdraw;
        cin>>withdraw;
        if (balance >=withdraw) {
            balance -= withdraw;
            cout<<"Your new balance is: "<<balance<<"$";
        }
        else {
            cout<<"Not sufficient funds available"<<endl;
            cout<<"Your current balance is: "<<balance<<"$";
        }
        break;

        case 4:
        system("CLS");
        cout<<"*****Exited Successfully*****";
        exit(0);
        break;

        default:
        system("CLS");
        cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }
    }while(choice != 4);
}

int main() {
    double mobileNum;
    double atmPin;
    cout << "Welcome to ATM Portal" << endl;
    cout << "Enter your mobile number:"<<endl;
    cin >> mobileNum;
    cout << "Enter your PIN:"<<endl;
    cin >> atmPin;
    system("CLS");
    if (mobileNum == 6360228 && atmPin == 3344)
    {
        cout << "You are successfully logged into the bank!" << endl;
        wholeBank();
    }
    else
    {
        cout << "You entered wrong details!" <<endl;
    } 
    return 0;
}
