#include <iostream>
using namespace std;

struct POINT
{
	double x, y;
};
struct TRIANGLE
{
	POINT Ver[3];
};
void inputPoint(POINT& P)
{
	cout << " + Coor X = ";
	cin >> P.x;
	cout << " + Coor Y = ";
	cin >> P.y;
}
void showPoint(POINT P)
{
	cout << "(" << P.x << "," << P.y << ")" << endl;
}
void gravCenter(TRIANGLE tg, POINT& center)
{
	center.x = (tg.Ver[0].x + tg.Ver[1].x + tg.Ver[2].x) / 3;
	center.y = (tg.Ver[0].y + tg.Ver[1].y + tg.Ver[2].y) / 3;
}
void inputTriangle(TRIANGLE& tg)
{
	cout << "Input the vertex of the triangle." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Vertex " << i + 1 << ":" << endl;
		inputPoint(tg.Ver[i]);
	}
}
int main()
{
	TRIANGLE tg; POINT M;
	inputTriangle(tg);
	gravCenter(tg, M);
	cout << "Gravity center: ";
	showPoint(M);
	return 0;
}