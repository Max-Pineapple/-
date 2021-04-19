#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <queue>
#include <stack>

using namespace std;

/*
//A约数个数
int main()
{
	int n;
	int ans = 0;
	cin >> n;
	for(int i = 1;i <= n;i++)
    {
        if(n % i == 0)
            ans++;
    }
    cout << ans << endl;
	system("pause");
	return 0;
}
*/

/*
//F成绩分析
int main()
{
	int ans = 0;
	int n;
	cin >> n;
	int sum = 0;
	int min1 = 100;
	int max1 = 0;
	int arr;
	for(int i = 0;i < n;i++)
	{
	    cin >> arr;
	    max1 = max(max1,arr);
	    min1 = min(min1,arr);
	    sum += arr;
	}
	double avr;
	avr = (double)(sum / n);
	cout << max1 << endl;
	cout << min1 << endl;
	cout << avr << endl;

	system("pause");
	return 0;
}
*/

/*
//I子串分值和
int score(string str)
{
    int ans = 0;
    int f[26] = {0};
    for(int i = 0;i < str.size();i++)
    {
        f[str[i] - 'a']++;
    }
    for(int i = 0;i < 26;i++)
    {
        if(f[i])
            ans++;
    }
    return ans;
}

int main()
{
	string str;
	cin >> str;
	int sum = 0;
	int len = str.size();
	for(int i = 0;i < len;i++)
    {
        for(int j = i;j < len;j++)
        {
            sum += score(str.substr(i,j - i + 1));
        }
    }
    cout << sum << endl;
	system("pause");
	return 0;
}
*/

/*
//J荒岛检测
int main(){
    float xa,ya,xb,yb,L;//发射器接收器的位置；
    float x1,y1,x2,y2,x3,y3;//荒岛的三点；
    cin>>xa>>ya>>xb>>yb>>L;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double pi= 3.141592653;
    float m,n,A,B;
    m=sqrt(pow((xa-xb),2)+pow((ya-yb),2));//发射器到接收器的距离；
    n=L-m;
    A=L/2.0;//实轴长；
    B=sqrt(pow(L/2,2)-pow(m/2,2));//虚轴长；
    double s;
    s=A*B*pi/2.0;
    printf("%.2f\n",s);
    return 0;
}
*/

/*
//斐波那契数列与黄金分割
int main(){
    double a = 1.00000000;
    double b = 1.00000000;
    int n;
    cin >> n;
    double r = 0.0;
    for(int i = 3;i <= n;i++)
    {
        r = a + b;
        cout << r << endl;
        a = b;
        b = r;
    }
    printf("%.8lf\n" , r / a);
    return 0;
}
*/

/*
//计算999以内三位数  每位数的立方相加等与自身的三位数
bool isSelf(int n)
{
    int sum = 0;
    int i = n;
    while(i)
    {
        sum += ((i % 10) * (i % 10) * (i % 10));
        i /= 10;
    }
    if(sum == n)
        return true;
    else
        return false;
}

int main()
{
	int n;
	cin >> n;
	for(int i = 100;i <= n;i++)
    {
        if(isSelf(i))
            cout << i << endl;
    }
	return 0;
}
*/

/*
//简易计算器
int main()
{
	char ch;
	int a,b;
	int ans = 0;
	cin >> ch >> a >> b;
	switch(ch)
	{
		case '+':
			ans = a + b;
			break;
		case '-':
			ans = a - b;
			break;
		case '*':
			ans = a * b;
			break;
		case '/':
			ans = a / b;
			break;
	}
	cout << ans << endl;
	return 0;
}
*/

