#pragma once

class Number
{
public:
	explicit Number(const float m_float_number);
	const void Addition(const Number m_number_a, const Number m_number_b);
	const void Division(const Number dividend, const Number divider);
	const void Copying(const Number m_number);
	const float Get_number();
	~Number();

protected:
	float float_number;
};