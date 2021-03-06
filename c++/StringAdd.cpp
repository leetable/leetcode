#include<iostream>
#include<string>
using namespace std;

string addStrings(string num1, string num2)
{	
	//-1为了num1[a1]取到最后一位
	int a1 = num1.size() - 1;
    cout<<"length of a1:"<<a1<<endl;
	int a2 = num2.size() - 1;
    cout<<"length of a2:"<<a2<<endl;

	int step = 0;    //进位
	string ret;      //相加后的字符串保存在 ret 里面
	int sum = 0;     //两字符串对应位 相加之后的和
	while (a1 >= 0 || a2 >= 0)
	{
		sum = 0;
		sum += step;
		if (a1 >= 0)
		{
           // cout<<"num1:"<<num1[a1]<<endl;
			sum += num1[a1] - '0';   // 将字符数字转化为 数字 再相加   ‘5’----->5
		}
		//cout<<"sum"<<sum<<endl;

		if (a2 >= 0)
		{
			sum += num2[a2] - '0';
		}
		cout<<"sum: "<<sum<<endl;

		if (sum >= 10)     //对应位相加 再加上进位 如果大于>=10说明要进位  更新step为1
		{
			sum -= 10;     //sum-10的值  是相加后当前位的值
			step = 1;
		}
		else
		{
			step = 0;       //如果没有进位step要更新为0  
		}
		ret.insert(0, 1, sum + '0');
        cout<<"ret is :"<<ret<<endl;
		a1--;
		a2--;

	}
	if (step == 1)                 //最后再考虑一下最高位相加后有没有进位；   
	{
		ret.insert(0, 1, '1');//第0位拼接上1个‘1’
		cout<<"add step ret is :"<<ret<<endl;
	}
	
	return ret;
}


int main()
{
	string s1;
	string s2;

    cin>>s1>>s2;
    cout<<endl<<"result is "<< addStrings(s1, s2);

	system("pause");
	return 0;
}
