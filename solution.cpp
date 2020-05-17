#include<iostream>
#include<cmath>
#include<vector>
#include<set>
using namespace std;

set<unsigned> divisor(unsigned n)
{
	set <unsigned> divs = {1,n};
    for(auto i=2; i<int(sqrt(n))+1;++i)	
        if(n%i == 0)
		{

            divs.insert(i);
			divs.insert(n/i);
		}
    return divs;
}



int main()
{

	unsigned number;
	for(auto i = 1;;++i)
	{
		unsigned triangular = i*(i+1)/2;
		set<unsigned> divs = divisor(triangular);
		if(divs.size()>500)
		{
			number = triangular;
			break;
		}
	}
	
	cout << "Sol.: " << number << endl;	
	
	return 0;
}
