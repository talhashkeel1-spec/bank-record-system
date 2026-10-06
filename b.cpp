#include <iostream>
#include<string>
using namespace std;

class bankaccount{
    private:
    double balance;
    public:
    bankaccount(){
        balance=5000;
    }
    void deposit(double amount){
        if(amount>0){
        balance+=amount;
        }
    }

    void withdraw(double amount){
        if (amount >balance){
            cout<<"Insufficient balance";
        }
        else{
            balance-=amount;
        }
        
 
    }
    void getbalance(){
            cout<<balance;
        };
};

int main(){
    bankaccount b1;
    b1.deposit(3000);
    b1.withdraw(1000);
    b1.getbalance();


}
