
//          Copyright Christian Volmer 2022.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include "module_base.h"
#include <memory>

namespace offt {
namespace backend {

struct StandardModuleComplexity {

	std::size_t const AdditionCount;
	std::size_t const MultiplicationCount;

	StandardModuleComplexity() :
		AdditionCount(0),
		MultiplicationCount(0)
	{
	}

	StandardModuleComplexity(std::size_t additionCount, std::size_t multiplicationCount) :
		AdditionCount(additionCount),
		MultiplicationCount(multiplicationCount)
	{
	}
};

template<typename valueT, std::size_t N>
class StandardModuleFactory;

template<typename valueT, std::size_t N>
class StandardModule : public ModuleBase<valueT> {

private:

	static const StandardModuleComplexity Complexity;

	StandardModule(Phasors<valueT> const &phasors, std::size_t remainingLength, std::size_t twiddleStep) :
		ModuleBase<valueT>(phasors, N, remainingLength, twiddleStep)
	{
	}

	friend class StandardModuleFactory<valueT, N>;

public:

	using ModuleBase<valueT>::mLength;

	virtual std::size_t Prepare(Storage<valueT> &) override
	{
		return 0;
	}

	virtual void SetTemp(valueT *) override
	{
	}

	virtual void Compute(valueT *pReal, valueT *pImag, std::ptrdiff_t stride, std::size_t twiddleStart, std::size_t twiddleIncrement) const override;
};

template<typename valueT>
class StandardModuleFactoryBase {

protected:

	StandardModuleFactoryBase() { }

public:

	virtual ~StandardModuleFactoryBase() { }
	virtual std::unique_ptr<ModuleBase<valueT>> Construct(Phasors<valueT> const &phasors, std::size_t remainingLength, std::size_t twiddleStep) const = 0;
	virtual StandardModuleComplexity GetComplexity() const = 0;
};

template<typename valueT, std::size_t N>
class StandardModuleFactory : public StandardModuleFactoryBase<valueT> {

public:

	StandardModuleFactory() { }
	virtual std::unique_ptr<ModuleBase<valueT>> Construct(Phasors<valueT> const &phasors, std::size_t remainingLength, std::size_t twiddleStep) const override
	{
		return std::unique_ptr<ModuleBase<valueT>>(new StandardModule<valueT, N>(phasors, remainingLength, twiddleStep));
	}

	virtual StandardModuleComplexity GetComplexity() const override
	{
		return StandardModule<valueT, N>::Complexity;
	}
};

}
}
