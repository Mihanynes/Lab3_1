#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\misha\Documents\C++\semestr3\Laba_1\Laba_1\main.cpp"
#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Sorttests
{
	TEST_CLASS(Sorttests)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int items[] = { 576, 35, 0, 334, 46, 24, 24, 13, 672, 1 };
			vector<int> v = { 576, 35, 0, 334, 46, 24, 24, 13, 672, 1 };
			sort(v.begin(), v.end());

			LinkedListSequence<int> list(items, 10);
			Sequence<int>* seq = &list;
			seq->binary_insertion_sort_(comparator);
			int expected;
			int actual;
			for (int i = 0; i < 10; i++)
			{
				expected = v[i];
				actual = seq->get(i);
				Assert::AreEqual(expected, actual);
			}
		}
		TEST_METHOD(TestMethod2)
		{
			int items[] = { 576, 35, 0, 334, 46, 24, 24, 13, 672, 1 };
			vector<int> v = { 576, 35, 0, 334, 46, 24, 24, 13, 672, 1 };
			sort(v.begin(), v.end());

			LinkedListSequence<int> list(items, 10);
			Sequence<int>* seq = &list;
			seq->merge_sort_(comparator);
			int expected;
			int actual;
			for (int i = 0; i < 10; i++)
			{
				expected = v[i];
				actual = seq->get(i);
				Assert::AreEqual(expected, actual);
			}
		}
		TEST_METHOD(TestMethod3)
		{
			int items[] = { 576, 35, 0, 334, 46, 24, 24, 13, 672, 1 };
			vector<int> v = { 576, 35, 0, 334, 46, 24, 24, 13, 672, 1 };
			sort(v.begin(), v.end());

			LinkedListSequence<int> list(items, 10);
			Sequence<int>* seq = &list;
			seq->binary_insertion_sort_(comparator);
			int expected;
			int actual;
			for (int i = 0; i < 10; i++)
			{
				expected = v[i];
				actual = seq->get(i);
				Assert::AreEqual(expected, actual);
			}
		}
	};
}