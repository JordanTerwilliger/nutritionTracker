#ifndef FOODITEM_H
#define FOODITEM_H
#include <string>
using namespace std;

class FoodItem{
    public:
    string getName();
    void setName(string name);
    double getCalorie();
    void setCalorie(double calorie);
    double getFat();
    void setFat(double fat);
    double getSugar();
    void setSugar(double sugar);
    double getProtein();
    void setProtein(double protein);
    double getSodium();
    void setSodium(double sodium);

    //Constructor
    FoodItem(string name, double calorie, double fat, double sugar, double protein, double sodium){
        this -> name = name;
        this -> calorie = calorie;
        this -> fat = fat;
        this -> sugar = sugar;
        this -> protein = protein;
        this -> sodium = sodium;
    }
    private:
        string name;
        double calorie;
        double fat;
        double sugar;
        double protein;
        double sodium;
        
        FoodItem operator+(FoodItem & other) const;
};

#endif