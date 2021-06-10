#include "Number.h"


Number::Number(const float m_float_number)
{
	float_number = m_float_number
}

const void Number::Addition(const Number m_number_a, const Number m_number_b)
{
	float_number = m_number_a.float_number + m_number_b.float_number;
}

const void Number::Division(const Number dividend, const Number divider)
{
	float_number = dividend.float_number / divider.float_number;
}
const void Number::Copying(const Number m_number)
{
	float_number = m_number.float_number;
}
const float Number::Get_number()
{
	return float_number;
}
Number::~Number()
{
}