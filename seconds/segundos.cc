  // Universidad de La Laguna
  //Escuela Superior de Ingeniería y Tecnología
  //Grado en Ingeniería Informática
  //Informática Básica
 
  //@author Ian Correa Santos
  //@date Oct 27 2021
  //@brief Calcula los segundos totales dependiendo de los dias, horas, meses, años y segundos
         //Jutge problem P70955


#include <iostream> 

int main() {

	int years(0),days(0),hours(0),minutes(0),seconds(0);
	std::cin >> years >> days >> hours >> minutes >> seconds;
	int total_seconds(0);
	total_seconds = seconds + minutes * 60 + hours * 3600 + days * 86400 + years * 31536000;
 	std::cout << total_seconds << std::endl;
	return 0;
}
