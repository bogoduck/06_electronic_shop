#pragma once
#include <iostream>
#include <string>

class IElectronics // abstract base class
{
public:
	virtual ~IElectronics() = default;
	virtual void getData() = 0;
};

class Device : virtual public IElectronics // child class 1
{
public:
	Device(size_t batteryLife);
	~Device();
	void getData();
	
protected:
	size_t _batteryLife;

};

class Appliances : virtual public IElectronics  //child class 2
{
public:
	Appliances(size_t weight);
	~Appliances();
	void getData();

protected:
	size_t _weight;
};

class Phone : public Device // example class 1
{
public:
	Phone(const std::string& name, size_t batteryLife);
	void getData();
private:
	std::string _name;
};

class Tv : public Appliances // example class 2
{
public:
	Tv(const std::string& name, size_t weight);
	void getData();
private:
	std::string _name;
};



class Player final : public Device, Appliances // two parents class
{
public:
	Player(const std::string& name, size_t batteryLife, size_t weigth);
	void getData();
private:
	std::string _name;
};