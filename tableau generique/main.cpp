
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <stdlib.h>

#include "tableauD.h"
int main (void){
	TableauD <int,3> t1;
	TableauD <double,15> t2;
	
	std::cout << "\n ------------ T1 ----------" << std::endl; 
	for(int i=0; i<=20 ;i++){
		t1.ajouter(rand);
	}
	std::cout << t1[0] << std::endl;
	std::cout << t1[1] << std::endl;
	std::cout << t1[2] << std::endl;
	std::cout << t1[3] << std::endl;
	std::cout << t1[24] << std::endl;
	std::cout << t1[25] << std::endl;
	
	std::cout << "\n ------------ T2 ----------" << std::endl;
	for(int i=0; i<=20 ;i++){
		t2.ajouter(rand);
	}
	std::cout << t2[0] << std::endl;
	std::cout << t2[1] << std::endl;
	std::cout << t2[2] << std::endl;
	std::cout << t2[3] << std::endl;
	std::cout << t2[24] << std::endl;
	std::cout << t2[25] << std::endl;
	
	/*
	std::cout << "\n ------------ T3 ----------" << std::endl; 
	TableauD <double,15> t3(t2);
	std::cout << t3[0] << std::endl;
	std::cout << t3[1] << std::endl;
	std::cout << t3[2] << std::endl;
	std::cout << t3[3] << std::endl;
	std::cout << t3[24] << std::endl;
	std::cout << t3[25] << std::endl;
	*/
	
	
}
