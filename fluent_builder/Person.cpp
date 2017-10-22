#include "stdafx.h"
#include "Person.h"
#include "PersonBuilder.h"

Person::Person(Person&& person)
	: name(std::move(person.name)), address(std::move(person.address))
{
}

PersonBuilder Person::create() {
	return PersonBuilder{};
}

std::ostream & operator<<(std::ostream & stream, const Person & person) {
	return stream << person.name.first << ' ' << person.name.last << '\n'
		<< person.address.street << '\n'
		<< person.address.postal_code << '\n'
		<< person.address.city << ", " << person.address.state << ", " << person.address.country << '\n';
}
