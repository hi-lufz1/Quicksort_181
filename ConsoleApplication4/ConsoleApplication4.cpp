#include <iostream>
using namespace std;

//array of integrers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of movement
int n; 
void input() {
	while (true)
	{
		cout << "masukan panjang element array :";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n Maksimum panjnag array adalah 20" << endl;

	}

	cout << "\n--------------------" << endl;
	cout << "\nEnter array element" << endl;
	cout << "\n--------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
 }
// swap the element at index x with the element at index y
