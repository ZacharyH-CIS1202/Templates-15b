#ifndef _HALFTEMPLATE_H_
#define _HALFTEMPLATE_H_

#include <cmath>

/*************************************************************************************************************
Created a template using T to make the determination of what the value type is. For double and float,
it will use the initial templated function which returns half the value of the double or float. Then created
a second overloaded half function for int's that will static cast the variable 'value' to double so it can
complete the round() function and then static_cast it back to its original int type. This also returns value.
**************************************************************************************************************/
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