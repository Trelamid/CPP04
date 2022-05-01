//
// Created by Prime_Games_2 on 01.05.2022.
//

#include "Character.h"

Character::Character( const std::string &name)
{
    _number_equipped = 0;
    for (int i = 0; i < Character::_inventory_size; i++)
        this->_inventory[i] = NULL;
}

Character::Character( const Character &src)
{
    *this = src;
}

Character::~Character()
{

}

Character &Character::operator=(const Character &other)
{
    this->_number_equipped = 0;
    for (int i = 0; i < Character::_inventory_size; ++i) {
        if(this->_inventory[i])
            delete this->_inventory[i];
        this->_inventory[i] = other._inventory[i];
        if(this->_inventory[i])
            this->_number_equipped++;
    }
    this->_name = other._name;
    return *this;
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
    if(this->_number_equipped < this->_inventory_size)
    {
        this->_inventory[this->_number_equipped] = m;
        this->_number_equipped++;
    }
}

void Character::unequip(int idx)
{
    int i;
    i = idx + 1;
    while (i < Character::_inventory_size && this->_inventory[i])
    {
        this->_inventory[i - 1] = this->_inventory[i];
        i++;
    }
    this->_inventory[i] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    this->_inventory[idx]->use(target);
    unequip(idx);
}

void Character::printInventory() const
{
    for (int i = 0; i < this->_inventory_size; i++)
    {
        if(this->_inventory[i] != NULL)
            std::cout << i + 1 << " : " << this->_inventory[i]->getType()<<std::endl;
        else
            std::cout << i + 1 << " : " << "empty"<<std::endl;
    }
}

Character::Character() : _number_equipped(0), _name("")
{
    for (int i = 0; i < Character::_inventory_size; i++)
        this->_inventory[i] = NULL;
}
