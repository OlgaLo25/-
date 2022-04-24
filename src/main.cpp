#include "controller.h"



int main()
{
	database dbase = database();
	registration registerNew = registration();
	controller control(dbase,registerNew);
	control.addUser();
	
	return 0;
}