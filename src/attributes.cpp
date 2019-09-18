#include "otpch.h"
#include "attributes.h"

Attributes::Attributes()
{
}

Attributes::Attributes(std::string name, int_attr stre, int_attr inte, int_attr vita, int_attr spri, int_attr endu, int_attr dext, int_attr agil, uint8_t rema)
{
	setName(name);
	setStrenght(stre);
	setInteligence(inte);
	setVitality(vita);
	setSpirituality(spri);
	setEndurance(endu);
	setDexterity(dext);
	setAgility(agil);
	setRemaining(rema);
}

Attributes::~Attributes()
{
}

std::string Attributes::getName() {
	return this->name;
}

int_attr Attributes::getStrenght() {
	return this->strenght;
}

int_attr Attributes::getInteligence() {
	return this->inteligence;
}

int_attr Attributes::getVitality() {
	return this->vitality;
}

int_attr Attributes::getSpirituality() {
	return this->spirituality;
}

int_attr Attributes::getEndurance() {
	return this->endurance;
}

int_attr Attributes::getDexterity() {
	return this->dexterity;
}

int_attr Attributes::getAgility() {
	return this->agility;
}

int_attr Attributes::getRemaining() {
	return this->remaining;
}

void Attributes::setName(std::string v) {
	this->name = v;
}

void Attributes::setStrenght(int_attr v) {
	this->strenght = v;
}

void Attributes::setInteligence(int_attr v) {
	this->inteligence = v;
}
void Attributes::setVitality(int_attr v) {
	this->vitality = v;
}
void Attributes::setSpirituality(int_attr v) {
	this->spirituality = v;
}
void Attributes::setEndurance(int_attr v) {
	this->endurance = v;
}
void Attributes::setDexterity(int_attr v) {
	this->dexterity = v;
}
void Attributes::setAgility(int_attr v) {
	this->agility = v;
}

void Attributes::setRemaining(int_attr v) {
	this->remaining = v;
}