/*
//快速排序
int q[11];

void quick_sort(int q[],int l,int r)
{
    if(l >= r)  return;
    int i = l - 1, j = r + 1, mid = q[i + j >> 1];
    while(i < j)
    {
        do i++;     while(q[i] < mid);
        do j--;     while(q[j] > mid);
        if(i < j)   swap(q[i],q[j]);
    }
    quick_sort(q,l,j);
    quick_sort(q,j + 1,r);
}

int main()
{
    int size1;
    for(int i = 0;i < 10;i++)
    {
        scanf("%d",&q[i]);
        if(q[i] == 0)
        {
            size1 = i + 1;
            break;
        }
    }
    quick_sort(q,0,size1 - 2);
    for(int i = 0;i < size1 - 1;i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
//队列操作
int main()
{
	queue<int> que;
	int n;
	cin >> n;
	int oper,num;
	for(int i = 0;i < n;i++)
	{
		cin >> oper;
		if(oper == 1)
		{
			cin >> num;
			que.push(num);
		}
		else if(oper == 2)
        {
            if(que.empty())
            {
                cout << "no" << endl;
                return 0;
            }
            cout << que.front() << endl;
            que.pop();
        }
        else if(oper == 3)
        {
            cout << que.size() << endl;
        }
	}
	return 0;
}
*/

/*
//求根号3
int main()
{
	double low = 1.0;
	double high = 2.0;
	double ans;
	for(int i = 0;i < 20;i++)
	{
		ans = (low + high) / 2.0;
		if(ans * ans < 3.0)
			low = ans;
		else
			high = ans;
	}
	cout << ans << endl;
	return 0;
}
*/

/*
//字符串压缩
int main()
{
	string str;
	string ans;
	getline(cin,str);//输入
	int f[1000] = {0};
	for(int i = 0;i < str.size();i++)
    {
        if(str[i] == ' ')
            ans += str[i];
        else
        {
            f[str[i] - 'a' + 500]++;
            if(f[str[i] - 'a' + 500] == 1 || f[str[i] - 'a' + 500] == 3 || f[str[i] - 'a' + 500] == 6)
            {
                ans += str[i];
            }
            else
                continue;
        }

    }
    cout << ans << endl;
	return 0;
}
*/

/*
//01串输出
int main(){
	for(int a=0;a<2;a++){
		for(int b=0;b<2;b++){
			for(int c=0;c<2;c++){
				for(int d=0;d<2;d++){
					for(int e=0;e<2;e++){
						cout<<a<<b<<c<<d<<e<<endl;
					}
				}
			}
		}
	}
	return 0;
}
*/

/*
//字母图形-2021-04-14  70分
int main(){
	int n,m;
	cin >> n >> m;
	string str;
	for(int i = 0;i < m;i++)//构造初试字符串
    {
        str += 'A' + i;
    }
    cout << str << endl;
    for(int i = 1;i < n;i++)
    {
        for(int j = i;j >= 1;j--)
        {
            cout << (char)('A' + j);
        }
        for(int k = 0;k < m - i;k++)
        {
            cout << (char)('A' + k);
        }
        cout << endl;
    }
	return 0;
}

//把整个表求出来 要哪一部分直接输出即可
#define maxsize 27
void drawing(int n,int m)
{
	char s;
	char a[maxsize][maxsize];
	for(int i=1;i<=n;i++)
	{
		s='A';
		for(int j=i;j<=m;j++)
		{
			a[i][j]=s++;//
		}
		s='A';
		for(int j=i-1;j>=1;j--)
		{
			a[i][j]=++s;//很灵活 宝贝
		}
	}
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=m;j++)
	{
		cout<<a[i][j];
	}
	cout<<endl;
}
}
int main()
{
    int n,m;
    cin>>n>>m;
    drawing(n,m);
    return 0;
}
*/

/*
//数列特征-100
int main()
{
    int n;
    cin >> n;
    int minnum = INT_MAX;
    int maxnum = INT_MIN;
    int num;
    int sum = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> num;
        sum += num;
        minnum = min(minnum,num);
        maxnum = max(maxnum,num);
    }
    cout << maxnum << endl;
    cout << minnum << endl;
    cout << sum << endl;
    return 0;
}
*/

/*
//查找整数--100
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    int num;
    for(int i = 0 ;i < n;i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    int a;cin >> a;
    int ans = 0;
    for(int i = 0;i < n;i++)
    {
        if(vec[i] == a)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
*/

