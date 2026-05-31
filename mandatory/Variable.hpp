#ifndef VARIABLES_HPP
# define VARIABLES_HPP

# include <iostream>
# include "Complex.hpp"
# include "Matrix.hpp"
# include "Function.hpp"

class Variable
{
    protected:
        std::string _name;

    public:
        Variable(const std::string &name);

        const std::string &getName() const;
        virtual void print(std::ostream &os) const = 0;
};

struct RationalVariable : public Variable
{
	double	value;

	RationalVariable(const std::string &name, int value);

	void print(std::ostream &os) const;
};

struct ComplexVariable : public Variable
{
	Complex	value;

    ComplexVariable(const std::string &name, const Complex &z);

    void print(std::ostream &os) const; 
};

struct  MatrixVariable : public Variable
{
    Matrix value;

    MatrixVariable(const std::string &name, const Matrix &M);

    void    print(std::ostream &os) const;
};

struct  FunctionVariable : public Variable
{
    Function    value;

    FunctionVariable(const std::string &name, const Function &f);

    void    print(std::ostream &os) const;
};

std::ostream    &operator<<(std::ostream &os, const Variable &v);

#endif