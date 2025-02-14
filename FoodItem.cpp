#include "FoodItem.h"
#include <iostream>
#include <vector>
using namespace std;
//Overloaded Constructor
FoodItem::FoodItem(string name, double calorie, double fat, double sugar, double protein, double sodium){
    this -> name = name;
    this -> calorie = calorie;
    this -> fat = fat;
    this -> sugar = sugar;
    this -> protein = protein;
    this -> sodium = sodium;
}
//Empty Contstructor
FoodItem::FoodItem(){
    name = " ";
    calorie = 0;
    fat = 0;
    sugar = 0;
    protein = 0;
    sodium = 0;
}
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
    FoodItem total();
    void FoodItem::print(){
        cout << name << ", Calories: " << calorie << ", Fat: " << fat << ", Sugar: " << sugar << ", Protein: " << protein << ", Sodium: " << sodium << endl;
    }

    //Overloaded Operator for total
    FoodItem FoodItem::operator+(FoodItem total){
        return FoodItem(name, calorie + total.getCalorie(), fat + total.getFat(), sugar + total.getSugar(), protein + total.getProtein(), sodium + total.getSodium());
    }


