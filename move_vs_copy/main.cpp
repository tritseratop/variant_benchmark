#include "profiler.h"

#include <chrono>
#include <vector>
#include <queue>
#include <iostream>

constexpr size_t NUMBER_OF_CYCLES = 10000;
constexpr size_t NUMBER_OF_SAMPLES = 1000;

void PushBackMoveTest() {
	const std::vector<int> templ(NUMBER_OF_CYCLES, 0);
	std::vector<std::vector<int>> v(NUMBER_OF_SAMPLES, templ);

	std::vector<std::vector<int>> buf;
	buf.reserve(v.size());

	LOG_DURATION("Time to push_back move");
	for (int i = 0; i < v.size(); ++i) {
		buf.push_back(std::move(v[i]));
	}
}

void PushBackCopyTest() {
	const std::vector<int> templ(NUMBER_OF_CYCLES, 0);
	std::vector<std::vector<int>> v(NUMBER_OF_SAMPLES, templ);

	std::vector<std::vector<int>> buf;
	buf.reserve(v.size());

	LOG_DURATION("Time to push_back copy");
	for (int i = 0; i < v.size(); ++i) {
		buf.push_back(v[i]);
	}
}

void MoveTest() {
	const std::vector<int> templ(NUMBER_OF_CYCLES, 0);
	std::vector<std::vector<int>> v(NUMBER_OF_SAMPLES, templ);

	std::vector<std::vector<int>> buf;
	buf.resize(v.size());

	LOG_DURATION("Time to move");
	for (int i = 0; i < v.size(); ++i) {
		buf[i] = std::move(v[i]);
	}
}

void CopyTest() {
	const std::vector<int> templ(NUMBER_OF_CYCLES, 0);
	std::vector<std::vector<int>> v(NUMBER_OF_SAMPLES, templ);

	std::vector<std::vector<int>> buf;
	buf.resize(v.size());

	LOG_DURATION("Time to copy");
	for (int i = 0; i < v.size(); ++i) {
		buf[i] = v[i];
	}
}

void OneInstanceMoveTest() {
	const std::vector<int> templ(NUMBER_OF_CYCLES, 0);
	std::vector<std::vector<int>> v(NUMBER_OF_SAMPLES, templ);

	std::vector<int> buf;

	LOG_DURATION("Time to move to one instance");
	for (int i = 0; i < v.size(); ++i) {
		buf = std::move(v[i]);
	}
}

void OneInstanceCopyTest() {
	const std::vector<int> templ(NUMBER_OF_CYCLES, 0);
	std::vector<std::vector<int>> v(NUMBER_OF_SAMPLES, templ);

	std::vector<int> buf;

	LOG_DURATION("Time to copy to one instance");
	for (int i = 0; i < v.size(); ++i) {
		buf = v[i];
	}
}

void OneInstanceInQueueMoveTest() {
	const std::vector<int> templ(NUMBER_OF_CYCLES, 0);
	std::vector<std::vector<int>> v(NUMBER_OF_SAMPLES, templ);

	std::queue<std::vector<int>> buf;

	LOG_DURATION("Time to move to queue");
	for (int i = 0; i < v.size(); ++i) {
		buf.push(std::move(v[i]));
		if (buf.size() > 10) {
			buf.pop();
		}
	}
}

void OneInstanceInQueueCopyTest() {
	const std::vector<int> templ(NUMBER_OF_CYCLES, 0);
	std::vector<std::vector<int>> v(NUMBER_OF_SAMPLES, templ);

	std::queue<std::vector<int>> buf;

	LOG_DURATION("Time to copy");
	for (int i = 0; i < v.size(); ++i) {
		buf.push(v[i]);
		if (buf.size() > 10) {
			buf.pop();
		}
	}
}

int main() {
	PushBackMoveTest();
	PushBackCopyTest();

	MoveTest();
	CopyTest();

	OneInstanceMoveTest();
	OneInstanceCopyTest();

	OneInstanceInQueueMoveTest();
	OneInstanceInQueueCopyTest();
}