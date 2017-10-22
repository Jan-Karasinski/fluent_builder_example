#pragma once
#include "PersonBuilder.h"

class PersonAddressBuilder : public PersonBuilder{
	typedef PersonAddressBuilder Self;

public:
	PersonAddressBuilder(Person&);

	Self& at_street(std::string);
	Self& with_postal_code(std::string);

	Self& in_city(std::string);
	Self& in_state(std::string);
	Self& in_country(std::string);
};

