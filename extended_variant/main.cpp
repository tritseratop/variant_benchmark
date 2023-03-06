#include "utility.h"
#include "constant.h"

#include "profiler.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void TestMoveStruct(std::string_view message, std::vector<InputDataValue>&& inputs) {
	LOG_DURATION(message.data());
	moveInputDataToStructValue(std::move(inputs));
}

//void TestCopyStruct(std::string_view message, const std::vector<InputDataValue>& inputs) {
//	LOG_DURATION(message.data());
//	copyInputDataToStructValue(inputs);
//}

void TestCopyVariant(std::string_view message, const std::vector<InputDataValue>& inputs) {
	LOG_DURATION(message.data());
	copyInputDataToVariantValue(inputs);
}

void TestMoveStructWithInt(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		std::vector<InputDataValue> inputs(CreateInputDataWithInt(number));
		TestMoveStruct("MOVE Data (" + std::to_string(number) + " int) to STRUCT", std::move(inputs));
	}
}

/*
//void TestCopyStructWithInt(const std::vector<size_t>& numbers) {
//	for (auto number : numbers) {
//		auto inputs = CreateInputDataWithInt(number);
//		TestCopyStruct("COPY data (" + std::to_string(number) + " int) to STRUCT", inputs);
//	}
//}

void TestCopyVariantWithInt(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithInt(number);
		TestCopyVariant("COPY data (" + std::to_string(number) + " int) to VARIANT", inputs);
	}
}

void TestMoveStructWithFloat(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithFloat(number);
		TestMoveStruct("MOVE Data (" + std::to_string(number) + " float) to STRUCT", std::move(inputs));
	}
}

//void TestCopyStructWithFloat(const std::vector<size_t>& numbers) {
//	for (auto number : numbers) {
//		auto inputs = CreateInputDataWithFloat(number);
//		TestCopyStruct("COPY data (" + std::to_string(number) + " float) to STRUCT", inputs);
//	}
//}

void TestCopyVariantWithFloat(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithFloat(number);
		TestCopyVariant("COPY data (" + std::to_string(number) + " float) to VARIANT", inputs);
	}
}

void TestMoveStructWithDouble(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithDouble(number);
		TestMoveStruct("MOVE Data (" + std::to_string(number) + " double) to STRUCT", std::move(inputs));
	}
}

//void TestCopyStructWithDouble(const std::vector<size_t>& numbers) {
//	for (auto number : numbers) {
//		auto inputs = CreateInputDataWithDouble(number);
//		TestCopyStruct("COPY data (" + std::to_string(number) + " double) to STRUCT", inputs);
//	}
//}

void TestCopyVariantWithDouble(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithDouble(number);
		TestCopyVariant("COPY data (" + std::to_string(number) + " double) to VARIANT", inputs);
	}
}

void TestMoveStructWithString(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithString(number);
		TestMoveStruct("MOVE Data (" + std::to_string(number) + " string) to STRUCT", std::move(inputs));
	}
}

//void TestCopyStructWithString(const std::vector<size_t>& numbers) {
//	for (auto number : numbers) {
//		auto inputs = CreateInputDataWithString(number);
//		TestCopyStruct("COPY data (" + std::to_string(number) + " string) to STRUCT", inputs);
//	}
//}

void TestCopyVariantWithString(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithString(number);
		TestCopyVariant("COPY data (" + std::to_string(number) + " string) to VARIANT", inputs);
	}
}

void TestMoveStructWithNumeric(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithNumeric(number);
		TestMoveStruct("MOVE Data (" + std::to_string(number) + " numeric) to STRUCT", std::move(inputs));
	}
}

//void TestCopyStructWithNumeric(const std::vector<size_t>& numbers) {
//	for (auto number : numbers) {
//		auto inputs = CreateInputDataWithNumeric(number);
//		TestCopyStruct("COPY data (" + std::to_string(number) + " numeric) to STRUCT", inputs);
//	}
//}

void TestCopyVariantWithNumeric(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithNumeric(number);
		TestCopyVariant("COPY data (" + std::to_string(number) + " numeric) to VARIANT", inputs);
	}
}

void TestMoveStructWithAll(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithAll(number);
		TestMoveStruct("MOVE Data (" + std::to_string(number) + " total) to STRUCT", std::move(inputs));
	}
}

//void TestCopyStructWithAll(const std::vector<size_t>& numbers) {
//	for (auto number : numbers) {
//		auto inputs = CreateInputDataWithAll(number);
//		TestCopyStruct("COPY data (" + std::to_string(number) + " total) to STRUCT", inputs);
//	}
//}

void TestCopyVariantWithAll(const std::vector<size_t>& numbers) {
	for (auto number : numbers) {
		auto inputs = CreateInputDataWithAll(number);
		TestCopyVariant("COPY data (" + std::to_string(number) + " total) to VARIANT", inputs);
	}
}*/

int main()
{
	TestMoveStructWithInt(NUMBERS_OF_SAMPLES);
	//TestCopyStructWithInt(NUMBERS_OF_SAMPLES);
	//TestCopyVariantWithInt(NUMBERS_OF_SAMPLES);

	//TestMoveStructWithFloat(NUMBERS_OF_SAMPLES);
	//TestCopyStructWithFloat(NUMBERS_OF_SAMPLES);
	//TestCopyVariantWithFloat(NUMBERS_OF_SAMPLES);

	//TestMoveStructWithDouble(NUMBERS_OF_SAMPLES);
	//TestCopyStructWithDouble(NUMBERS_OF_SAMPLES);
	//TestCopyVariantWithDouble(NUMBERS_OF_SAMPLES);

	//TestMoveStructWithString(NUMBERS_OF_SAMPLES);
	//TestCopyStructWithString(NUMBERS_OF_SAMPLES);
	//TestCopyVariantWithString(NUMBERS_OF_SAMPLES);

	//TestMoveStructWithNumeric(NUMBERS_OF_SAMPLES);
	//TestCopyStructWithNumeric(NUMBERS_OF_SAMPLES);
	//TestCopyVariantWithNumeric(NUMBERS_OF_SAMPLES);

	//TestMoveStructWithAll(NUMBERS_OF_SAMPLES);
	//TestCopyStructWithAll(NUMBERS_OF_SAMPLES);
	//TestCopyVariantWithAll(NUMBERS_OF_SAMPLES);

	return 0;
}