/*
//6杨辉三角-2021-04-14 -- 100
int main()
{
    int n;
    cin >> n;
    vector< vector<int> > ans;
    vector<int> vec;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            if(j == 1 || j == i)
                vec.push_back(1);
            else
                vec.push_back(ans[i - 2][j - 2] + ans[i - 2][j - 1]);
        }
        ans.push_back(vec);
        vec.clear();
    }
    for(int i = 0;i < ans.size();i++)
    {
        for(int j = 0;j < ans[i].size();j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

/*
//7特殊的数字 -- 100
bool isFea(int i)
{
    int n = i;
    int sum = 0;
    int mid;
    while(n)
    {
        mid = n % 10;
        sum += mid * mid * mid;
        n /= 10;
    }
    return  (sum == i);
}

int main()
{
    for(int i = 100;i <= 999;i++)
    {
        if(isFea(i))
            cout << i << endl;
    }
    return 0;
}
*/

/*
//8回文数  VS正确  codeblocks不支持to_string函数
bool isFea(int n)
{
    string str = to_string(n);
    int i = 0;int j = str.size() - 1;
    bool ans = true;
    while(i < j)
    {
        if(str[i] == str[j])
        {
            i++,j--;
        }
        else
        {
            ans = false;
            break;
        }
    }
    return ans;
}

int main()
{
    for(int i = 1000;i <= 9999;i++)
    {
        if(isFea(i))
            cout << i << endl;
    }
    return 0;
}
*/

/*
//特殊回文数--100
bool isFea(int n)
{
    if(n % 10 == 0 && n != 0)
        return false;
    int midNum = 0;
    int x = n;
    while(x > midNum)
    {
        midNum = midNum * 10 + x % 10;
        x /= 10;
    }
    return midNum == x || midNum / 10 == x;
}

int sumnum(int i)
{
    int sum = 0;
    while(i)
    {
        sum += i % 10;
        i /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 10000;i <= 999999;i++)
    {
        if(isFea(i) && sumnum(i) == n)
            cout << i << endl;
    }
    return 0;
}
*/

/*
//圆面积--100
#define PI 3.14159265358979323
int main()
{
    int r;
    cin >> r;
    double area = PI * r * r;
    printf("%.7lf", area);
    return 0;
}
*/

/*
//Fibonacci数列--100
int main()
{
    int n;
    cin >> n;
    int a = 1;int b = 1;
    int c;
    for(int i = 3;i <= n;i++)
    {
        c = (a + b) % 10007;
        a = b;
        b = c;
    }
    cout << c << endl;
    return 0;
}
*/

/*
//十进制转十六进制--100
int main()
{
    int n;
    cin >> n;
    string ans;
    if(n == 0)
        ans += '0';
    char ch[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(n)
    {
        ans += ch[n % 16];
        n /= 16;
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}
*/

/*
//十六进制转十进制--100
char ch[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int find_num(char cha)
{

    for(int i = 0;i < 16;i++)
    {
        if(ch[i] == cha)
            return i;
    }
}
int main()
{
    string str;
    cin >> str;
    long long ans = 0;
    long long mid = 1;
    int i = str.size() - 1;
    while(i >= 0)
    {
        ans += find_num(str[i]) * mid;
        mid *= 16;
        i--;
    }
    cout << ans << endl;
    return 0;
}
*/


/*
//十六进制转八进制--先转换成十进制  再转换成八进制  2021-04-14
//蓝桥杯给的数据实在太长  但是程序是对的
char ch16[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char ch8[16] = {'0','1','2','3','4','5','6','7'};
int find_num(char cha)
{

    for(int i = 0;i < 16;i++)
    {
        if(ch16[i] == cha)
            return i;
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        string str;
        cin >> str;
        long long numten = 0;
        long long mid = 1;
        string numeight;
        int ii = str.size() - 1;
        //将转换出的十六进制数转换成十进制
        while(ii >= 0)
        {
            numten += find_num(str[ii]) * mid;
            mid *= 16;
            ii--;
        }
        //将转换出的十进制数numten转换成八进制
        while(numten)
        {
            numeight += ch8[numten % 8];
            numten /= 8;
        }
        reverse(numeight.begin(),numeight.end());
        cout << numeight << endl;
    }
    return 0;
}
*/

