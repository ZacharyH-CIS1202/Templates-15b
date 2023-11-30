#include <cmath>
#include "Template(15b).h"

template <typename T>
T half(T value)
{
	return round((value / 2));
}

int half(int value)
{
	return round((value / 2));
}