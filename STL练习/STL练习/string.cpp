//#include<iostream>
//#include<string>
//using namespace std;
//
//void test01()
//{
//	//建议用前4中
//	string s1("aaaadfaf");
//	string s2("afa");
//	string s3(s2);
//	string s4(10, 'b');
//	string s5(s4,3);    //有误.
//	
//	cout<< s1 << endl;
//	cout<< s2 << endl;
//	cout<< s3 << endl;
//	cout<< s4 << endl;
//	cout<< s5 << endl;
//}
//
//void test02()
//{
//	string s1("fasasf");
//
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	cout << s1.capacity() << endl;
//	s1.clear();
//	s1.resize(100,'@');
//	s1.reserve(10000);
//	cout << s1.capacity() << endl;
//	cout << s1 << endl;
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//	}
//}
//
//void test03()
//{
//	string s("hello but!!!");
//	cout << s.length() << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(10, 'a');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(15);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	s.resize(5);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//}
//
//
//
//void test04()
//{
//	string s;
//	s.reserve(100);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(50);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//void test05()
//{
//	string s1("hello bit");
//	const string s2("hello bit");
//	cout << s1 << " " << s2 << endl;
//	cout << s1[0] << " " << s2[0] << endl;
//
//	s1[0] = 'H';
//	int i = s1.rfind("o", s1.size() - 1, 8);
//	cout << i << endl;	
//	cout << s1 << endl;
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << endl;
//	}
//
//
//}
//
//
//
//int main()
//{
//	test05();
//	system("pause");
//	return 0;
//}