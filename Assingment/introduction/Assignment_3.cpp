// A new author is in the process of negotiating a contract for a new romance novel. The publisher is offering three options.
// In the first option, the author is paid $5,000 upon delivery of the final manuscript and $20,000 when the novel is
// published. In the second option, the author is paid 12.5% of the net price of the novel for each copy of the novel
// sold. In the third option, the author is paid 10% of the net price for the first 4000 copies sold, and 14% of the
// net price for the copies sold over 4000. The author has some idea about the number of copies that will be sold and
// would like to have an estimate of the royalties generated under each option. Write a program that prompts the author
// to enter the net price of each copy of the novel and the estimated number of copies that will be sold. The program
// then outputs the royalties under each option and the best option the author could choose.
// (Use appropriate named constants to store the special values such as royalties rates and fixed royalties.)

/*
3 options
    1. 5000 + 20000 = 25000
    2. 12% of net price of each copy sold ()
    3. 10% of first 4000 copies and 14% of the rest
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    float price_of_each;
    cout << "Write the net price of how much each copy is sold ? \n";
    cin >> price_of_each;

    int books_sold;
    cout << "Estimate the number of copies that will be sold ? \n";
    cin >> books_sold;

    cout << "Option one would give you -> $" << 20000 + 5000 << endl;

    // 12% of net price of each copy sold ()
    float second_option;
    second_option = books_sold * 0.12 * price_of_each;

    cout << "Option two would give you -> $" << second_option << endl;

    float net_profit = books_sold * price_of_each;

    // 3. 10% of first 4000 copies and 14% of the rest
    if (net_profit < 4000 || net_profit == 4000)
    {
        net_profit = books_sold * 0.1 * price_of_each;
    }
    else
    {
        net_profit = books_sold * 0.14 * price_of_each;
    }

    cout << "Option three would give you -> $" << net_profit << endl << endl << endl;


    //---------------Best option to choose-------------

    if( 25000 > second_option &&  25000 > net_profit ) {
        cout << "Option 1 is the best option" << endl;
    } else if (second_option > 25000 && second_option > net_profit) {
        cout << "Option 2 is the best option" << endl;
    } else {
        cout << "Option 3 is the best option" << endl;
    }
    return 0;
}