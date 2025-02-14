#include <iostream>
#include <vector>
#include "FoodItem.h"
using namespace std;
vector<FoodItem> menu{ //Name, Calories(cal), Fat(g), Sugar(g), Protein(g), Sodium(g)
        FoodItem("Apple", 95, 0.3, 19, 0.5, 0.002),
        FoodItem("Chicken Breast (100g)", 165, 3.6, 0, 31, 0.074),
        FoodItem("Broccoli (100g)", 55, 0.6, 2.2, 3.7, 0.033),
        FoodItem("Cheeseburger", 303, 14, 6, 17, 0.518),
        FoodItem("Chocolate Bar (50g)", 270, 15, 24, 3, 0.042),
        FoodItem("Pizza Slice", 285, 10, 3.8, 12, 0.640),
        FoodItem("Banana", 105, 0.3, 14, 1.3, 0.001),
        FoodItem("Salmon (100g)", 208, 13, 0, 20, 0.059),
        FoodItem("French Fries (100g)", 312, 15, 0.3, 3.4, 0.210),
        FoodItem("Peanut Butter (2 tbsp)", 188, 16, 3, 8, 0.150)
};
void desc(){
    cout << "This app is a nutritional tracker. It allows you to enter the food you ate today, and find" << 
    " the total amount of calories, fats, sugars, proteins, and sodium you ingested.\n";
}

void options(){
    for (size_t i = 0; i < menu.size(); i++){
        cout << i+1 << ". " << menu[i].getName() << "\n";
    }
}

int main(){
    desc();
    int userSelection = 1;
    FoodItem total = FoodItem("Total", 0, 0, 0, 0, 0);
    while (true){
        options();
        cin >> userSelection;
            if (userSelection != 0){
                total = total + menu[userSelection-1];
                cout << "Selected " << menu[userSelection-1].getName() << "\n";
            }else if(userSelection == 0){break;}
        }
    
    total.print();
    system("pause");
    return 0;
}