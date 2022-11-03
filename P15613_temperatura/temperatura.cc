/* Universidad de La Laguna
Escuela Superior de Ingeniería y Tecnología
Grado en Ingeniería Informática
Informática Básica

@author Ian Correa Santos
@date Oct 27 2021
@brief Dependiendo de la temperatura indica una frase u otra
Jutge problem P15613
*/

#include <iostream>

int main() {

 int temperatura{0};
 std::cin >> temperatura;
 if (temperatura > 30){
   if (temperatura >= 100) {
      std::cout << "it's hot\nwater would boil" << std::endl;
      return 0;
   }
   std::cout << "it's hot" << std::endl;
   return 0;
   }
   else if (temperatura < 10) {
      if (temperatura <= 10){
         std::cout << "it's cold\nwater would freeze" << std::endl;
         return 0;
      }
      std::cout << "it's cold" << std::endl;
  }
  else {
  std::cout << "it's ok" << std::endl;
  }
}
