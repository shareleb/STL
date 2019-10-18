//#include<iostream>
//using namespace std;
//#include<vector>
//int main()
//{
//	vector<int> q(10,10);
//
//	vector<int> v;
//	v.reserve(100);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//
//	vector<int>::iterator it = v.begin() + 1;   //2
//	cout << *it << endl;  //2
//	//it=	v.insert(it,2,20);                     //当还用当时插入时的位置时,要用一个迭代器接收他,它返回的是原来的位置.
//	it= v.erase(it);                                       //erase返回删除位置后的下一个位置.
//	cout << *it << endl;  
//	//v.insert(v.begin(), q.begin(), q.end());
//	//v.insert(v.begin(), 10, 5);
//
//	//v.erase(v.begin());
//	//v.erase(v.begin(), v.end());
//
//			
//	//for (auto i : v)
//	//{
//	//	cout << i << " ";
//	//}
//	system("pause");
//	return 0;
//
//
//
//}