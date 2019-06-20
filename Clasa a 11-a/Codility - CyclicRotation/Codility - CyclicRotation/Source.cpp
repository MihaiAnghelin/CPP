/*
	* An array A consisting of N integers is given.
	  Rotation of the array means that each element is shifted right
	  by one index, and the last element of the array is moved to the first place.
	  For example, the rotation of array A = [3, 8, 9, 7, 6] is [6, 3, 8, 9, 7]
	  (elements are shifted right by one index and 6 is moved to the first place).

	* The goal is to rotate array A K times; that is, each element of A will be shifted to the right K times.

	* Write a function:    vector<int> solution(vector<int> &A, int K);
	  that, given an array A consisting of N integers and an integer K, returns the array A rotated K times.

	* For example, given

	 A = [3, 8, 9, 7, 6]
	 K = 3
	 the function should return [9, 7, 6, 3, 8]. Three rotations were made:

	[3, 8, 9, 7, 6] -> [6, 3, 8, 9, 7]
	[6, 3, 8, 9, 7] -> [7, 6, 3, 8, 9]
	[7, 6, 3, 8, 9] -> [9, 7, 6, 3, 8]
*/
#include<cstdlib>
#include<vector>
#include<iostream>

using namespace std;

vector<int> solution(vector<int> &A, int K)
{
	for (int i = 0; i < K; i++)
	{
		int temp = A[A.size() - 1];
		for (int j = A.size() - 1; j >= 1; j--)
		{
			A[j] = A[j - 1];
		}
		A[0] = temp;
	}
	return A;
}

int main()
{
	int N, K;
	vector<int> A;
	cout << "N(number of integers) = ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cout << "Element " << i + 1 <<": ";
		cin >> temp;
		A.push_back(temp);
	}
	cout << "K(number of rotatons) = ";
	cin >> K;
	cout << endl;

	solution(A, K);
	for (vector<int>::iterator i = A.begin(); i < A.end(); i++)
	{
		cout << *i << " ";
	}
	cout << "\n";
	system("pause");
	return 0;
}