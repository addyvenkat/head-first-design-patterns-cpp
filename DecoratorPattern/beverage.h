#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

// abstract class
class Beverage
{
public:
	Beverage() = default;
	virtual ~Beverage() = default;

	virtual std::string getDescription()
	{ 
		return description;
	}

	virtual double cost() = 0;

	enum size_e
	{
		TALL,
		GRANDE,
		VENTI
	};

	virtual void setSize(size_e s)
	{
		size = s;
	}

	virtual size_e getSize()
	{
		return size;
	}

	std::string getSizeString();

protected:
	std::string description = "Unknown Beverage";
	size_e size = GRANDE;

};

std::string Beverage::getSizeString()
{
	std::string result;
	switch (getSize()) {
		case TALL:
		{
			result = "Tall";
			break;
		}
			
		case GRANDE:
		{
			result = "Grande";
			break;
		}
			
		case VENTI:
		{
			result = "Venti";
			break;
		}
			
		
		default:
		{
			result = "Unknown size";
		}
			
	}
	return result;
}

#endif /* #ifndef BEVERAGE_H */