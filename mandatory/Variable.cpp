#include "variables.hpp"

Variable::Variable(std::string const &name):
	_name(name)
{
}

Variable::~Variable()
{
}

std::string const &Variable::getName() const
{
	return (_name);
}

RationalVariable::RationalVariable(std::string const &name, int x):
	value(x)
{
}

void	RationalVariable::print(std::ostream &os)
{
	os << value;
}



std::ostream    &operator<<(std::ostream &os, Variable const &v)
{
    v.print(os);
    return (os);
}