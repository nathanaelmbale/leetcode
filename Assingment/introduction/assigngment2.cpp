// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int loan_payment,insurance,gas ,oil ,tires ,maintenance;
    cout<< "Please input your  loan payment, insurance, gas, oil, tires, and maintenance per day  In the format- \n __ __ __ __ __ __ __  \n";
    
    // Taking input from the user
    cin >> loan_payment >> insurance >> gas >> oil >> tires >> maintenance;
    
    // Output the values monthly
    loan_payment = loan_payment * 31;
    cout << "Monthly payment \n Loan Payment: " << loan_payment << endl;
    
    insurance = insurance * 31;
    cout << "Insurance: " << insurance << endl;
    
    gas = gas * 31;
    cout << "Gas: " << gas << endl;
    
    oil = oil * 31;
    cout << "Oil: " << oil << endl;
    
    tires = tires * 31;
    cout << "Tires: " << tires << endl;
    
    maintenance = maintenance * 31;
    cout << "Maintenance: " << maintenance << endl;
    
        // Output the values yearly
    loan_payment = loan_payment * 12;
    cout << " \nYearly payment \nLoan Payment: " << loan_payment << endl;
    
    insurance = insurance * 12;
    cout << "Insurance: " << insurance << endl;
    
    gas = gas * 12;
    cout << "Gas: " << gas << endl;
    
    oil = oil * 12;
    cout << "Oil: " << oil << endl;
    
    tires = tires * 12;
    cout << "Tires: " << tires << endl;
    
    maintenance = maintenance * 12;
    cout << "Maintenance: " << maintenance << endl;

    return 0;
}