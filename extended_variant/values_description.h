#pragma once

#include <vector>
#include <variant>
#include <string>
#include <iostream>

template<class T>
struct TemplateInputStructData {
	std::vector<int64_t> time;
	std::vector<uint32_t> id;
	std::vector<T> value;
	std::vector<char> quality;

	TemplateInputStructData()
	{}

	explicit TemplateInputStructData(TemplateInputStructData&& value)
		: time(std::move(value.time))
		, id(std::move(value.id))
		, value(std::move(value.value))
		, quality(std::move(value.quality))
	{
		//std::cout << "TemplateInputStructData move ctor" << std::endl;
	}

	TemplateInputStructData(const TemplateInputStructData& value) = delete;
	/*explicit TemplateInputStructData(const TemplateInputStructData& value)
		: time(value.time)
		, id(value.id)
		, value(value.value)
		, quality(value.quality)
	{
		//std::cout << "TemplateInputStructData copy ctor" << std::endl;
	}*/

	explicit TemplateInputStructData(
		std::vector<int64_t>&& time,
		std::vector<uint32_t>&& id,
		std::vector<T>&& value,
		std::vector<char>&& quality
	)
		: time(std::move(time))
		, id(std::move(id))
		, value(std::move(value))
		, quality(std::move(quality))
	{
		//std::cout << "TemplateInputStructData move ctor" << std::endl;
	}

	explicit TemplateInputStructData(
		const std::vector<int64_t>& time,
		const std::vector<uint32_t>& id,
		const std::vector<T>& value,
		const std::vector<char>& quality
		)
		: time(time)
		, id(id)
		, value(value)
		, quality(quality)
	{
		//std::cout << "TemplateInputStructData copy ctor" << std::endl;
	}
};

struct InputDataValue {
	TemplateInputStructData<int32_t> int_v;
	TemplateInputStructData<float> float_v;
	TemplateInputStructData<double> double_v;
	TemplateInputStructData<std::vector<char>> char_vector_v;

	explicit InputDataValue(InputDataValue&& value) 
		: int_v(std::move(value.int_v))
		, float_v(std::move(value.float_v))
		, double_v(std::move(value.double_v))
		, char_vector_v(std::move(value.char_vector_v))
	{
		//std::cout << "InputDataValue move ctor" << std::endl;
	}
	InputDataValue(const InputDataValue& value) = delete;
	/*explicit InputDataValue(const InputDataValue& value) 
		: int_v(value.int_v)
		, float_v(value.float_v)
		, double_v(value.double_v)
		, char_vector_v(value.char_vector_v)
	{
		//std::cout << "InputDataValue copy ctor" << std::endl;
	}*/

	explicit InputDataValue(
		TemplateInputStructData<int32_t>&& int_v_,
		TemplateInputStructData<float>&& float_v_,
		TemplateInputStructData<double>&& double_v_,
		TemplateInputStructData<std::vector<char>>&& string_v_
	)
		: int_v(std::move(int_v_.time), std::move(int_v_.id), std::move(int_v_.value), std::move(int_v_.quality))
		, float_v(std::move(float_v_.time), std::move(float_v_.id), std::move(float_v_.value), std::move(float_v_.quality))
		, double_v(std::move(double_v_.time), std::move(double_v_.id), std::move(double_v_.value), std::move(double_v_.quality))
		, char_vector_v(std::move(string_v_.time), std::move(string_v_.id), std::move(string_v_.value), std::move(string_v_.quality))
	{
		//std::cout << "InputDataValue move ctor" << std::endl;
	}

	explicit InputDataValue(
		const TemplateInputStructData<int32_t>& int_v_,
		const TemplateInputStructData<float>& float_v_,
		const TemplateInputStructData<double>& double_v_,
		const TemplateInputStructData<std::vector<char>>& string_v_
	)
		: int_v(int_v_.time, int_v_.id, int_v_.value, int_v_.quality)
		, float_v(float_v_.time, float_v_.id, float_v_.value, float_v_.quality)
		, double_v(double_v_.time, double_v_.id, double_v_.value, double_v_.quality)
		, char_vector_v(string_v_.time, string_v_.id, string_v_.value, string_v_.quality)
	{
		//std::cout << "InputDataValue copy ctor" << std::endl;
	}

