//
//  main.cpp
//  preferred customer
//
//  Created by dakota townsend on 5/8/18.
//  Copyright © 2018 dakota townsend. All rights reserved.
//

#include <iostream>
#include <iostream>
//#include "stdafx.h"
#include <string>
using namespace std;

class PersonData {
    
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    long zip;
    long phone;
    
public:
    PersonData(){
        lastName = "";
        firstName = "";
        address = "";
        city = "";
        state = "";
        zip = 0;
        phone = 0;
    }
    
    void setLastName(string);
    void setFirstName(string);
    void setAddress(string);
    void setCity(string);
    void setState(string);
    void setZip(long);
    void setPhone(long);
    
    string getLastName();
    string getFirstName();
    string getAddress();
    string getCity();
    string getState();
    long getZip();
    long getPhone();
    
};

void PersonData::setLastName(string lName) {
    lastName = lName;
}
void PersonData::setFirstName(string fName) {
    firstName = fName;
}
void PersonData::setAddress(string aName) {
    address = aName;
}
void PersonData::setCity(string cName) {
    city = cName;
}
void PersonData::setState(string sName) {
    state = sName;
}
void PersonData::setZip(long zName) {
    zip = zName;
}
void PersonData::setPhone(long pName) {
    phone = pName;
}

string PersonData::getLastName() {
    return lastName;
}
string PersonData::getFirstName() {
    return firstName;
}
string PersonData::getAddress() {
    return address;
}
string PersonData::getCity() {
    return city;
}
string PersonData::getState() {
    return state;
}
long PersonData::getZip() {
    return zip;
}
long PersonData::getPhone() {
    return phone;
}

class CustomerData : public PersonData {
    
private:
    int customerNumber;
    bool mailingList;
    
public:
    CustomerData() {
        customerNumber = 0;
        mailingList = false;
    }
    
    void setCustomerNum(int);
    void setMailingList(bool);
    
    int getCustomerNum();
    bool getMailingList();
    
};

void CustomerData::setCustomerNum(int number) {
    customerNumber = number;
}
void CustomerData::setMailingList(bool list) {
    mailingList = list;
}

int CustomerData::getCustomerNum() {
    return customerNumber;
}
bool CustomerData::getMailingList() {
    return mailingList;
}

class PreferredCustomer: public CustomerData {
    
private:
    double purchasesAmount;
    double discountLevel;
    
public:
    PreferredCustomer() {
        purchasesAmount = 0;
        discountLevel = 0;
    }
    
    void setPurchasesAmount();
    void setDiscountLevel();
    
    double getPurchasesAmount();
    double getDiscountLevel();
};
void PreferredCustomer::setPurchasesAmount() {
    double amount;
    cout << "enter purchase amount: ";
    cin >> amount;
    purchasesAmount = amount;
}
void PreferredCustomer::setDiscountLevel() {
    if (purchasesAmount >= 500 && purchasesAmount < 1000)
        discountLevel = 5;
    else if (purchasesAmount >= 100 && purchasesAmount < 1500)
        discountLevel = 6;
    else if(purchasesAmount >= 1500 && purchasesAmount < 2000)
        discountLevel = 7;
    else if (purchasesAmount >= 2000)
        discountLevel = 10;
}
double PreferredCustomer::getPurchasesAmount() {
    return purchasesAmount;
}
double PreferredCustomer::getDiscountLevel() {
    return discountLevel;
}

int main() {
    PreferredCustomer customer1;
    string name, addr, city, state;
    int custId;
    long zCode, phn;
    
    cout << " enter the customers first name\n";
    cin >> name;
    customer1.setFirstName(name);
    cout << "enter the customers last name\n";
    cin >> name;
    customer1.setLastName(name);
    cout << "enter address\n";
    cin >> addr;
    customer1.setAddress(addr);
    cout << "enter city\n";
    cin >> city;
    customer1.setCity(city);
    cout << "enter state\n";
    cin >> state;
    customer1.setState(state);
    cout << "eneter zip code\n";
    cin >> zCode;
    customer1.setZip(zCode);
    cout << "enter customer id\n";
    cin >> custId;
    customer1.setCustomerNum(custId);
    cout << "enter phone number\n";
    cin >> phn;
    customer1.setPhone(phn);
    
    customer1.setMailingList(true);
    customer1.setPurchasesAmount();
    customer1.setDiscountLevel();
    
    cout << "\t--- customer data---\t\n";
    cout << "customer name: " << customer1.getFirstName() << " " << customer1.getLastName() << "\n";
    cout << "customer number: " << customer1.getCustomerNum() << "\n";
    cout << "customer address: " << customer1.getAddress() << "\n";
    cout << "city: " << customer1.getCity() << "\n";
    cout << "state: " << customer1.getState() << "\n";
    cout << "zip code: " << customer1.getZip() << "\n";
    cout << "phone number: " << customer1.getPhone() << "\n";
    cout << "mailing list: " << customer1.getMailingList() << "\n";
    cout << "purchase amount: " << customer1.getPurchasesAmount() << "\n";
    cout << "discount on every item: " << customer1.getDiscountLevel() << "\n";
    
    system("pause");
};
