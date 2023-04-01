#include<iostream>
using namespace std;

class user
{
private:
    string firstName;
    string lastName;
    int ordersNumber;    
public:
    string getName();
    user(string,string);
    ~user();
};

user::user(string firstName, string lastName)
{
    this->firstName=firstName;
    this->lastName=lastName;
    ordersNumber=0;
}

user::~user()
{
}

string user::getName(){
    return this->firstName + " " + this->lastName;
}

int main(){
    user appUser = user("John","Doe");
    cout<<"This is [[food ordering app]]; Hello "<<appUser.getName();
}


class Product
{
    public:
        string productName;
        float productPrice;
    
};

