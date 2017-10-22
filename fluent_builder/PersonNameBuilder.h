#pragma once
#include "PersonBuilder.h"

class PersonNameBuilder : public PersonBuilder {
	typedef PersonNameBuilder Self;

public:
	PersonNameBuilder(Person&);

	Self& first(std::string);

	Self& last(std::string);
};

