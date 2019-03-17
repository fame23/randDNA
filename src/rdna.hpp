#include <string>
#include <iostream>
#include <random>

using namespace std;

string randDNA (int seed, string bases, int n)
{
	string seq;
	int Rnum;
	int min =0;
	int max= bases.size()-1;
	mt19937 eng1(seed);
	uniform_int_distribution<> uniform(min,max);
	for ( int i=0; i<n; i++)
	{
		Rnum = uniform(eng1);
		seq += bases[Rnum];
	}
	return seq;
}
