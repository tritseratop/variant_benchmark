#include "utility.h"
#include "constant.h"

std::vector<InputDataValue> CreateInputDataWithInt(size_t number) {
	/*auto vec = generateTemplateInputStructData(number, 1);
	InputDataValue values(
		std::move(vec),
		{},
		{}, 
		{});*/
	std::vector<InputDataValue> data;
	for (int i = 0; i < NUMBER_OF_CYCLES; ++i) {
		data.push_back(InputDataValue(generateTemplateInputStructData(number, 1), {}, {}, {}));
	}
	return data;
}

//std::vector<InputDataValue> CreateInputDataWithFloat(size_t number) {
//	InputDataValue values{ {}, {generateTemplateInputStructData(number, 3.0f)}, {}, {} };
//	return std::vector<InputDataValue>(NUMBER_OF_CYCLES, values);
//}
//
//std::vector<InputDataValue> CreateInputDataWithDouble(size_t number) {
//	InputDataValue values{ {}, {}, {generateTemplateInputStructData(number, 3.0)}, {} };
//	return std::vector<InputDataValue>(NUMBER_OF_CYCLES, values);
//}
//
//std::vector<InputDataValue> CreateInputDataWithString(size_t number) {
//	InputDataValue values{ {}, {}, {}, {generateTemplateInputStructData(number, std::vector<char>(1, '0'))} };
//	return std::vector<InputDataValue>(NUMBER_OF_CYCLES / 10, values);
//}
//
//std::vector<InputDataValue> CreateInputDataWithNumeric(size_t number) {
//	size_t number_ = number / 3;
//	InputDataValue values{
//		{generateTemplateInputStructData(number_, 1)},
//		{generateTemplateInputStructData(number_, 3.0f)},
//		{generateTemplateInputStructData(number_, 3.0)},
//		{}
//	};
//	return std::vector<InputDataValue>(NUMBER_OF_CYCLES, values);
//}
//
//std::vector<InputDataValue> CreateInputDataWithAll(size_t number) {
//	size_t number_ = number / 4;
//	InputDataValue values{
//		{generateTemplateInputStructData(number_, 1)},
//		{generateTemplateInputStructData(number_, 3.0f)},
//		{generateTemplateInputStructData(number_, 3.0)},
//		{generateTemplateInputStructData(number_, std::vector<char>(1, '0'))}
//	};
//	return std::vector<InputDataValue>(NUMBER_OF_CYCLES, values);
//}