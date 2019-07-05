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
	int n,			//集装箱数
		*x,			//当前解
		*bestx;		//当前最优解
	Type* w,		//集装箱重量数组
		c,			//第一艘轮船的载重量
		cw,			//当前载重量
		bestw,		//当前最优载重量
		r;			//剩余集装箱重量
};

template<typename Type>
void Loading<Type>::Backtrack(int i)
{//搜索第i层结点
	if (i>n)
	{//到达叶结点
		if (cw>bestw)
		{
			for (int j = 1; j <= n; ++j)
				bestx[j] = x[j];
			bestw = cw;
		}
		return;
	}
	//搜索子树
	r -= w[i]; //当前处理的是第i个集装箱，r是i个之后所有集装箱的重量和，所以深入一层之后要减去此箱重量
	if (cw + w[i] <= c)
	{//搜索左子树
		x[i] = 1;
		cw += w[i];
		Backtrack(i + 1);
		cw -= w[i];
	}
	//搜索右子树
	if (cw + r > bestw)
	{
		x[i] = 0;
		Backtrack(i + 1);
	}
	r += w[i];//处理完右子树 回上一层时要加上这层的重量
}


template<typename Type>
Type MaxLoading(Type w[], Type c, int n, int bestx[])
{//返回最优载重量
	Loading<Type> X;
	//初始化X
	X.x = new int[n + 1];
	X.w = w;
	X.c = c;
	X.n = n;
	X.bestx = bestx;
	X.bestw = 0;
	X.cw = 0;
	//初始化r
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
	cout << "输入集装箱数目:" << endl;
	cin >> n;
	Type *w = new Type[n + 1];
	int *bestx = new Type[n + 1];
	cout << "输入" << n << "个质量数:" << endl;
	for (int i = 1; i <= n; i++)
		cin >> w[i];
	cout << "输入第一艘轮船的载重量c：" << endl;
	cin >> c;

	cout << MaxLoading<Type>(w, c, n, bestx) << endl;

	for (int i = 1; i <= n; ++i)
		cout << bestx[i] << ",";

	cout << "Press the enter key to exit";
	cin.ignore(cin.rdbuf()->in_avail() + 1);
	return 0;
}

