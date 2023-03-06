#include "values_description.h"
#include "profiler.h"

size_t StructData::totalSize() const {
	return int_v.value.size() + float_v.value.size() + double_v.value.size() + string_v.value.size();
}

size_t InputDataValue::totalSize() const {
	return int_v.value.size() + float_v.value.size() + double_v.value.size() + char_vector_v.value.size();
}

void moveInputDataToStructValue(std::vector<InputDataValue>&& source) {
	for (auto&& vect : source) {
		StructData value(
			std::move(vect.int_v),
			std::move(vect.float_v),
			std::move(vect.double_v),
			std::move(vect.char_vector_v)			
		);
		/*value.string_v.value.reserve(vect.char_vector_v.value.size());
		for (auto&& str : vect.char_vector_v.value)
		{
			value.string_v.value.push_back(std::string(str.begin(), str.end()));
		}*/
	}
}

//void copyInputDataToStructValue(const std::vector<InputDataValue>& source) {
//	for (const auto& vect : source) {
//		StructData value(
//			vect.int_v,
//			vect.float_v,
//			vect.double_v,
//			vect.char_vector_v
//		);
//		/*value.string_v.value.reserve(vect.char_vector_v.value.size());
//		for (auto&& str : vect.char_vector_v.value)
//		{
//			value.string_v.value.push_back(std::string(str.begin(), str.end()));
//		}*/
//	}
//}

void copyInputDataToVariantValue(const std::vector<InputDataValue>& source) {
	for (const auto& vect : source) {

		VariableData result;
		result.time.reserve(vect.totalSize());
		result.id.reserve(vect.totalSize());
		result.value.reserve(vect.totalSize());
		result.quality.reserve(vect.totalSize());

		// int
		result.time.insert(result.time.end(), vect.int_v.time.begin(), vect.int_v.time.end());
		result.id.insert(result.id.end(), vect.int_v.id.begin(), vect.int_v.id.end());
		result.value.insert(result.value.end(), vect.int_v.value.begin(), vect.int_v.value.end());
		result.quality.insert(result.quality.end(), vect.int_v.quality.begin(), vect.int_v.quality.end());

		// float
		result.time.insert(result.time.end(), vect.float_v.time.begin(), vect.float_v.time.end());
		result.id.insert(result.id.end(), vect.float_v.id.begin(), vect.float_v.id.end());
		result.value.insert(result.value.end(), vect.float_v.value.begin(), vect.float_v.value.end());
		result.quality.insert(result.quality.end(), vect.float_v.quality.begin(), vect.float_v.quality.end());

		// double
		result.time.insert(result.time.end(), vect.double_v.time.begin(), vect.double_v.time.end());
		result.id.insert(result.id.end(), vect.double_v.id.begin(), vect.double_v.id.end());
		result.value.insert(result.value.end(), vect.double_v.value.begin(), vect.double_v.value.end());
		result.quality.insert(result.quality.end(), vect.double_v.quality.begin(), vect.double_v.quality.end());

		// vector of char
		result.time.insert(result.time.end(), vect.char_vector_v.time.begin(), vect.char_vector_v.time.end());
		result.id.insert(result.id.end(), vect.char_vector_v.id.begin(), vect.char_vector_v.id.end());
		result.quality.insert(result.quality.end(), vect.char_vector_v.quality.begin(), vect.char_vector_v.quality.end());
		for (const auto& str : vect.char_vector_v.value)
		{
			result.value.push_back(std::string(str.begin(), str.end()));
		}
	}
}