#ifndef VEHICLE_H
#define VEHICLE_H


struct Model
{
	char* name;
	char* description;
};
struct Brand
{
	char* name;
	char* description;
};
struct Vehicle
{
	const struct Brand* brand;
	const struct Model* model;
	int availability;
	double price;
};

void chooseVehicleMenu();
void chooseBrandMenu();
void vehicleDetailsMenu();


#endif