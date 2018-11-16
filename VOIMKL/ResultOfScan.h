#ifndef ResultOfScan_H
#define ResultOfScan_H
#include "stadfx.h"


using namespace arma;

struct CVector {
	double x, y, z;
};

class CResultOfScan {
public:
	CResultOfScan(CVector coordinates, double vr, double time);
	CResultOfScan(dcolvec coordinates, double vr, double time);
	~CResultOfScan();
	CVector Coordinates;
	double detectionTime;
	double Vr;  // радиальная скорость
private:
	arma::dcolvec x = arma::zeros(3);
};
#endif ResultOfScan_H