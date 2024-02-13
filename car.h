#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class car
{
	private:
		string maker;
		int model;
		string color;

	public:
		void Set_Maker(string m);
		std:: string Get_Maker();
		void Set_Model(int m);
		int Get_Model();

		car();
		~car();
};

#endif // CAR_H
		
		
