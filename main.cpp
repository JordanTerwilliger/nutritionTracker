#include <iostream>
#include <vector>
#include "FoodItem.h"
using namespace std;


void prompt(){
    const int COUNT = 11;
    vector<FoodItem> foodItems = {};
    for (size_t i = 0; i < COUNT; i++){
        cout << i+1 << ". " << foodItems[i].getName;
    }
    
}

int main(){
    vector<FoodItem> menu = {FoodItem(menu.setName = "Apple", menu.setCalorie = 500)};

    return 0;
}