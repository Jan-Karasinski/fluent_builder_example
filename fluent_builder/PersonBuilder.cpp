#include "stdafx.h"
#include "PersonBuilder.h"
#include "PersonNameBuilder.h"
#include "PersonAddressBuilder.h"

PersonBuilder::PersonBuilder(Person& p)
	: person{ p }
{
}

PersonBuilder::PersonBuilder()
	: person{ p }
{
}

PersonNameBuilder PersonBuilder::named() {
	return PersonNameBuilder{ person };
}

PersonAddressBuilder PersonBuilder::lives() {
	return PersonAddressBuilder{ person };
}

PersonBuilder::operator Person() {
	return std::move(person);
}
