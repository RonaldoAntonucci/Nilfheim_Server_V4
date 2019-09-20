#include "otpch.h"
#include "attributes.h"



/*Attributes::Attributes()
{
	setName("attributes1");
	setRemaining(0);

	setStrenght(1);
	setInteligence(1);
	setVitality(1);
	setSpirituality(1);
	setEndurance(1);
	setDexterity(1);
	setAgility(1);

	setStrBonus(0);
	setIntBonus(0);
	setVitBonus(0);
	setSprBonus(0);
	setEndBonus(0);
	setDexBonus(0);
	setAgiBonus(0);
}*/

Attributes::Attributes(Player* creature,std::string name, int_attr stre, int_attr inte, int_attr vita, int_attr spri, int_attr endu, int_attr dext, int_attr agil, int32_t rema)
{
	this->base = creature->getBaseAttributes();
	if (!base) {
		base = new BaseAttributes(creature->getLevel(), creature->getVocation()->getAttributesMultipliers());
	}


	setName(name);
	this->remaining = rema;
	//setRemaining(rema);

	this->attributes[A_STR].value = stre;
	//setStrenght(stre);
	setInteligence(inte);
	setVitality(vita);
	setSpirituality(spri);
	setEndurance(endu);
	setDexterity(dext);
	setAgility(agil);
	
	setStrBonus(0);
	setIntBonus(0);
	setVitBonus(0);
	setSprBonus(0);
	setEndBonus(0);
	setDexBonus(0);
	setAgiBonus(0);

	//@teste
	std::cout << "Attributes\n"
		<< "STR: " << getStr() << "\n"
		<< "INT: " << getInt() << "\n"
		<< "VIT: " << getVit() << "\n"
		<< "SPR: " << getSpr() << "\n"
		<< "END: " << getEnd() << "\n"
		<< "DEX: " << getDex() << "\n"
		<< "AGI: " << getAgi() << "\n"
		<< "REMAINING: " << getRemaining() << "\n"
		<< std::endl;
}

Attributes::~Attributes()
{
}

std::string Attributes::getName() {
	return this->name;
}

int32_t Attributes::getRemaining() {
	return this->remaining;
}

//GETS
int_attr Attributes::getStrenght() {
	return this->attributes[A_STR].value;
}

int_attr Attributes::getInteligence() {
	return this->attributes[A_INT].value;
}

int_attr Attributes::getVitality() {
	return this->attributes[A_VIT].value;
}

int_attr Attributes::getSpirituality() {
	return this->attributes[A_SPR].value;
}

int_attr Attributes::getEndurance() {
	return this->attributes[A_END].value;
}

int_attr Attributes::getDexterity() {
	return this->attributes[A_DEX].value;
}

int_attr Attributes::getAgility() {
	return this->attributes[A_AGI].value;
}

int_attr Attributes::getStrBonus() {
	return this->attributes[A_STR].bonus;
}

int_attr Attributes::getIntBonus() {
	return this->attributes[A_INT].bonus;
}

int_attr Attributes::getVitBonus() {
	return this->attributes[A_VIT].bonus;
}

int_attr Attributes::getSprBonus() {
	return this->attributes[A_SPR].bonus;
}

int_attr Attributes::getEndBonus() {
	return this->attributes[A_END].bonus;
}

int_attr Attributes::getDexBonus() {
	return this->attributes[A_DEX].bonus;
}

int_attr Attributes::getAgiBonus() {
	return this->attributes[A_AGI].bonus;
}


int_attr Attributes::getStr() {
	return this->attributes[A_STR].value + this->attributes[A_STR].bonus + base->getStr();
}

int_attr Attributes::getInt() {
	return this->attributes[A_INT].value + this->attributes[A_INT].bonus + base->getInt();
}

int_attr Attributes::getVit() {
	return this->attributes[A_VIT].value + this->attributes[A_VIT].bonus + base->getVit();
}

int_attr Attributes::getSpr() {
	return this->attributes[A_SPR].value + this->attributes[A_SPR].bonus + base->getSpr();
}

int_attr Attributes::getEnd() {
	return this->attributes[A_END].value + this->attributes[A_END].bonus + base->getEnd();
}

int_attr Attributes::getDex() {
	return this->attributes[A_DEX].value + this->attributes[A_DEX].bonus + base->getDex();
}

int_attr Attributes::getAgi() {
	return this->attributes[A_AGI].value + this->attributes[A_AGI].bonus + base->getAgi();
}
//SETS
void Attributes::setName(std::string v) {
	this->name = v;
}

void Attributes::setRemaining(int32_t v) {
	this->remaining = v;
}

void Attributes::setStrenght(int_attr v) {
	this->attributes[A_STR].value = v;
}

void Attributes::setInteligence(int_attr v) {
	this->attributes[A_INT].value = v;
}
void Attributes::setVitality(int_attr v) {
	this->attributes[A_VIT].value = v;
}
void Attributes::setSpirituality(int_attr v) {
	this->attributes[A_SPR].value = v;
}
void Attributes::setEndurance(int_attr v) {
	this->attributes[A_END].value = v;
}
void Attributes::setDexterity(int_attr v) {
	this->attributes[A_DEX].value = v;
}
void Attributes::setAgility(int_attr v) {
	this->attributes[A_AGI].value = v;
}

void Attributes::setStrBonus(int_attr v) {
	this->attributes[A_STR].bonus = v;
}

void Attributes::setIntBonus(int_attr v) {
	this->attributes[A_INT].bonus = v;
}
void Attributes::setVitBonus(int_attr v) {
	this->attributes[A_VIT].bonus = v;
}
void Attributes::setSprBonus(int_attr v) {
	this->attributes[A_SPR].bonus = v;
}
void Attributes::setEndBonus(int_attr v) {
	this->attributes[A_END].bonus = v;
}
void Attributes::setDexBonus(int_attr v) {
	this->attributes[A_DEX].bonus = v;
}
void Attributes::setAgiBonus(int_attr v) {
	this->attributes[A_AGI].bonus = v;
}

void Attributes::addRemaining(int32_t v) {
	this->remaining += v;
}

void Attributes::updateLevel() {
	addRemaining(PointsOnLevel);
	this->base->updateLevel();
	//@teste
	std::cout << "Attributes\n"
		<< "STR: " << getStr() << "\n"
		<< "INT: " << getInt() << "\n"
		<< "VIT: " << getVit() << "\n"
		<< "SPR: " << getSpr() << "\n"
		<< "END: " << getEnd() << "\n"
		<< "DEX: " << getDex() << "\n"
		<< "AGI: " << getAgi() << "\n"
		<< "REMAINING: " << getRemaining() << "\n"
		<< std::endl;
}
