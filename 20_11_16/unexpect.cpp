//#include <stdio.h>
//#include <exception>
//using namespace std;
//
//void myunex()
//{
//	puts("발생해서는 안 되는 에러 발생");
//	exit(-2);
//}
//
//void calc() throw(int)
//{
//	throw "stirng";
//}
//
//int main()
//{
//	/* 미지정 예외 핸들러 */
//	set_unexpected(myunex);
//	try {
//		calc();
//	}
//	catch (int) {
//		puts("정수형 예외 발생");
//	}
//	puts("프로그램 종료");
//}