//#include <string>
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class myptr
//{
//private:
//	T* p;
//
//public:
//	explicit myptr(T *ap):p(ap){}
//	~myptr() { delete p; }
//	T& operator *() const { return *p; }
//	T* operator ->() const { return p; }
//};
//
//int main()
//{
//	/* 반드시 new 연산자로 할당한 포인터만 전달해야 한다. */
//	myptr<string> pStr(new string("AutoPtr Test"));
//
//	cout << *pStr << endl;
//	cout << "길이 = " << pStr->size() << endl;
//}