/*
//数列排序  用快速排序做--100
int vec[1000];
void quick_sort(int vec[], int l, int r)
{
    if (l >= r)
        return;
    int i = l - 1, j = r + 1;
    int x = vec[l + r >> 1];
    while (i < j)
    {
        do i++; while(vec[i] < x);
        do j--; while(vec[j] > x);
        if (i < j)   swap(vec[i], vec[j]);
    }
    quick_sort(vec, l, j);
    quick_sort(vec, j + 1, r);
}

int main()
{
    int n;
    cin >> n;
    //vector<int> vec;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec[i] = num;
    }
    quick_sort(vec, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
//时间转换--100
int main()
{
    int n;
    cin >> n;
    int hour = n / 3600;
    int minute = n % 3600 / 60;
    int sec = n % 60;
    cout << hour << ":" << minute << ":" << sec << endl;
    return 0;
}
*/

/*
//字符串对比--100
int comp(string str1,string str2)//可不用写这个函数  用str1 == str2代替情况2即可
{
    int f1[100];
    int f2[100];
    for(int i = 0;i < str1.size();i++)
    {
        f1[str1[i] - 'A']++;
    }
    for(int i = 0;i < str1.size();i++)
    {
        f2[str2[i] - 'A']++;
    }
    int chayi = 0;
    for(int i = 0;i < 100;i++)
    {
        if(f1[i] != f2[i])
            chayi++;
    }
    return chayi;
}
bool compS3(string str1,string str2)
{
    bool ans = true;
    for(int i = 0;i < str1.size();i++)
    {
        if(str1[i] == str2[i] || abs(str1[i] - str2[i]) == 32)
            continue;
        else
        {
            ans = false;
            break;
        }
    }
    return ans;
}
int main()
{
    int ans;
    string str1,str2;
    cin >> str1;
    cin >> str2;
    if(str1.size() != str2.size())
        ans = 1;
    else if(str1 == str2)
        ans = 2;
    else if(compS3(str1,str2))
        ans = 3;
    else if(!compS3(str1,str2))
        ans = 4;
    cout << ans << endl;
    return 0;
}
*/

/*
//分解质因数--100
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> vec;
    int ans = 0;
    //计算m-n的素数
    for (int i = 2, j = 2; i <= n; i++)
    {
        while (j < i)
        {
            if (i % j == 0)
                break;
            else
                j++;
        }
        if (j == i)
            vec.push_back(j);
        j = 2;
    }
    for (int i = m; i <= n; i++)
    {
        cout << i << "=";
        int x = i;
        for(int j = 0;j < vec.size();)
        {
            if(x % vec[j] == 0)
            {
                x /= vec[j];
                cout << vec[j];
                if(x != 1)
                    cout << "*";
                else break;
            }
            else j++;
        }
        cout << endl;
    }
    return 0;
}
*/

/*
//矩阵乘法--100   2021-04-15
int main()
{
    int n,m;
    cin >> n >> m;
    int f[n][n];
    int num;
    //读取数据
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> num;
            f[i][j] = num;
        }
    }
    int ans[n][n];//初始单位阵
    int finalans[n][n];//答案矩阵初始化
    //初始单位阵
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(i == j)
                ans[i][j] = 1;
            else
                ans[i][j] = 0;
        }
    }

    for(int i = 0;i < m;i++)//一共乘m次
    {
        for(int j = 0;j < n;j++)//行列遍历
        {
            for(int k = 0;k < n;k++)
            {
                int mid = 0;
                for(int l = 0;l < n;l++)
                {
                    mid += ans[j][l] * f[l][k];//答案矩阵每一个数的计算方式
                }
                finalans[j][k] = mid;
            }
        }
        //将中间答案阵赋给答案阵
        for(int x = 0;x < n;x++)
        {
            for(int y = 0;y < n;y++)
            {
                ans[x][y] = finalans[x][y];
            }
        }
    }
    for(int i = 0;i < n;i++)//打印矩阵
    {
        for(int j = 0;j < n;j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

/*
//矩形面积交--情况没考虑到位
int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    printf("%.2lf",abs(y2 - y3) * abs(x2 - x3));
    return 0;
}
int main()
{
	double x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	if(x1>x2) swap(x1,x2);
	if(x3>x4) swap(x3,x4);
	if(y1>y2) swap(y1,y2);
	if(y3>y4) swap(y3,y4);
	double x = max(x1,x3),X = min(x2,x4);
	double y = max(y1,y3),Y = min(y2,y4);
	double ans = max((X-x)*(Y-y),0.0);
	if(X-x<0 || Y-y<0) ans=0;
	printf("%.2f\n",ans);
 	return 0 ;
}
*/

