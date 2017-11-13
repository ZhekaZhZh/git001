#include "shapes.h"

using namespace std;
using namespace shapes;

int main()
{
		Point startRect1 = { 0.0, 0.0 };
		Point startRect2 = { 2.0, 5.0 };
		Point startCircl1 = { 4.0, 1.0 };
		//start.x = 0.0;
		//start.y = 0.0;
		//= { 0.0, 0.0 };

		Rect *rect1 = new Rect();
		rect1->setStartPoint(startRect1);
		rect1->height = 5.0;
		rect1->width = 10.0;

		Rect *rect2 = new Rect();
		rect2->setStartPoint(startRect2);
		rect2->height = 4.0;
		rect2->width = 6.0;

		Circle *circl1 = new Circle();
		circl1->setStartPoint(startCircl1);
		circl1->radius = 3.0;



		return 0;
}