#pragma once
#include <iostream>
#include <string>
#include "electronic.h"

// DEVICE

Device::Device(size_t batteryLife) :  _batteryLife(batteryLife) {
	std::cout << "Device Constructor" << std::endl;

}

Device::~Device() {
	std::cout << "Device - deleted" << std::endl;
}

void Device::getData() {
	std::cout << "Device battery : " << this->_batteryLife << std::endl;
}

// APPLIANCES
Appliances::Appliances(size_t weight) : _weight(weight) {
	std::cout << "Appliance Constructor" << std::endl;
}

Appliances::~Appliances() {
	std::cout << "Appliance - deleted" << std::endl;
}

void Appliances::getData() {
	std::cout << "Appliance weight: " << this->_weight << std::endl;
}


//PHONE
Phone::Phone(const std::string& name, size_t batteryLife) : Device::Device(batteryLife),  _name(name){
	std::cout << "Phone Constructor" << std::endl;
};

void Phone::getData() {
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Battery life: " << this->_batteryLife << std::endl;
}

//TV
Tv::Tv(const std::string& name, size_t weight) : Appliances::Appliances(weight), _name(name) {
	std::cout << "TV Constructor" << std::endl;
};

void Tv::getData() {
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Weight: " << this->_weight << std::endl;
}

//PLAYER

Player::Player(const std::string& name, size_t batteryLife, size_t weight) : Device::Device(batteryLife), Appliances::Appliances(weight), _name(name) {
	std::cout << "Player Constructor" << std::endl;
}

void Player::getData() {
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Weight: " << this->_weight << std::endl;
	std::cout << "Battery Life: " << this->_batteryLife << std::endl;
}