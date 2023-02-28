#include "utility.h"
#include "constant.h"

std::vector<InputDataValue> CreateInputDataWithInt(size_t number) {
	InputDataValue values{ {generateVector(number, 1)}, {}, {}, {} };
	return std::vector<InputDataValue>(NUMBER_OF_CYCLES, values);
}

std::vector<InputDataValue> CreateInputDataWithFloat(size_t number) {
	InputDataValue values{ {}, {generateVector(number, 3.0f)}, {}, {} };
	return std::vector<InputDataValue>(NUMBER_OF_CYCLES, values);
}

std::vector<InputDataValue> CreateInputDataWithDouble(size_t number) {
	InputDataValue values{ {}, {}, {generateVector(number, 3.0)}, {} };
	return std::vector<InputDataValue>(NUMBER_OF_CYCLES, values);
}

std::vector<InputDataValue> CreateInputDataWithString(size_t number) {
	InputDataValue values{ {}, {}, {}, {generateVector(number, std::vector<char>(1, '0'))} };
	return std::vector<InputDataValue>(NUMBER_OF_CYCLES / 10, values);
}

std::vector<InputDataValue> CreateInputDataWithNumeric(size_t number) {
	size_t number_ = number / 3;
	InputDataValue values{
		{generateVector(number_, 1)},
		{generateVector(number_, 3.0f)},
		{generateVector(number_, 3.0)},
		{}
	};
	return std::vector<InputDataValue>(NUMBER_OF_CYCLES, values);
}

std::vector<InputDataValue> CreateInputDataWithAll(size_t number) {
	size_t number_ = number / 4;
	InputDataValue values{
		{generateVector(number_, 1)},
		{generateVector(number_, 3.0f)},
		{generateVector(number_, 3.0)},
		{generateVector(number_, std::vector<char>(1, '0'))}
	};
	return std::vector<InputDataValue>(NUMBER_OF_CYCLES, values);
}