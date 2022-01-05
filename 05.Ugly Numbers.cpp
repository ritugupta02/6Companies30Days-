class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	 set<ull>a;
	    a.insert(1);
	    while(--n) {
	        auto i = a.begin();
	        a.insert(*i * 2);
	        a.insert(*i * 3);
	        a.insert(*i * 5);
	        a.erase(i);
	    }
	    return *a.begin();
	}
};
