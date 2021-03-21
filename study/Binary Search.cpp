#include <iostream>
#include <vector>
using namespace std;

// �ݺ��� �Һ���, �ͳ����� �̿��� ����
int binsearch(const vector<int>& A, int x)
{
	int n = A.size();
	int lo = -1, hi = n;
	// �ݺ��� �Һ��� 1 : lo < hi
	// �ݺ��� �Һ��� 2 : A[lo] < x <= A[hi]
	while ( lo + 1 < hi ) // lo�� hi ���̰� 2�̻�
	{
		int mid = (lo + hi) / 2;
		if ( A[mid] < x ) lo = mid;
		else hi = mid;
	}
	return hi;
}