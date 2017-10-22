#pragma once
#include "Person.h"

class PersonNameBuilder;
class PersonAddressBuilder;

class PersonBuilder {
	Person p;

protected:
	Person& person;

	explicit PersonBuilder(Person&);

public:
	PersonBuilder();

	PersonNameBuilder named();

	PersonAddressBuilder lives();

	operator Person();
};