#include "stdafx.h"
#include "PersonNameBuilder.h"

typedef PersonNameBuilder Self;

PersonNameBuilder::PersonNameBuilder(Person& p)
	: PersonBuilder{ p }
{
}

Self& PersonNameBuilder::first(std::string name) {
	person.name.first = name;
	return *this;
}

Self& PersonNameBuilder::last(std::string name) {
	person.name.last = name;
	return *this;
}