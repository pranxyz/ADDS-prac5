#include <iostream>
#include <vector>
#include <deque>
#include "FilterForTwoDigitPositive.cpp"
#include "FilterGeneric.cpp"
#include "FilterNonPositive.cpp"
#include "FilterOdd.cpp"
#include "MapAbsoluteValue.cpp"
#include "MapGeneric.cpp"
#include "MapSquare.cpp"
#include "MapTriple.cpp"
#include "ReduceGCD.cpp"
#include "ReduceGeneric.cpp"
#include "ReduceMinimum.cpp"

using namespace std;

int main()
{
    deque<int> *L = new deque<int>();
    int input;
	for (int i = 0; i < 20; i++)
	{
        cin >> input;
		L->push_back(input);
        while(cin.get()!=',' && i!=19);
	}

    MapTriple *mapTriple = new MapTriple();
	MapAbsoluteValue *mapAbsoluteValue = new MapAbsoluteValue();
    deque<int> L_1 = mapAbsoluteValue->map(mapTriple->map(*L));

    FilterOdd *filterOdd = new FilterOdd();
	FilterForTwoDigitPositive *filterForTwoDigitPositive = new FilterForTwoDigitPositive();
    deque<int> L_2 = filterOdd->filter(filterForTwoDigitPositive->filter(L_1));

    vector<int> *L_2_vec = new vector<int>();
    for (deque<int>::iterator it = L_2.begin(); it != L_2.end(); it++)
		L_2_vec->push_back(*it);

    ReduceMinimum *reduceMinimum = new ReduceMinimum();
	ReduceGCD *reduceGCD = new ReduceGCD();
    vector<int> results[2];
	results[0] = reduceMinimum->reduce(*L_2_vec);
	results[1] = reduceGCD->reduce(*L_2_vec);

	cout << results[0].at(0) << " " << results[1].at(0);
	return 0;
}