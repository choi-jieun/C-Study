#pragma once

template <class T> //템플릿을 정의할 떄 타입 매개변수를 선언하는 부분. = <typename T>
T maximum(T value1, T value2, T value3) { 
	T maximumValue = value1;

	if (value2 > maximumValue)
		maximumValue = value2;

	if (value3 > maximumValue)
		maximumValue = value3;

	return maximumValue; //최댓값을 반환함.

}


