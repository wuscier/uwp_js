#pragma once

#include <collection.h>
#include <ppl.h>
#include <amp.h>
#include <amp_math.h>

using namespace Windows::Foundation::Collections;
using namespace Windows::Foundation;
using namespace Windows::UI::Core;

namespace WindowsRuntimeComponent1
{

	public delegate void PrimeFoundHandler(int result);

	public ref class Class1 sealed
	{
	private:
		bool is_prime(int n);
		CoreDispatcher^ m_dispatcher;


	public:
		Class1();

		IVector<double>^ ComputeResult(double input);
		IAsyncOperationWithProgress<IVector<int>^, double>^ GetPrimesOrdered(int first, int last);
		IAsyncActionWithProgress<double>^ GetPrimesUnordered(int first, int last);

		event PrimeFoundHandler^ primeFoundEvent;
	};
}
