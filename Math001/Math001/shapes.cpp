#include "shapes.h"
#include <iostream>
using namespace std;

namespace shapes
{
		Shape::Shape()
		{
		}

		Shape::Shape(Point SP)
		{
				startPoint.x = SP.x;
				startPoint.y = SP.y;
		}

		void Shape::setStartPoint(Point SP)
		{
				this->startPoint.x = SP.x;
				this->startPoint.y = SP.y;
		}

		Point Shape::getStartPoint()
		{
				return this->startPoint;
		}



		Rect::Rect()
		{
		}

		Rect::Rect(Point SP, double width, double height)
		{
				
				this->startPoint.x = SP.x;
				this->startPoint.y = SP.y;
				
				this->width = width;
				this->height = height;

		}


		Circle::Circle()
		{
		}

		Circle::Circle(Point SP, double r)
		{
				this->startPoint.x = SP.x;
				this->startPoint.y = SP.y;

				this->radius = r;
				

		}
}
