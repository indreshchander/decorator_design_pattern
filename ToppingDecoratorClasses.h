#ifndef TOPPINGS_HEADER_FILE
#define TOPPINGS_HEADER_FILE

#include <iostream>
#include "PizzaClasses.h"

class ToppingDecorator:public Pizza
{
   public:
     ToppingDecorator(){}

     ~ToppingDecorator(){}

     virtual std::string getDescription() = 0;
     virtual float cost() = 0;
};

class cheese:public ToppingDecorator{
   public:
     Pizza *pizza;

     cheese(Pizza *pizzaObj){
        this->pizza = pizzaObj;
     } 
     
     std::string getDescription(){
        return pizza->getDescription() + " + " + "Cheese(30)"; 
     }
                          
     float cost(){
        return 30 + pizza->cost();//decorator cost + decorated pizza cost
     }
};

class chickenChunks:public ToppingDecorator{
   public:
     Pizza *pizza;

     chickenChunks(Pizza *pizzaObj){
        this->pizza = pizzaObj;
     }

     std::string getDescription(){
        return pizza->getDescription() + " + " + "Chicken Chunks(70)"; 
     }

     float cost(){
        return 70 + pizza->cost();//decorator cost + decorated pizza cost
     }
};

class paneerCubes:public ToppingDecorator{
   public:
     Pizza *pizza;

     paneerCubes(Pizza *pizzaObj){
        this->pizza = pizzaObj;
     }

     std::string getDescription(){
        return pizza->getDescription() + " + " + "Paneer Cubes(40)"; 
     }

     float cost(){
        return 40 + pizza->cost();//decorator cost + decorated pizza cost
     }
};

#endif
