#include <iostream>
using namespace std;
namespace Data_2D
{
	int dX = 3, dY = 4;
	float Area;
}
namespace Data_3D
{
	float dX = 5, dY = 6, dZ = 7;
	float Volume;
	namespace Base
	{
		float Area, h;
	}
}
int main()
{
	using namespace Data_2D;
	Area = dX * dY;
	cout << "Data_2D::Area " << Area << endl;
	//-----------------------------------------------------------------------
	Data_3D::Base::Area = Data_3D::dX * Data_3D::dY;
	Data_3D::Volume = Data_3D::Base::Area * Data_3D::dZ;
	Data_3D::Base::h = (Data_3D::dX + Data_3D::dY) / 2;
	cout << "Data 3D: " << endl;
	cout << " Volume = " << Data_3D::Volume << endl;
	cout << " h = " << Data_3D::Base::h << endl << endl;
	
	system("pause");
	return 1;
}