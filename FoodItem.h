#ifndef FOODITEM_H
#define FOODITEM_H
#include <string>
using namespace std;

class FoodItem{
    public:
    //Overloaded Constructor Prototype:
    FoodItem(string name, double calorie, double fat, double sugar, double protein, double sodium);
    //Empty Constructor Prototype:
    FoodItem();

    //Accessors and Mutators Prototypes
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
    FoodItem operator+(FoodItem foodItem);
    void print();
    
    private:
        string name;
        double calorie;
        double fat;
        double sugar;
        double protein;
        double sodium;
};

#endif