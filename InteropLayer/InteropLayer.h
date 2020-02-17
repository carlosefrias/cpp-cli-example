#pragma once
#include "../StaticLib1/NativeClass.h"

using namespace System;
using namespace native_namespace;


namespace InteropLayer 
{
	public ref class WrapperClass
	{
	public:
		double add(const double a, const double b)
		{
			NativeClass class_example;
			const double result = class_example.add(a, b);
			return result;
		}
	};
}
