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
//	//it=	v.insert(it,2,20);                     //�����õ�ʱ����ʱ��λ��ʱ,Ҫ��һ��������������,�����ص���ԭ����λ��.
//	it= v.erase(it);                                       //erase����ɾ��λ�ú����һ��λ��.
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