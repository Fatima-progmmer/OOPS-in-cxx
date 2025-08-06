#include <iostream>
#include <string>
using namespace std;

class Country
{
  private:
	string name;
	string location;
	double area;
	int population;
	string capital;

  public:
	Country(string n, string loc, double a, int pop, string cap)
	{
		name = n;
		location = loc;
		area = a;
		population = pop;
		capital = cap;
	}

	void SetName(string n)
	{
		name = n;
	}

	void SetLocation(string loc)
	{
		location = loc;
	}

	void SetArea(double a)
	{
		area = a;
	}

	void SetPopulation(int pop)
	{
		population = pop;
	}

	void SetCapital(string cap)
	{
		capital = cap;
	}

	void DisplayAllInfo()
	{
		cout << "Name: " << name << endl;
		cout << "Location: " << location << endl;
		cout << "Area: " << area << " square units" << endl;
		cout << "Population: " << population << endl;
		cout << "Capital: " << capital << endl;
	}

	void DisplayName()
	{
		cout << "Name: " << name << endl;
	}

	void DisplayCapital()
	{
		cout << "Capital: " << capital << endl;
	}
};

int main()
{
	string name, location, capital;
	double area;
	int population;

	// Create three instances of the Country class
	Country country1("", "", 0.0, 0, "");
	Country country2("", "", 0.0, 0, "");
	Country country3("", "", 0.0, 0, "");

	// Get input for first country
	cout << "Enter name of country 1: ";
	getline(cin, name);
	country1.SetName(name);
	cout << "Enter location of country 1: ";
	getline(cin, location);
	country1.SetLocation(location);
	cout << "Enter area of country 1: ";
	cin >> area;
	country1.SetArea(area);
	cout << "Enter population of country 1: ";
	cin >> population;
	country1.SetPopulation(population);
	cout << "Enter capital of country 1: ";
	cin.ignore();
	getline(cin, capital);
	country1.SetCapital(capital);

	// Get input for second country
	cout << "Enter name of country 2: ";
	getline(cin, name);
	country2.SetName(name);
	cout << "Enter location of country 2: ";
	getline(cin, location);
	country2.SetLocation(location);
	cout << "Enter area of country 2: ";
	cin >> area;
	country2.SetArea(area);
	cout << "Enter population of country 2: ";
	cin >> population;
	country2.SetPopulation(population);
	cout << "Enter capital of country 2: ";
	cin.ignore();
	getline(cin, capital);
	country2.SetCapital(capital);

	// Get input for third country
	cout << "Enter name of country 3: ";
	getline(cin, name);
	country3.SetName(name);
	cout << "Enter location of country 3: ";
	getline(cin, location);
	country3.SetLocation(location);
	cout << "Enter area of country 3: ";
	cin >> area;
	country3.SetArea(area);
	cout << "Enter population of country 3: ";
	cin >> population;
	country3.SetPopulation(population);
	cout << "Enter capital of country 3: ";
	cin.ignore();
	getline(cin, capital);
	country3.SetCapital(capital);

	// Display the information for all three countries
	cout << "\nCountry 1 information:" << endl;
	country1.DisplayAllInfo();

	cout << "\nCountry 2 information:" << endl;
	country2.DisplayAllInfo();

	cout << "\nCountry 3 information:" << endl;
	country3.DisplayAllInfo();

	return 0;
}
