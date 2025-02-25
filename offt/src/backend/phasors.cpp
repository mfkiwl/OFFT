
//          Copyright Christian Volmer 2022.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include "phasors.h"

#include <algorithm>

namespace offt {
namespace backend {

using std::size_t;
using std::ptrdiff_t;

template class Phasors<float>;
template class Phasors<double>;


template<typename valueT>
Phasors<valueT>::Phasors(size_t length) :
	mLength(length),
	mLargePhasors(),
	mSmallPhasors()
{
	static realT const TWO_PI = realT(6.28318530717958647692528676656);

	size_t splitLength = GetSplitLength();

	size_t smallLength = std::min(splitLength, mLength);
	mSmallPhasors.resize(smallLength);

	for (size_t i = 0; i < smallLength; ++i)
		mSmallPhasors[i] = std::exp(complexT(0, TWO_PI * i / mLength));

	size_t largeLength = (mLength + splitLength - 1) / splitLength;

	if (largeLength > 1) {

		mLargePhasors.resize(largeLength);

		for (size_t i = 0; i < largeLength; ++i)
			mLargePhasors[i] = std::exp(complexT(0, TWO_PI * i * splitLength / mLength));
	}
}

template<typename valueT>
size_t Phasors<valueT>::GetLength() const
{
	return mLength;
}

template<typename valueT>
void Phasors<valueT>::Twiddle(realT *t, realT const *real, realT const *imag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement, size_t length) const
{
	for (std::size_t i = 0; i < length; ++i) {

		Multiply(t[2*i], t[2*i+1], real[i * stride], imag[i * stride], twiddleStart + i * twiddleIncrement);
	}
}

}
}
