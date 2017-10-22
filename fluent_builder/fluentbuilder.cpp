// fluentbuilder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "PersonBuilder.h"
#include "PersonNameBuilder.h"
#include "PersonAddressBuilder.h"
#include "Person.h"


int main()
{
	Person p = Person::create().named().first("John").last("Doe")
		.lives().at_street("abc").with_postal_code("ABC").in_city("New York").in_state("NY").in_country("USA");
    
	std::cout << p;
	std::cin.get();
	return 0;
}