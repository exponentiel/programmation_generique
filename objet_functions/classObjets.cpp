#include "classObjets.h"

 ObjetFonctions::ObjetFonctions(){
 	std::cout << "appel au construteur" << std::endl;
 	this->nbAppel = 0;
 }

 int ObjetFonctions::operator () (int val){
 	nbAppel++;
	return nbAppel*val;
 }
