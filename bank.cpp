#include <iostream>
#include <vector>
using namespace std;

class Account {
    private:
        string account_name;
        double balance;
        bool is_credit;
    public:
        string get_name() {
            return account_name;
        }
        double get_balance() {
            return balance;
        }
        bool get_credit() {
            return is_credit;
        }
        void get_info(string);
};

class Bank {
    vector<Account> accounts;
    public:
    void create_account(Account);
    void remove_account();
    void transaction();
    bool verify_account(string);
    int get_account_position(string);
    
    void info();
};

void Account::get_info(string name) {
    string yn;
    account_name = name;
    cin >> yn;
    if ( yn == "y" ) {
        is_credit;
    }
    else {
        !is_credit;
    }
}

bool Bank::verify_account(string name) {
    //Verifying if account already exists.
    //For loop and if i stops before certain point account exists.
}

void Bank::create_account(Account account) {
    accounts.push_back(account);
}

void Bank::info() {
    for ( int i=0 ; i < 4 ; i++ ) {
        cout << accounts[i].get_name() << endl;
    }
}

int main() {
    string first_input;
    Bank bank;
    
    while ( cin >> first_input) {
       
        if ( first_input == "c" ) {
            Account account;
            string name;
            cin >> name;
            
            bool do_continue = bank.verify_account(name);
            account.get_info(name);
            bank.create_account(account);
        }
        else if (first_input == "t") {
            //bank.transaction();
        }
        else if (first_input == "r") {
            //bank.remove_account(); 
        }
    }
    
    bank.info(); 
    return 0;
}
