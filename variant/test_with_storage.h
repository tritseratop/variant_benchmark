#pragma once

#include "utility.h"
#include "constant.h"

#include "profiler.h"

void TestMoveStructWithStorage(std::string_view message, std::vector<InputDataValue>&& inputs, std::vector<StructValue>& dest) {
	LOG_DURATION(message.data());
	moveInputDataToStructValue(std::move(inputs), dest);
}

void TestCopyStructWithStorage(std::string_view message, const std::vector<InputDataValue>& inputs, std::vector<StructValue>& dest) {
	LOG_DURATION(message.data());
	copyInputDataToStructValue(inputs, dest);
}

void TestCopyVariantWithStorage(std::string_view message, const std::vector<InputDataValue>& inputs, std::vector<VariantValue>& dest) {
	LOG_DURATION(message.data());
	copyInputDataToVariantValue(inputs, dest);
}

void TestMoveStructWithIntWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithInt(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestMoveStructWithStorage("MOVE Data (" + std::to_string(number) + " int) to STRUCT", std::move(inputs), dest);
	}
}

void TestCopyStructWithIntWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithInt(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestCopyStructWithStorage("COPY data (" + std::to_string(number) + " int) to STRUCT", inputs, dest);
	}
}

void TestCopyVariantWithIntWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithInt(number);
		std::vector<VariantValue> dest;
		dest.reserve(inputs.size());
		TestCopyVariantWithStorage("COPY data (" + std::to_string(number) + " int) to VARIANT", inputs, dest);
	}
}

void TestMoveStructWithFloatWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithFloat(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestMoveStructWithStorage("MOVE Data (" + std::to_string(number) + " float) to STRUCT", std::move(inputs), dest);
	}
}

void TestCopyStructWithFloatWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithFloat(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestCopyStructWithStorage("COPY data (" + std::to_string(number) + " float) to STRUCT", inputs, dest);
	}
}

void TestCopyVariantWithFloatWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithFloat(number);
		std::vector<VariantValue> dest;
		dest.reserve(inputs.size());
		TestCopyVariantWithStorage("COPY data (" + std::to_string(number) + " float) to VARIANT", inputs, dest);
	}
}

void TestMoveStructWithDoubleWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithDouble(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestMoveStructWithStorage("MOVE Data (" + std::to_string(number) + " double) to STRUCT", std::move(inputs), dest);
	}
}

void TestCopyStructWithDoubleWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithDouble(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestCopyStructWithStorage("COPY data (" + std::to_string(number) + " double) to STRUCT", inputs, dest);
	}
}

void TestCopyVariantWithDoubleWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithDouble(number);
		std::vector<VariantValue> dest;
		dest.reserve(inputs.size());
		TestCopyVariantWithStorage("COPY data (" + std::to_string(number) + " double) to VARIANT", inputs, dest);
	}
}

void TestMoveStructWithStringWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithString(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestMoveStructWithStorage("MOVE Data (" + std::to_string(number) + " string) to STRUCT", std::move(inputs), dest);
	}
}

void TestCopyStructWithStringWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithString(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestCopyStructWithStorage("COPY data (" + std::to_string(number) + " string) to STRUCT", inputs, dest);
	}
}

void TestCopyVariantWithStringWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithString(number);
		std::vector<VariantValue> dest;
		dest.reserve(inputs.size());
		TestCopyVariantWithStorage("COPY data (" + std::to_string(number) + " string) to VARIANT", inputs, dest);
	}
}

void TestMoveStructWithNumericWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithNumeric(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestMoveStructWithStorage("MOVE Data (" + std::to_string(number) + " numeric) to STRUCT", std::move(inputs), dest);
	}
}

void TestCopyStructWithNumericWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithNumeric(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestCopyStructWithStorage("COPY data (" + std::to_string(number) + " numeric) to STRUCT", inputs, dest);
	}
}

void TestCopyVariantWithNumericWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithNumeric(number);
		std::vector<VariantValue> dest;
		dest.reserve(inputs.size());
		TestCopyVariantWithStorage("COPY data (" + std::to_string(number) + " numeric) to VARIANT", inputs, dest);
	}
}

void TestMoveStructWithAllWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithAll(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestMoveStructWithStorage("MOVE Data (" + std::to_string(number) + " total) to STRUCT", std::move(inputs), dest);
	}
}

void TestCopyStructWithAllWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithAll(number);
		std::vector<StructValue> dest;
		dest.reserve(inputs.size());
		TestCopyStructWithStorage("COPY data (" + std::to_string(number) + " total) to STRUCT", inputs, dest);
	}
}

void TestCopyVariantWithAllWithStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithAll(number);
		std::vector<VariantValue> dest;
		dest.reserve(inputs.size());
		TestCopyVariantWithStorage("COPY data (" + std::to_string(number) + " total) to VARIANT", inputs, dest);
	}
}