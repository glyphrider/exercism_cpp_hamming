// vim: ts=4:nu
//
#include "hamming.h"

namespace hamming
{
	unsigned int compute(const std::string& a, const std::string& b)
	{
		unsigned int hamming_distance = 0;
		std::string::const_iterator a_it, b_it;
		for(a_it = a.begin(), b_it = b.begin();
			(a_it != a.end()) && (b_it != b.end());
			a_it++,b_it++)
		{
			if(*a_it != *b_it) hamming_distance++;
		}
		if((a_it == a.end()) && (b_it == b.end())) return hamming_distance;
		throw std::domain_error("size mismatch");
	}
}

