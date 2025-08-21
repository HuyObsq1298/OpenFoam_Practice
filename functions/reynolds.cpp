#include<iostream>
#include<string>
#include<cmath>

using namespace std;

double reynold_calc (double rho, double U, double L, double miu){
	double Re;
	Re = rho * U * L /miu;
	return Re;
}

int main()
{
	float rho,U,L,miu,Re;

	
	cout << "input density" << endl;
	cin >> rho;

	cout << "input velocity (m/s)" << endl;
	cin >> U;

	cout << "input characteristic length (m)" << endl;
	cin >> L;

	cout << "input dynamic viscosity in SI unit " << endl;
	cin >> miu;


	Re = reynold_calc(rho,U,L,miu);
	cout << "The reynold number is: " << Re << endl;
	
	
	
	
	return 0;

}

