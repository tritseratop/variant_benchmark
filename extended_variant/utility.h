#pragma once

#include "values_description.h"

template<class T>
std::vector<T> generateVector(size_t size, T value) {
	return std::vector<T>(size, value);
}

template<class T>
TemplateInputStructData<T> generateTemplateInputStructData(size_t size, T value) {
	return TemplateInputStructData<T>(
		std::vector<int64_t>(size, 1), 
		std::vector<uint32_t>(size, 1),
		std::vector<T>(size, value), 
		std::vector<char>(size, '1')
	);
}

std::vector<InputDataValue> CreateInputDataWithInt(size_t number);

std::vector<InputDataValue> CreateInputDataWithFloat(size_t number);

std::vector<InputDataValue> CreateInputDataWithDouble(size_t number);

std::vector<InputDataValue> CreateInputDataWithString(size_t number);

std::vector<InputDataValue> CreateInputDataWithNumeric(size_t number);

std::vector<InputDataValue> CreateInputDataWithAll(size_t number);