/*
//数的读法
#include <iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	string a[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	string b[10]={"","shi","bai","qian","wan","shi","bai","qian","yi","shi"};//题目说了不超过20亿
	for(int i=0;i<str.length();i++)
    {
		int flag=str[i]-'0';	//当前数字
		int len=str.length();	//字符长度
		if(flag==0)
		{
			if(len-i==5 || len-i==9)
				cout<<b[len-i-1]<<" ";	//这里和第20、21行代码呼应，比如输入五十万，那里读了五十这里要读万
			if((len-i)!=1 && str[i+1]!='0')
				cout<<"ling ";	//中间有一或多个0，它的下一位不为0时，它要读成 0
		}
		else if((len==2||len==6||len==10) && flag==1 && i==0)
			cout<<"shi ";	//一十要读成十
		else
			cout<<a[flag]<<" "<<b[len-i-1]<<" ";
	}
	return 0;
}
*/

/*
//sine之舞---100--2021-04-16
//求An的表达式
string An(int n)
{
    string ans;
    for(int i = 1;i <= n;i++)
    {
        ans += "sin(";
        ans += '0' + i;
        if(i % 2 == 1 && i != n)
            ans += "-";
        else if(i % 2 == 0 && i != n)
            ans += "+";
    }
    for(int i = 0;i < n;i++)
    {
        ans += ")";
    }
    return ans;
}
int main()
{
	int n;
	cin >> n;
	string ans;
	for(int i = 0;i < n - 1;i++)
    {
        ans += "(";
    }
	for(int i = 1;i <= n;i++)
    {
        ans += An(i);
        ans += "+";
        ans += '0' + n - i + 1;
        if(i != n)
            ans += ")";
    }
    cout << ans << endl;
	return 0;
}
*/

/*
//FJ的字符串---100--2021-04-16
int main()
{
	int n;
	cin >> n;
	string finalans;
	string ans;
	for(int i = 0;i < n;i++)
    {
        finalans += ans;
        finalans += 'A' + i;
        finalans += ans;
        ans = finalans;
        finalans = "";
    }
    cout << ans << endl;
	return 0;
}
*/

/*
//芯片测试---100--2021-04-16
int main()
{
	int n;
	cin >> n;
	int f[n][n];
	int ans;
	for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> f[i][j];
        }
    }
    int mid = 0;
    for(int i = 0,j = 0;i < n;i++)
    {
        while(j < n)
        {
            mid += f[j][i];
            j++;
        }
        if(mid > n / 2)
            cout << i + 1 << " ";
        mid = 0;
        j = 0;
    }
    cout << endl;
	return 0;
}
*/

