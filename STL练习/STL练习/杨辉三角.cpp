#include<iostream>
using namespace std;
#include<vector>
#include<string>
//容器可以相互赋值.

vector<vector<int>> generate(int numRows) {
	vector<vector<int>>data(numRows);
	if (numRows != 0)
	{
		int i, j;
		data[0].push_back(1);
		for (i = 1; i < numRows; i++)
		{
			data[i] = data[i - 1];

			for (j = i - 1; j > 0; j--)
			{
				data[i][j] += data[i][j - 1];
			}
			data[i].push_back(1);

		}
	}
	return data;


}

void printArray(vector<int>&v,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void printGenerate(int n)
{
	vector<int>v(n,0);
	v[0] = 1;
	printArray(v, 1);

	int i, j;
	for (i = 1; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			v[j] += v[j - 1];

		}
		printArray(v, i+1);

	}


}



int main()
{
	//printGenerate(10);
	/*vector<int>v(10, 5);
	vector<int>b = v;*/
	/*vector<vector<int>> data = generate(10);

	for (auto & i : data)
	{
		for (auto & j : i)
		{
			cout << j << ' ';
		}
		cout << endl;
	}*/


	vector<int> v;
	string s;
	


	system("pause");
	return 0;

}
