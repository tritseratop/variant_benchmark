#include "values_description.h"

size_t InputDataValue::totalSize() const {
	return int_v.size() + float_v.size() + double_v.size() + string_v.size();
}

void moveInputDataToStructValue(std::vector<InputDataValue>&& source) {
	for (auto&& vect : source) {
		StructValue value{
			std::move(vect.int_v),
			std::move(vect.float_v),
			std::move(vect.double_v),
			{}
		};
		value.string_v.reserve(vect.string_v.size());
		for (auto&& str : vect.string_v)
		{
			value.string_v.push_back(std::string(str.begin(), str.end()));
		}
	}
}

void copyInputDataToStructValue(const std::vector<InputDataValue>& source) {
	for (const auto& vect : source) {
		StructValue value{
			vect.int_v,
			vect.float_v,
			vect.double_v,
			{}
		};
		value.string_v.reserve(vect.string_v.size());
		for (const auto& str : vect.string_v)
		{
			value.string_v.push_back(std::string(str.begin(), str.end()));
		}
	}
}

void copyInputDataToVariantValue(const std::vector<InputDataValue>& source) {
	for (const auto& vect : source) {

		VariantValue value;
		value.reserve(vect.totalSize());

		value.insert(value.end(), vect.int_v.begin(), vect.int_v.end());
		value.insert(value.end(), vect.float_v.begin(), vect.float_v.end());
		value.insert(value.end(), vect.double_v.begin(), vect.double_v.end());

		for (const auto& str : vect.string_v)
		{
			value.push_back(std::string(str.begin(), str.end()));
		}
	}
}