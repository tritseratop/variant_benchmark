#pragma once

#include <vector>
#include <variant>
#include <string>

using VariantValue = std::vector<std::variant<int32_t, float, double, std::string, uint32_t, char>>;

struct StructValue {
	std::vector<int32_t> int_v;
	std::vector<float> float_v;
	std::vector<double> double_v;
	std::vector<std::string> string_v;

	std::vector<char> char_v;
};

struct InputDataValue {
	std::vector<int32_t> int_v;
	std::vector<float> float_v;
	std::vector<double> double_v;
	std::vector<std::vector<char>> string_v;

	size_t totalSize() const;
};

struct InputAlarmValue {
	std::vector<uint32_t> uint32_v;
};

struct InputAlarmExValue {
	std::vector<char> char_v;
};

void moveInputDataToStructValue(std::vector<InputDataValue>&& source, std::vector<StructValue>& dest);

void copyInputDataToStructValue(const std::vector<InputDataValue>& source, std::vector<StructValue>& dest);

void copyInputDataToVariantValue(const std::vector<InputDataValue>& source, std::vector<VariantValue>& dest);