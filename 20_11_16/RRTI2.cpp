//#include <stdio.h>
//#include <typeinfo>
//
//class Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); }
//};
//
//class Child : public Parent
//{
//private:
//	int num;
//public:
//	Child(int anum):num(anum){}
//	/* RTTI는 가상 함수를 가진 클래스에 대해서만 사용할 수 있다. */
//	virtual void PrintMe() { printf("I am Child\n"); }
//	void PrintNum() { printf("Hello Child = %d\n", num); }
//};
//
//void func(Parent* p)
//{
//	p->PrintMe();
//	if (typeid(*p) == typeid(Child)) {
//		((Child*)p)->PrintNum();
//	}
//	else {
//		puts("이 객체는 num을 가지고 있지 않습니다.");
//	}
//}
//
//int main()
//{
//	Parent p;
//	Child c(5);
//
//	func(&c);
//	func(&p);
//}