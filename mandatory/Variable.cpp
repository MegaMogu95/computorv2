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

RationalVariable::RationalVariable(std::string const &name, double x):
	value(x)
{
}

void	RationalVariable::print(std::ostream &os)
{
	os << value;
}

ComplexVariable::ComplexVariable(std::string const &name, const Complex &z):
	value(z)
{
}

void	ComplexVariable::print(std::ostream &os)
{
	os << value;
}

MatrixVariable::MatrixVariable(std::string const &name, const Matrix &z):
	value(z)
{
}

void	MatrixVariable::print(std::ostream &os)
{
	os << value;
}

FunctionVariable::FunctionVariable(std::string const &name, const Function &z):
	value(z)
{
}

void	FunctionVariable::print(std::ostream &os)
{
	os << value;
}

std::ostream    &operator<<(std::ostream &os, Variable const &v)
{
    v.print(os);
    return (os);
}