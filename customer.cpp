class customer
{
public:
	customer() { }
	customer(int min, int max) {
		int diff = max-min;
		arrival = rand() % 240;
		service_time = (rand() % diff) + min;
	}
	customer(const customer &cus)
	{
		arrival = cus.get_arr();
		service_time = cus.get_ser();
	}
	int get_arr() const{ return arrival; }
	int get_ser() const{ return service_time; }
	friend bool operator <(customer a, customer b)
	{
		if(a.arrival<b.arrival)
		{ return true;}	else{ return false;}
	}
	customer operator =(const customer& rhs)
	{
		arrival = rhs.get_arr();
		service_time = rhs.get_ser();
		return *this;
	}
private:
	int arrival;
	int service_time;
};
