#include "ResultOfScan.h"

CResultOfScan::CResultOfScan(CVector coordinates, double vr, double time)
{
	this->Coordinates.x = coordinates.x;
	this->Coordinates.y = coordinates.y;
	this->Coordinates.z = coordinates.z;
	this->Vr = vr;
	detectionTime = time;
}

CResultOfScan::CResultOfScan(dcolvec coordinates, double vr, double time)
{
	this->measurement(0) = coordinates(0);
	this->measurement(1) = coordinates(1);
	this->measurement(2) = coordinates(2);
	//this->x = coordinates;

	this->Vr = vr;
	this->detectionTime = time;
}

CResultOfScan::~CResultOfScan()
{}