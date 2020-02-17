#pragma once
namespace MyMath
{
	class Math
	{ 
	public:
		const double pi = 3.14159;

		static double add(const double a, const double b) { return a + b; }

		static double square(const double a) { return a * a; }

	};
}
