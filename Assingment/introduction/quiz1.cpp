// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    // Customer's bill
    int adult_no;
    cout << "How may adults being served?" << endl;
    cin >> adult_no;

    // No of children being served
    int children_no;
    cout << "How may children being served?: " << endl;
    cin >> children_no;

    // cost of adult meal
    float adult_meal;
    cout << "The cost per adult meal: " << endl;
    cin >> adult_meal;

    // 4 . cost per child meal
    float child_meal;
    cout << "The cost per child meal: " << endl;
    cin >> child_meal;

    // 5 . cost of dessert
    float dessert_cost;
    cout << "The cost of desert: " << endl;
    cin >> dessert_cost;

    // 6 . cost of dessert
    float room_fee;
    cout << "The room fee: " << endl;
    cin >> room_fee;

    // 7. percentage
    float percentage;
    cout << "The percentage: " << endl;
    cin >> percentage;

    // 8 . Deposit
    float deposit;
    cout << "The deposit: " << endl;
    cin >> deposit;

    //---------------------------------calculations -------------------------
    cout << "-----------------Your reciept is here----------- \n \n";
    // Cost of adult meals
    float adult_meal_total;
    adult_meal_total = adult_meal * adult_no;
    cout << "Total cost for adult meals:       $" << adult_meal_total << endl;

    // Cost of child meals
    float child_meals_total;
    child_meals_total = child_meal * children_no;
    cout << "Total cost for child meals:       $" << child_meals_total << endl;

    float total_people;
    total_people = children_no + adult_no;

    float desert;
    desert = total_people * dessert_cost;

    // Cost of dessert
    cout << "Total cost for desert:            $" << desert << endl;

    // Cost of food
    float food_cost;
    food_cost= child_meals_total + desert + adult_meal_total;
    cout << "Total food cost:                  $" << food_cost << endl;

    // Cost of tips and tax
    double tax;
    tax = percentage * food_cost;
    cout << "Total tips and tax:               $" << tax << endl;

    // Cost of room fee
    cout << "Plus room fee:                    $" << room_fee << endl;

    // Less deposit
    cout << "Less deposit:                     $" << deposit << endl;

    double balance;
    balance = food_cost + tax + room_fee - deposit;

    cout << "\n \n \n The Balance:                   " << balance << endl;

    return 0;
}