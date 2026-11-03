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
		
		TEST_METHOD(Scissors_vs_Rock_Player2Wins)
		{
			char p1[] = "Scissors";
			char p2[] = "Rock";
			const char* result = playRPS(p1, p2);
			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(Rock_vs_Rock_Draw)
		{
			char p1[] = "Rock";
			char p2[] = "Rock";
			const char* result = playRPS(p1, p2);
			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(InvalidWord_vs_RPS_Invalid)
		{
			char p1[] = "Banana"; //Any random object that isn't rock, paper, or scissors
			char rock[] = "Rock";
			char paper[] = "Paper";
			char scissors[] = "Scissors";
			
			Assert::AreEqual("Invalid", playRPS(p1, rock));
			Assert::AreEqual("Invalid", playRPS(p1, paper));
			Assert::AreEqual("Invalid", playRPS(p1, scissors));
		}

		TEST_METHOD(RPS_vs_Invalid_Invalid)
		{
			char rock[] = "Rock";
			char paper[] = "Paper";
			char scissors[] = "Scissors";
			char p2[] = "Banana"; //Any random object that isn't rock, paper, or scissors

			Assert::AreEqual("Invalid", playRPS(rock, p2));
			Assert::AreEqual("Invalid", playRPS(paper, p2));
			Assert::AreEqual("Invalid", playRPS(scissors, p2));
		}
	};
}