/*
//龟兔赛跑
int main()
{
	int v1, v2, t, s, l;
	cin>>v1>>v2>>t>>s>>l;
	int d1 = 0;  //兔子跑的距离
	int d2 = 0;  //乌龟跑的距离
	int useTime = 0;
	while(d1 < l && d2 < l)
	{
		useTime++;
		d1 += v1;
		d2 += v2;
		if(d1 >= l || d2 >= l)
		{
			break;
		}
		if(d1 - t >= d2)
		{//让乌龟多跑几秒
			for(int i = 0; i < s && d2 < l; i++)
			{
				useTime++;
				d2 += v2;
			}
			if(d2 >= l)
			{//乌龟多跑的几秒有可能就让它赢了
				break;
			}
		}
	}
	if(d1 >= l && d2 >= l)cout<<"D"<<endl;
	else if(d1 >= l)cout<<"R"<<endl;
	else if(d2 >= l)cout<<"T"<<endl;
	cout<<useTime<<endl;
	return 0;
}
*/

/*
//回形取数
int main(){
    int m,n;
    cin >> m >> n;
    int a[m][n] = {0};
    for(int i = 0;i < m;i++)
        for(int j = 0;j < n;j++)
            cin >> a[i][j];
    if(m == 1||n == 1)
    {
        for(int i = 0;i < m;i++)
            for(int j = 0;j < n;j++)
                cout << a[i][j] << " ";
    }
    else
    {
        int i = 0,j = 0;
        int c = m,d = n;//行和列的数目
        int flag = 0;
        while(c > 0 && d > 0){
            i = j = flag;
            if(d == 1)//出现1列多行的问题，直接全部显示
            {
                for(i = flag;i < flag + c;i++){//最后一列，直接显示
                    cout << a[i][j] << " ";
                }
                break;
            }
            else
            {
                for(i = flag;i < flag + c - 1;i++){//最开始向下
                    cout << a[i][j] << " ";
                }
            }
    		if(c == 1){//出现1行多列的问题，
                for(j = flag;j < flag + d;j++){
                    cout << a[i][j] <<" ";
                }
                break;
            }
            else{
                for(j = flag;j < flag + d - 1;j++){
                    cout<< a[i][j] <<" ";
                }
            }

            for(;i > flag;i--){
                cout << a[i][j] << " ";
            }
            for(;j > flag;j--){
                cout << a[i][j] << " ";
            }
            flag++;
            c -= 2;d -= 2;
        }
    }
    return 0;
}
*/

/*
//报时助手 --- 100 -- 2021-04-16
int main(){
    int h,m;
    cin >> h >> m;
    string hour[24] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven"
    , "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"
    , "twenty one", "twenty two", "twenty three"};
    string minute[21] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven"
    , "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    string minutePlus[4] = {"twenty", "thirty", "forty", "fifty"};
    cout << hour[h] << " ";
    if(m == 0)
        cout << "o'clock";
    else if(m >0 && m <= 20)
        cout << minute[m];
    else
    {
        cout << minutePlus[m / 10 - 2] << " ";
        cout << hour[m % 10];
    }
    return 0;
}
*/

/*
//Huffuman树 --- 100 -- 2021-04-16
int main() {
    int m;
    int ans = 0;
    cin >> m;
    vector<int> vec;
    int num;
    for (int i = 0; i < m; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    while (!vec.empty())
    {
        sort(vec.begin(), vec.end());
        if (vec.size() >= 2)
        {
            ans += vec[0], ans += vec[1];
            int mid = vec[0] + vec[1];
            reverse(vec.begin(), vec.end());
            vec.pop_back(); vec.pop_back();
            vec.push_back(mid);
        }
        else
        {
            //ans += vec[0];
            vec.pop_back();
        }
    }
    cout << ans << endl;
    return 0;
}
*/

/*
//高精度加法 --- 100 -- 2021-04-16
vector<int> add(vector<int> &A,vector<int> &B)
{
    vector<int> ans;
    int t = 0;
    for(int i = 0;i < A.size() || i < B.size();i++)
    {
        if(i < A.size())    t += A[i];
        if(i < B.size())    t += B[i];
        ans.push_back(t % 10);
        t /= 10;
    }
    if(t)   ans.push_back(t);
    return ans;
}
int main() {
    string a;
    string b;
    cin >> a;
    cin >> b;
    vector<int> ans,A,B;
    for(int i = a.size() - 1;i >= 0;i--)
    {
        A.push_back(a[i] - '0');
    }
    for(int i = b.size() - 1;i >= 0;i--)
    {
        B.push_back(b[i] - '0');
    }
    ans = add(A,B);
    for(int i = ans.size() - 1;i >= 0;i--)
    {
        cout << ans[i];
    }
    return 0;
}
*/

