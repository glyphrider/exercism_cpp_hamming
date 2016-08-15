// vim: ts=4:nu
//
#include "hamming.h"

namespace hamming
{
	unsigned int compute(const std::string& a, const std::string& b)
	{
		unsigned int hamming_distance = 0;
		if(a.size() != b.size()) throw std::domain_error("size mismatch");
		for(int i = 0; i < a.size(); i++)
		{
			if(a[i] != b[i]) hamming_distance++;
		}
		return hamming_distance;
	}
}

