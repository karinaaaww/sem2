#include "CppUnitTest.h"
#include "../zadanie2/ForceSolver.h"
#include "../zadanie2/DichotomySolver.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
double testFunction(const double x)
{
    return x * x - 4.0;
}
double testLinearFunction(const double x)
{
    return x - 3.0; 
}

namespace Tests
{
    TEST_CLASS(RootSolverTests)
    {
    public:
        TEST_METHOD(ForceSolver_Finds_Positive_Root)
        {
            double a = 0.0;
            double b = 5.0;
            double step = 0.001;
            double expectedRoot = 2.0;
            ForceSolver solver;
            double actualRoot = solver.solve(a, b, step, testFunction);
            Assert::AreEqual(expectedRoot, actualRoot, 0.01);
        }
        TEST_METHOD(ForceSolver_Finds_Negative_Root)
        {
            double a = -5.0;
            double b = 0.0;
            double step = 0.001;
            double expectedRoot = -2.0;
            ForceSolver solver;
            double actualRoot = solver.solve(a, b, step, testFunction);
            Assert::AreEqual(expectedRoot, actualRoot, 0.01);
        }
        TEST_METHOD(Dichotomy_Finds_Positive_Root)
        {
            double a = 0.0;
            double b = 5.0;
            double step = 0.001;
            double expectedRoot = 2.0;
            DichotomySolver solver;
            double actualRoot = solver.solve(a, b, step, testFunction);
            Assert::AreEqual(expectedRoot, actualRoot, 0.01);
        }
        TEST_METHOD(Dichotomy_Finds_Linear_Root)
        {
            double a = 0.0;
            double b = 6.0;
            double step = 0.001;
            double expectedRoot = 3.0; // Ожидаем корень 3
            DichotomySolver solver;
            double actualRoot = solver.solve(a, b, step, testLinearFunction);
            Assert::AreEqual(expectedRoot, actualRoot, 0.01);
        }
    };
}
