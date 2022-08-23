#include <bits/stdc++.h>
#include "classes/profile.h"
#include "classes/product.h"

using namespace std;

int main()
{
    Profile p1;

    cout << "First Name : ";
    cin >> p1.fName;
    cout << "Last Name : ";
    cin >> p1.lName;
    cout << "Email : ";
    cin >> p1.email;
    cout << "Age  : ";
    cin >> p1.age;
    cout << "ID : ";
    cin >> p1.id;

    ofstream wFile("data/profiles.txt");

    wFile << "First Name : " << p1.fName << endl;
    wFile << "Last Name : " << p1.lName << endl;
    wFile << "Age : " << p1.age << endl;
    wFile << "ID : " << p1.id << endl;
    wFile << "Email : " << p1.email << endl;

    Product pr1;

    cin >> pr1.productName >> pr1.productID;

    ofstream wfile("data/productList.txt");

    wfile << "ID : " << pr1.productID << endl
          << "Name : " << pr1.productName;
}