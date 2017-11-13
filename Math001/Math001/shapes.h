#pragma once

namespace shapes
{

		typedef struct
		{
				double x;
				double y;
		} Point;


		class Shape
		{
		private:
				
		protected:
				

		public:
				Point startPoint;
				Shape();
				Shape(Point SP);

				void setStartPoint(Point SP);
				Point getStartPoint();


		};


		class Rect:public Shape
		{
		private:

		public:
				double width, height;
				Rect();
				Rect(Point SP, double w, double h);

				/*
				void setStartPoint(Point SP);
				Point getStartPoint();
				*/
		};


		class Circle :public Shape
		{
		private:

		public:
				double radius;
				Circle();
				Circle(Point SP, double r);

				/*
				void setStartPoint(Point SP);
				Point getStartPoint();
				*/
		};

}