#include "stdafx.h"
#include "PersonAddressBuilder.h"

typedef PersonAddressBuilder Self;

PersonAddressBuilder::PersonAddressBuilder(Person& p)
	: PersonBuilder{ p }
{
}

Self & PersonAddressBuilder::at_street(std::string street) {
	person.address.street = street;
	return *this;
}

Self & PersonAddressBuilder::with_postal_code(std::string postal_code) {
	person.address.postal_code = postal_code;
	return *this;
}

Self & PersonAddressBuilder::in_city(std::string city) {
	person.address.city = city;
	return *this;
}

Self & PersonAddressBuilder::in_state(std::string state) {
	person.address.state = state;
	return *this;
}

Self & PersonAddressBuilder::in_country(std::string country) {
	person.address.country = country;
	return *this;
}
