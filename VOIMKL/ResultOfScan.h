#ifndef ResultOfScan_H
#define ResultOfScan_H

struct CVector {
	double x, y, z;
};

class CResultOfScan {
public:
	CResultOfScan(CVector coordinates, double vr, double time);
	~CResultOfScan();
	CVector Coordinates;
	double detectionTime;
	double Vr;  // радиальная скорость
private:
};
#endif ResultOfScan_H