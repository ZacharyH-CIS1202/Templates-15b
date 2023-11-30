#ifndef _HALFTEMPLATE_H_
#define _HALFTEMPLATE_H_

#include <cmath>

template <typename T>
T half(T value)
{
	return (value / 2);
}


int half(int value)
{
	value = static_cast<int>(round(static_cast<double>(value) / 2));

	return value;
}

#endif // !_HALFTEMPLATE_H_