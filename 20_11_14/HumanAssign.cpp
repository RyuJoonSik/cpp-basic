//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//private:
//	char* pname;
//	int age;
//
//public:
//	Human() {
//		pname = new char[1];
//		pname[0] = NULL;
//		age = 0;
//	}
//	Human(const char* aname, int aage) {
//		pname = new char[strlen(aname) + 1];
//		strcpy(pname, aname);
//		age = aage;
//	}
//
//	// 복사 생성자
//	Human(const Human& other) {
//		pname = new char[strlen(other.pname) + 1];
//		strcpy(pname, other.pname);
//		age = other.age;
//	}
//
//	// 대입 연산자
//	Human& operator=(const Human& other) {
//		if (this != &other) {
//			delete[]pname;
//			pname = new char[strlen(other.pname) + 1];
//			strcpy(pname, other.pname);
//			age = other.age;
//		}
//		return *this;
//	}
//
//	~Human() {
//		delete[]pname;
//	}
//
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human kang("강감찬", 1424);
//	Human boy;
//	Human kim, lee;
//
//	/*
//	복사 생성자 호출
//	Human boy = kang;
//	*/ 
//
//	// 대입 연산자 호출
//	boy = kang; 
//	boy.intro();
//
//	/* 가능하다 */
//	kim = lee = boy = kang;
//	(boy = kang).intro();
//}
