
#include <iostream>
#include <string>
#include<math.h>
using namespace std;


int main() {
    int males;
    cout << "Please input the number of males in class \n";
    cin >> males;
    
    int females;
    cout << "Please input the number of females in class \n";
    cin >> females;
    
    //finding the total number of students
    int total;
    total = males + females; 
    cout <<"Total students:" << total << "\n";
    
    //finding the women percentage
    double womenres;
    womenres = total * 100 ;
    womenres = females / womenres *10000;
    cout <<"Women percent :" << womenres << "%\n";
    
    cout<< "Men's percentage: " << 100 - womenres<< "%";

    
    return 0;
}