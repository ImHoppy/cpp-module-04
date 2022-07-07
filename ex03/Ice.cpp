#include "Ice.hpp"

/* ------------------------------- CONSTRUCTOR ------------------------------ */

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( const Ice & src )
{
	*this = src;
}


/* ------------------------------- DESTRUCTOR ------------------------------- */

Ice::~Ice()
{
}


/* -------------------------------- OVERLOAD -------------------------------- */

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		AMateria::operator=(rhs);
	}
	return *this;
}


/* -------------------------------- METHODS --------------------------------- */

AMateria*	Ice::clone() const {
	return (new Ice());
}

void	Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}


/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */