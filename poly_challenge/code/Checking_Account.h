#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account: public Account {
    //friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);    
    //bool withdraw(double);
    //override, since in the account class this is declared as pure abs func
    //so we need to redefine here otherwise this class will also be abstract 
    virtual bool withdraw(double);
    // Inherits the Account::deposit method

    //virtual void 
};

#endif // _CHECKING_ACCOUNT_H_