#ifndef PIZZA_HEADER_FILE
#define PIZZA_HEADER_FILE

#include <iostream>
#include <string>

class Pizza
{
  public:
    Pizza(std::string desc, int price){
       this->description = desc;
       this->price = price;
    }
 
    Pizza(){}

    virtual ~Pizza(){}

    virtual std::string getDescription(){
       return this->description + "(" + std::to_string(this->price) + ")";
    }

    virtual float cost(){
       return this->price;
    }

  private:
    std::string description;
    int  price;
};


class MargheritaPizza:public Pizza
{
   public:
     MargheritaPizza():Pizza("Margherita", 150){}
    ~MargheritaPizza(){}
};


class FarmhousePizza:public Pizza
{
   public:
     FarmhousePizza():Pizza("Farmhouse", 180){}
    ~FarmhousePizza(){}
};

#endif
