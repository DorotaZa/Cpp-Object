#pragma once

class Car 
{
	class Engine
	{
		double capacity = 0;
		std::string diesel;
		std::string petrol;
	public:
		Car car();
		double oilExchange(double capacity);
		bool annualCheckup();
	};
};
