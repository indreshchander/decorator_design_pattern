#include <iostream>
#include "PizzaClasses.h"
#include "ToppingDecoratorClasses.h"

int main()
{
  //ORDER: I need a Margherita pizza with chicken chunks and cheese.
  std::cout << ">> Order: I need a Margherita pizza with chicken chunks and cheese." << std::endl;

  std::cout << "  >>>> Preparing order" << std::endl;

  Pizza *pizza = new MargheritaPizza();
  std::cout << "       Pizza description:" << pizza->getDescription() << ", cost:" << pizza->cost() << "\n\n";

  std::cout << "       *** Adding chicken chunks to Margherita pizza" << "\n";
  pizza = new chickenChunks(pizza);
  std::cout << "       Pizza description:" << pizza->getDescription() << ", cost:" << pizza->cost() << "\n\n";
  
  std::cout << "       *** Adding cheese also to Margherita pizza" << "\n";
  pizza = new cheese(pizza);
  std::cout << "       Pizza description:" << pizza->getDescription() << ", cost:" << pizza->cost() << "\n\n";

  std::cout << "       >>>> Pizza is ready !!" << std::endl;

  return 1;
}
