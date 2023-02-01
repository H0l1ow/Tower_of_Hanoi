#include <iostream>


void Hanoi(int n, char _start, char _pomocnicza, char _cel );


int main()
{
	int ilosc = 0;
	std::cout << "Podaj ilosc krazkow: "; std::cin >> ilosc;

	Hanoi(ilosc, 'A', 'B', 'C');

	
	return 0;
}

void Hanoi(int n, char _start, char _pomocnicza, char _cel)
{
	if (n == 1) 
	{
		std::cout << "Przesun krazek " << n << " z " << _start << " do " << _cel << std::endl;
		return;
	}

	Hanoi(n - 1, _start, _cel, _pomocnicza);
	std::cout << "Przesun krazek " << n << " z " << _start << " na " << _cel << std::endl;

	Hanoi(n - 1, _pomocnicza, _start, _cel);
}