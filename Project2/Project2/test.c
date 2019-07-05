#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

typedef int Type;

template<typename Type> class Loading;
template<typename Type>
Type MaxLoading(Type w[], Type c, int n, int bestx[]);

template<typename Type>
class Loading
{
public:
	friend Type MaxLoading<Type>(Type w[], Type c, int n, int bestx[]);
private:
	void Backtrack(int i);
	int n,			//��װ����
		*x,			//��ǰ��
		*bestx;		//��ǰ���Ž�
	Type* w,		//��װ����������
		c,			//��һ���ִ���������
		cw,			//��ǰ������
		bestw,		//��ǰ����������
		r;			//ʣ�༯װ������
};

template<typename Type>
void Loading<Type>::Backtrack(int i)
{//������i����
	if (i>n)
	{//����Ҷ���
		if (cw>bestw)
		{
			for (int j = 1; j <= n; ++j)
				bestx[j] = x[j];
			bestw = cw;
		}
		return;
	}
	//��������
	r -= w[i]; //��ǰ������ǵ�i����װ�䣬r��i��֮�����м�װ��������ͣ���������һ��֮��Ҫ��ȥ��������
	if (cw + w[i] <= c)
	{//����������
		x[i] = 1;
		cw += w[i];
		Backtrack(i + 1);
		cw -= w[i];
	}
	//����������
	if (cw + r > bestw)
	{
		x[i] = 0;
		Backtrack(i + 1);
	}
	r += w[i];//������������ ����һ��ʱҪ������������
}


template<typename Type>
Type MaxLoading(Type w[], Type c, int n, int bestx[])
{//��������������
	Loading<Type> X;
	//��ʼ��X
	X.x = new int[n + 1];
	X.w = w;
	X.c = c;
	X.n = n;
	X.bestx = bestx;
	X.bestw = 0;
	X.cw = 0;
	//��ʼ��r
	X.r = 0;
	for (int i = 1; i <= n; ++i)
		X.r += w[i];
	X.Backtrack(1);
	delete[] X.x;
	return X.bestw;
}

int main(int argc, char* argv[])
{
	int n;
	Type c;
	cout << "���뼯װ����Ŀ:" << endl;
	cin >> n;
	Type *w = new Type[n + 1];
	int *bestx = new Type[n + 1];
	cout << "����" << n << "��������:" << endl;
	for (int i = 1; i <= n; i++)
		cin >> w[i];
	cout << "�����һ���ִ���������c��" << endl;
	cin >> c;

	cout << MaxLoading<Type>(w, c, n, bestx) << endl;

	for (int i = 1; i <= n; ++i)
		cout << bestx[i] << ",";

	cout << "Press the enter key to exit";
	cin.ignore(cin.rdbuf()->in_avail() + 1);
	return 0;
}

