// C++ program to count all duplicates
// from string using hashing
#include <bits/stdc++.h>
using namespace std;
# define NO_OF_CHARS 256

class gfg
{
	public :
	
	/* Fills count array with
	frequency of characters */
	void fillCharCounts(char *str, int *count)
	{
		int i;
		for (i = 0; *(str + i); i++)
		count[*(str + i)]++;
	}

	/* Print duplicates present
	in the passed string */
	void printDups(string str)
	{
		unordered_map<char,int> m;
      for(auto &i:str)
        m[i]++;
      for(auto &i:m)
        if(i.second>1)
          cout << i.first << ", count = " << i.second << endl; 
	}
};

/* Driver code*/
int main()
{
	gfg g ;
	string str = "test string";
	g.printDups(str);
	//getchar();
	return 0;
}

// This code is contributed by SoM15242
