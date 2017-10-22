#pragma once
#include <iostream>
#include <string>

class PersonBuilder;

struct Name {
	std::string first;
	std::string last;
};

struct Address {
	std::string street;
	std::string postal_code;

	std::string city;
	std::string state;
	std::string country;
};

class Person {
	Name name;
	Address address;

	Person() = default;

public:
	Person(Person&&);

	static PersonBuilder create();

	friend std::ostream& operator<<(std::ostream& stream, const Person& person);

	friend class PersonBuilder;
	friend class PersonNameBuilder;
	friend class PersonAddressBuilder;
};

