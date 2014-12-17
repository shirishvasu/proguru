// Solution for UVa 00272 - Tex Quotes (http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208)

#include<string>
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	string input;
	bool is_start = true; // keep track whether bracket is starting or ending.
	while (getline(cin,input)) {
		for (int i=0;i<input.length();i++) {
			if (input.at(i) == '\"') {
				input.replace(i, 1, is_start ? "``" : "''");
				is_start = !is_start;
			}
		}
		cout<<input<<endl;
	}
	return 0;
}