/*
//阶乘计算---高精度乘法 --- 100 -- 2021-04-16
vector<int> multi(vector<int> &A ,int b)
{
    vector<int> C;
    int t = 0;
    for(int i = 0;i < A.size() || t;i++)
    {
        if(i < A.size())
            t = t + A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }
    while(C.size() > 1 && C.back() == 0)
        C.pop_back();
    return C;
}
int main() {
    int n;
    cin >> n;
    vector<int> A,C;
    A.push_back(1);
    for(int i = 1;i <= n;i++)
    {
        C = multi(A,i);
        A = C;
    }

    for(int i = C.size() - 1;i >= 0;i--)
    {
        cout << C[i];
    }
    return 0;
}
*/

/*
//冒泡排序
void bubble_sort(int q[],int n)
{
    for(int i = 0;i < n - 1 ;i++)
    {
        for(int j = 0;j < n - i - 1;j++)
        {
            if(q[j] > q[j + 1])
                swap(q[j],q[j + 1]);
        }
    }
}
int main(){
    int n;
    cin >> n;
    int q[n];
    for(int i = 0;i < n;i++)
    {
        cin >> q[i];
    }
    bubble_sort(q,n);
    for(int i = 0;i < n;i++)
        cout << q[i] << " ";
    return 0;
}
*/

/*
//查找子串位置
void getNext(int * next,string needle)
{
    next[0] = 0;
    int j = 0;
    for(int i = 1;i < needle.size();i++)
    {
        while(j > 0 && needle[i] != needle[j])//前后缀不相等的情况
            j = next[j - 1];
        if(needle[i] == needle[j])//前后缀相等的情况
            j++;
        next[i] = j;//更新next数组
    }
}
int strStr(string haystack,string needle)
{
    if(needle.size() == 0)  return 0;
    int next[needle.size()];
    getNext(next,needle);
    int j = 0;
    for(int i = 0;i < haystack.size();i++)
    {
        while(haystack[i] != needle[j] && j > 0)
            j = next[j - 1];
        if(haystack[i] == needle[j])
            j++;
        if(j == needle.size())
            return i - j + 1;
    }
    return -1;
}
int main()
{
    string haystack,needle;
    cin >> haystack >> needle;
    cout << strStr(haystack,needle) << endl;
    return 0;
}
*/

/*
int main()   //辗转相除法求最大公约数
{
   int m, n, a, b, t, c;
   printf("Input two integer numbers:\n");
   scanf("%d%d", &a, &b);
   m=a;
   n=b;
   while(b!=0)  //余数不为0，继续相除，直到余数为0
    {
       c=a%b;
       a=b;
       b=c;
    }
   printf("最大公约数:%d\n", a);
   printf("最小公倍数:%d\n", m * n / a);
}
*/

/*
//历届试题 核桃的数量 --- 100 -- 2021-04-17
int getMaxyue(int a,int b)
{
    int ans;
    int m = a,n = b;
    int c;
    while(b)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return m * n / a;
}
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int mid1,mid2,mid3;
    mid1 = getMaxyue(a,b);
    mid2 = getMaxyue(a,c);
    mid3 = getMaxyue(b,c);
    cout << max(mid1,max(mid2,mid3)) << endl;
    return 0;
}
*/

//历届试题 错误票据 --codeblocks跑不出  但是评测满分
int main()
{
    int n,a[102],num;
    cin >> n;
    if(n <= 0)  return;
    int i = 0;
    while(cin >> a[i])  i++;
    sort(a, a + i);
    int ans1,ans2;
    for(int j = 1;j < i;j++)
    {
        if(a[j] == a[j - 1])    ans2 = a[j];
        if(a[j] == a[j - 1] + 2) ans1 = a[j - 1] + 1;

    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}
