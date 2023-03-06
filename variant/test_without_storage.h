#pragma once

#include "utility.h"
#include "constant.h"

#include "profiler.h"

void TestMoveStructWithoutStorage(std::string_view message, std::vector<InputDataValue>&& inputs) {
	LOG_DURATION(message.data());
	moveInputDataToStructValue(std::move(inputs));
}

void TestCopyStructWithoutStorage(std::string_view message, const std::vector<InputDataValue>& inputs) {
	LOG_DURATION(message.data());
	copyInputDataToStructValue(inputs);
}

void TestCopyVariantWithoutStorage(std::string_view message, const std::vector<InputDataValue>& inputs) {
	LOG_DURATION(message.data());
	copyInputDataToVariantValue(inputs);
}

void TestMoveStructWithIntWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithInt(number);
		TestMoveStructWithoutStorage("MOVE Data (" + std::to_string(number) + " int) to STRUCT", std::move(inputs));
	}
}

void TestCopyStructWithIntWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithInt(number);
		TestCopyStructWithoutStorage("COPY data (" + std::to_string(number) + " int) to STRUCT", inputs);
	}
}

void TestCopyVariantWithIntWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithInt(number);
		TestCopyVariantWithoutStorage("COPY data (" + std::to_string(number) + " int) to VARIANT", inputs);
	}
}

void TestMoveStructWithFloatWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithFloat(number);
		TestMoveStructWithoutStorage("MOVE Data (" + std::to_string(number) + " float) to STRUCT", std::move(inputs));
	}
}

void TestCopyStructWithFloatWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithFloat(number);
		TestCopyStructWithoutStorage("COPY data (" + std::to_string(number) + " float) to STRUCT", inputs);
	}
}

void TestCopyVariantWithFloatWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithFloat(number);
		TestCopyVariantWithoutStorage("COPY data (" + std::to_string(number) + " float) to VARIANT", inputs);
	}
}

void TestMoveStructWithDoubleWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithDouble(number);
		TestMoveStructWithoutStorage("MOVE Data (" + std::to_string(number) + " double) to STRUCT", std::move(inputs));
	}
}

void TestCopyStructWithDoubleWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithDouble(number);
		TestCopyStructWithoutStorage("COPY data (" + std::to_string(number) + " double) to STRUCT", inputs);
	}
}

void TestCopyVariantWithDoubleWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithDouble(number);
		TestCopyVariantWithoutStorage("COPY data (" + std::to_string(number) + " double) to VARIANT", inputs);
	}
}

void TestMoveStructWithStringWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithString(number);
		TestMoveStructWithoutStorage("MOVE Data (" + std::to_string(number) + " string) to STRUCT", std::move(inputs));
	}
}

void TestCopyStructWithStringWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithString(number);
		TestCopyStructWithoutStorage("COPY data (" + std::to_string(number) + " string) to STRUCT", inputs);
	}
}

void TestCopyVariantWithStringWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithString(number);
		TestCopyVariantWithoutStorage("COPY data (" + std::to_string(number) + " string) to VARIANT", inputs);
	}
}

void TestMoveStructWithNumericWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithNumeric(number);
		TestMoveStructWithoutStorage("MOVE Data (" + std::to_string(number) + " numeric) to STRUCT", std::move(inputs));
	}
}

void TestCopyStructWithNumericWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithNumeric(number);
		TestCopyStructWithoutStorage("COPY data (" + std::to_string(number) + " numeric) to STRUCT", inputs);
	}
}

void TestCopyVariantWithNumericWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithNumeric(number);
		TestCopyVariantWithoutStorage("COPY data (" + std::to_string(number) + " numeric) to VARIANT", inputs);
	}
}

void TestMoveStructWithAllWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithAll(number);
		TestMoveStructWithoutStorage("MOVE Data (" + std::to_string(number) + " total) to STRUCT", std::move(inputs));
	}
}

void TestCopyStructWithAllWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithAll(number);
		TestCopyStructWithoutStorage("COPY data (" + std::to_string(number) + " total) to STRUCT", inputs);
	}
}

void TestCopyVariantWithAllWithoutStorage(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithAll(number);
		TestCopyVariantWithoutStorage("COPY data (" + std::to_string(number) + " total) to VARIANT", inputs);
	}
}