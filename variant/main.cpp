#include "test_with_storage.h"
#include "test_without_storage.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	/*
	TestMoveStructWithIntWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithIntWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithIntWithStorage(NUMBERS_OF_SAMPLES);
	
	TestMoveStructWithFloatWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithFloatWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithFloatWithStorage(NUMBERS_OF_SAMPLES);
	
	TestMoveStructWithDoubleWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithDoubleWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithDoubleWithStorage(NUMBERS_OF_SAMPLES);
	
	TestMoveStructWithStringWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithStringWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithStringWithStorage(NUMBERS_OF_SAMPLES);

	TestMoveStructWithNumericWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithNumericWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithNumericWithStorage(NUMBERS_OF_SAMPLES);

	TestMoveStructWithAllWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithAllWithStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithAllWithStorage(NUMBERS_OF_SAMPLES);

	std::cout << std::endl;
	*/

	TestMoveStructWithIntWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithIntWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithIntWithoutStorage(NUMBERS_OF_SAMPLES);

	TestMoveStructWithFloatWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithFloatWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithFloatWithoutStorage(NUMBERS_OF_SAMPLES);

	TestMoveStructWithDoubleWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithDoubleWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithDoubleWithoutStorage(NUMBERS_OF_SAMPLES);

	TestMoveStructWithStringWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithStringWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithStringWithoutStorage(NUMBERS_OF_SAMPLES);

	TestMoveStructWithNumericWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithNumericWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithNumericWithoutStorage(NUMBERS_OF_SAMPLES);

	TestMoveStructWithAllWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyStructWithAllWithoutStorage(NUMBERS_OF_SAMPLES);
	TestCopyVariantWithAllWithoutStorage(NUMBERS_OF_SAMPLES);

	system("pause");
	return 0;
}
