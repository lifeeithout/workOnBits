#ifndef BITOPERATION_H
#define BITOPERATION_H

#include <iostream>

inline void set(unsigned& value, const size_t& index) noexcept
{
	 value |= (1 << index);
}

inline bool get(const unsigned& value, const size_t& index) noexcept
{
	return value & (1 << index);
}

inline void reset(unsigned& value, const size_t& index) noexcept
{
	value &= ~(1 << index);
}

inline void inverting(unsigned& value, const size_t& index) noexcept
{
	value ^= (1 << index);
}

inline void displayBits(unsigned value) noexcept
{
	const int SHIFT = 8 * sizeof(unsigned) - 1;
	const unsigned MASK = 1 << SHIFT;

	std::cout << value << " = ";

	for (unsigned i = 1; i <= SHIFT + 1; ++i)
	{
		std::cout << (value & MASK ? '1' : '0');
		value <<= 1;

		if (i % 8 == 0)
		{
			std::cout << ' ';
		}
	}

	std::cout << std::endl;
}

#endif // !BITOPERATION
