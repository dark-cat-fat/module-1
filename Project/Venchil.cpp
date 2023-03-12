#include"Venchil.h"

std::ostream& operator<<(std::ostream& os, const Venchil* obj)
{
	os << obj->name << ". " << "Время: " << obj->time << std::endl;
	return os;
}

bool Venchil::operator==(Venchil& obj)
{
	return name == obj.name;
}

bool Venchil::operator!=(int iType)
{
	return type != iType;
}

int Venchil::getNumber()
{
	return this->number;
}

std::string Venchil::getName()
{
	return name;
}