#include "FoodItem.h"
#include <iostream>
using namespace std;
    string FoodItem::getName(){return name;}
    void FoodItem::setName(string name){this -> name = name;}
    double FoodItem::getCalorie(){return calorie;}
    void FoodItem::setCalorie(double calorie){this -> calorie = calorie;}
    double FoodItem::getFat(){return fat;}
    void FoodItem::setFat(double fat){this -> fat = fat;}
    double FoodItem::getSugar(){return sugar;}
    void FoodItem::setSugar(double sugar){this -> sugar = sugar;}
    double FoodItem::getProtein(){return protein;}
    void FoodItem::setProtein(double protein){this -> protein = protein;}
    double FoodItem::getSodium(){return sodium;}
    void FoodItem::setSodium(double sodium){this -> sodium = sodium;}

    string FoodItem::getName(){return name;}