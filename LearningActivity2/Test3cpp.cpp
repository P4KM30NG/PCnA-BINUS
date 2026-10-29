#include <iostream>
using namespace std;

int main(){
    int savings;
    float interestRate;
    cout << "Savings: "; cin >> savings;
    cout << "Interest Rate: "; cin >> interestRate;
    cout << "Your Saving: " << savings << "\n";
        float interest  = savings * interestRate/100;
    cout << "Interest: " << interest <<  "\n";
        float total =  interest + savings;
    cout << "Total with interest: " << total << "\n";

    char fullname[255];
    cout << "Name: "; cin.getline(fullname,255);
    cin.ignore();
    cout << "Hello:" << fullname << "\n";

    return 0;

}