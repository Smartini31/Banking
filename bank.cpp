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
        void constructor( string, bool );
};

class Bank {
    vector<Account> accounts;
    public:
    void create_account(Account);
    void remove_account();
    void transaction();
    bool verify_account(string);
    int get_account_position(string);
    
    int get_size();
};

void Account::constructor(string name, bool credit) {
    is_credit = credit;
    account_name = name;
    balance = 0;
}

bool Bank::verify_account(string name) {
    for ( int i=0 ; i<=accounts.size() ; i++ ) {
        if ( accounts[i].get_name() == name ) {
                return true;
        }
    }
    return false;
}

void Bank::create_account(Account account) {
    accounts.push_back(account);
}

int Bank::get_size() {
    return accounts.size();
}

int main() {
    string first_input;
    int line = 0
    Bank bank;
    
    while ( cin >> first_input) {
        line++;
        if ( first_input == "c" ) {
            Account account;
            string name, yn;
            bool is_credit;
            
            cin >> name >> yn;
            if ( yn == "y" ) {
                is_credit = true;
            } else {
                is_credit = false;
            }
            bool do_continue = bank.verify_account (name );
            if ( do_continue ) { 
                account.constructor( name, is_credit);
                bank.create_account( account );
            }
            
        }
        else if (first_input == "t") {
            //bank.transaction();
        }
        else if (first_input == "r") {
            //bank.remove_account(); 
        }
    }
    
    cout << bank.get_size() << endl;
    return 0;
}
