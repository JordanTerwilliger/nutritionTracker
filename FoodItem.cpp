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
    void FoodItem::setSodiumUnit(string unit){sodiumUnit = unit;}
    string FoodItem::getSodiumUnit(){return sodiumUnit;}   
    FoodItem total();

    void FoodItem::print(){
        if (getSodium() < 1){
            setSodium(getSodium()*1000); //I want to keep everything in grams for calculations, but sodium is often expressed in milligrams
            setSodiumUnit("mg");         //so this if statement checks if the amount of sodium is > 1, and if true, it turns it into mg
            cout << name << ", Calories: " << calorie << " cal., Fat: " << fat << "g , Sugar: " << sugar << "g , Protein: " << protein << "g , Sodium: " << sodium << getSodiumUnit() << endl;
            setSodium(getSodium()/1000);
        }else{
            setSodiumUnit("g");
            cout << name << ", Calories: " << calorie << " cal., Fat: " << fat << "g , Sugar: " << sugar << "g , Protein: " << protein << "g , Sodium: " << sodium << getSodiumUnit() << endl;
        }
    }

    //Overloaded Operator for total
    FoodItem FoodItem::operator+(FoodItem total){
        return FoodItem(name, calorie + total.getCalorie(), fat + total.getFat(), sugar + total.getSugar(), protein + total.getProtein(), sodium + total.getSodium());
    }


