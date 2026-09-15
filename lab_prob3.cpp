#include <iostream>
#include <string>
using namespace std;

class Account{
    int accountNumber;
    string customerName;
    float balance;
public:Account(){
        accountNumber = 0;
        customerName = "Unknown";
        balance = 0;}
    Account(int accNo, string name, float bal){
        accountNumber = accNo;
        customerName = name;
        balance = bal;}
    void Deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;}
    void Withdraw(float amount){
        if (amount <= balance){
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;}
        else{
            cout << "Insufficient balance!" << endl; }}
    void display(){
        cout << "Account Number : " << accountNumber << endl;
        cout << "Customer Name  : " << customerName << endl;
        cout << "Balance        : " << balance << endl;}
    friend void transfer(Account &a1, Account &a2, float amount);
    ~Account(){
        cout << "Account object destroyed for "
             << customerName << endl;}
};
void transfer(Account &a1, Account &a2, float amount){
    if (amount <= a1.balance){
        a1.balance -= amount;
        a2.balance += amount;
        cout << "\nTransfer Successful!" << endl;
        cout << "Transferred Amount: " << amount << endl;}
    else{
        cout << "\nTransfer Failed! Insufficient balance." << endl; }
}

int main(){
    Account a1;
    Account a2(101, "Ravi", 10000);
    Account a3(102, "Anu", 5000);
    cout << "Account 1 (Default Account)" << endl;
    cout << "---------------------------" << endl;
    a1.display();
    cout << "\nAccount 2" << endl;
    cout << "---------" << endl;
    a2.display();
    cout << "\nAccount 3" << endl;
    cout << "---------" << endl;
    a3.display();
    cout << "\nDeposit Operation" << endl;
    a2.Deposit(2000);
    a2.display();
    cout << "\nWithdraw Operation" << endl;
    a3.Withdraw(1000);
    a3.display();
    cout << "\nMoney Transfer" << endl;
    transfer(a2, a3, 3000);
    cout << "\nAfter Transfer - Account 2" << endl;
    a2.display();
    cout << "\nAfter Transfer - Account 3" << endl;
    a3.display();
    return 0;
}