	size_t totalSize() const;
};

using VariantValue = std::vector<std::variant<int32_t, float, double, std::string, uint32_t, char>>;

struct VariableData {
	std::vector<int64_t> time;
	std::vector<uint32_t> id;
	VariantValue value;
	std::vector<char> quality;
};

template<class T>
struct TemplateStructData {
	std::vector<int64_t> time;
	std::vector<uint32_t> id;
	std::vector<T> value;
	std::vector<char> quality;

	TemplateStructData()
	{}

	TemplateStructData(const TemplateStructData&) = delete;

	explicit TemplateStructData(
		std::vector<int64_t>&& time_, std::vector<uint32_t>&& id_, std::vector<T>&& value_, std::vector<char>&& quality_)
		: time(std::move(time_))
		, id(std::move(id_))
		, value(std::move(value_))
		, quality(std::move(quality_))
	{
		//std::cout << "TemplateStructData move ctor" << std::endl;
	}

	/*explicit TemplateStructData(
		const std::vector<int64_t>& time_,
		const std::vector<uint32_t>& id_,
		const std::vector<T>& value_,
		const std::vector<char>& quality_)
		: time(time_)
		, id(id_)
		, value(value_)
		, quality(quality_)
	{
		//std::cout << "TemplateStructData copy ctor" << std::endl;
	}*/

};

struct StructData {
	TemplateStructData<int32_t> int_v;
	TemplateStructData<float> float_v;
	TemplateStructData<double> double_v;
	TemplateStructData<std::string> string_v;

	TemplateStructData<char> char_v;

	size_t totalSize() const;

	StructData(const StructData&) = delete;

	explicit StructData(
		TemplateInputStructData<int32_t>&& int_v_,
		TemplateInputStructData<float>&& float_v_,
		TemplateInputStructData<double>&& double_v_,
		TemplateInputStructData<std::vector<char>>&& string_v_
	)
		: int_v(std::move(int_v_.time), std::move(int_v_.id), std::move(int_v_.value), std::move(int_v_.quality))
		, float_v(std::move(float_v_.time), std::move(float_v_.id), std::move(float_v_.value), std::move(float_v_.quality))
		, double_v(std::move(double_v_.time), std::move(double_v_.id), std::move(double_v_.value), std::move(double_v_.quality))
		, string_v(std::move(string_v_.time), std::move(string_v_.id), std::vector<std::string>(), std::move(string_v_.quality))
	{
		string_v.value.reserve(string_v_.value.size());
		for (auto&& str : string_v_.value)
		{
			string_v.value.push_back(std::string(str.begin(), str.end()));
		}
		//std::cout << "StructData move ctor" << std::endl;
	}

	/*explicit StructData(
		const TemplateInputStructData<int32_t>& int_v_,
		const TemplateInputStructData<float>& float_v_,
		const TemplateInputStructData<double>& double_v_,
		const TemplateInputStructData<std::vector<char>>& string_v_
	)
		: int_v(int_v_.time, int_v_.id, int_v_.value, int_v_.quality)
		, float_v(float_v_.time, float_v_.id, float_v_.value, float_v_.quality)
		, double_v(double_v_.time, double_v_.id, double_v_.value, double_v_.quality)
		, string_v(string_v_.time, string_v_.id, std::vector<std::string>(), string_v_.quality)
	{
		string_v.value.reserve(string_v_.value.size());
		for (auto&& str : string_v_.value)
		{
			string_v.value.push_back(std::string(str.begin(), str.end()));
		}
		//std::cout << "StructData copy ctor" << std::endl;
	}*/
};

struct InputAlarmValue {
	std::vector<uint32_t> uint32_v;
};

struct InputAlarmExValue {
	std::vector<char> char_v;
};

void moveInputDataToStructValue(std::vector<InputDataValue>&& source);

void copyInputDataToStructValue(const std::vector<InputDataValue>& source);

void copyInputDataToVariantValue(const std::vector<InputDataValue>& source);