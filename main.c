#include "car.h"



int main()
{
	car c1;

	c1.Set_Maker("Honda");
	c1.Set_Model(2018);
	printf("%s\n", c1.Get_Maker());
	printf("%i\n", c1.Get_Model());

	return (0);
}
