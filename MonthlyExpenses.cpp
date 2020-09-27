/*
Arifa Baksh
This program tracks monthly expenses
In edit
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Expenses
{
    private:
    double groceries;
    double clothes;
    double rent_or_mortage;
    double entertainment;
    double bills;
    double other;

    public:
    double setGroceries(double amount)
    {
        groceries = amount;
    }
    double setClothes(double amount)
    {
        clothes = amount;
    }
    double setRentorMortage(double amount)
    {
        rent_or_mortage = amount;
    }
    double setEntertainment(double amount)
    {
        entertainment = amount;
    }
    double setbills(double amount)
    {
        bills = amount;
    }
    double setOther(double amount)
    {
        other = amount;
    }
    void getExpenses() const
{
    ofstream myFile("example.txt");

    double Groceries;
    double Clothes;
    double Rent_or_Mortage;
    double Entertainment;
    double Bills;
    double Other;
    Expenses receipts;
 
    cout << "Groceries: " << endl;
    cin >> Groceries;
    myFile << Groceries;
    receipts.setGroceries(Groceries);
    cout << "Clothes: " << endl;
    cin >> Clothes;
    myFile << Clothes;
    receipts.setClothes(Clothes);
    cout << "Rent/Mortage: " << endl;
    cin >> Rent_or_Mortage;
    myFile << Rent_or_Mortage;
    receipts.setRentorMortage(Rent_or_Mortage);
    cout << "Entertainment: " << endl;
    cin >> Entertainment;
    myFile << Entertainment;
    receipts.setEntertainment(Entertainment);
    cout << "Bills: " << endl;
    cin >> Bills;
    myFile << Bills;
    receipts.setbills(Bills);
    cout << "Other: " << endl;
    cin >> Other;
    myFile << Other;
    receipts.setOther(Other);

    myFile.close();
}
};


int main() {
    Expenses August2020;
    
    return 0;
}
