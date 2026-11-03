#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
#include "../RPS.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSTest
{
	TEST_CLASS(RPSTest)
	{
	public:
		
		TEST_METHOD(Rock_vs_Scissors_Player1Wins)
		{
			char p1[] = "Rock";
			char p2[] = "Scissors";
			const char* result = playRPS(p1, p2);
			Assert::AreEqual("Player1", result);
		}
	};
}
