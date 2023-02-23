//#include<iostream>
//using namespace std;
//
////多态：多种形态
//
////静态多态
////函数重载 运算符重载
//
////多态大多指动态多态
////虚函数 派生类 来实现动态多态，运行时多态
//
////静态多态函数地址是早已绑定的，在编译阶段就已经确定
////动态多态中函数地址是在程序运行时才绑定的，地址晚绑定
//
////动态多态满足条件，派生类需要重写基类中的虚函数，基类函数为虚函数，添加关键字virtual
////函数名，返回值类型，参数列表都相同，只有函数体不同
//
////动态多态的调用
////父类的引用指向子类的对象
//
//class animal
//{
//
//public:
//
//	virtual void speak() = 0
//	{
//		cout << "the animal is speaking." << endl;
//	}
//
//	//此时类内部只有一个虚函数指针 vfptr ，指向一个虚函数表 vftable ，virtue function table
//	//表的内部会记录一个虚函数的地址 &animal::speak ，当前 animal::speak 为虚函数
//
//
//};
//
//class cat :public animal
//{
//
//public:
//
//	void speak()
//	{
//		cout << "the cat is speaking." << endl;
//	}
//
//	//如果没有重写，那么此时类内继承父类全部内容，即一个虚函数表指针，指向虚函数表
//	//虚函数表中记录的是一个虚函数地址 &animal::speak 
//
//	//若此时发生子类重写父类中的虚函数，则子类会将子类虚函数表中的地址 &animal::speak 覆盖为 &cat::speak
//	//但父类中的虚函数表中的地址并未改变，只是替换子类的虚函数表中的地址
//
//	//当父类的指针或引用指向子类对象时，因为本身还是子类对象，就会发生多态
//	//此时就会调用子类虚函数表中存储的地址指向的函数，进入该函数
//
//};
//
//class dog :public animal
//{
//public:
//	void speak()
//	{
//		cout << "the dog is speaking" << endl;
//	}
//};
//
////执行说话的函数
////地址早绑定，在编译阶段确定地址
////若想让猫说话，需要地址晚绑定
//void speak(animal& ani)
//{
//	ani.speak();
//}
//
//void test()
//{
//	cat c;
//
//	//基类的引用接受派生类的对象
//	//允许派生类向基类强制类型转换
//
//	//本意是想cat speak
//	speak(c);
//
//	dog d;
//	speak(d);
//
//	c.animal::speak();
//
//	cout << "sizeof(animal) = " << sizeof(animal) << endl;
//	cout << "sizeof(cat) = " << sizeof(cat) << endl;
//	cout << "sizeof(dog) = " << sizeof(dog) << endl;
//
//	//在多态使用中，基类的虚函数大多为空，无实际意义，可以修改为纯虚函数
//	//当一个类中有一个纯虚函数，这个类即成为抽象类
//
//	//抽象类无法实例化对象
//	//子类必须重写抽象类中的纯虚函数
//
//
//}
//
//int main()
//{
//
//	test();
//
//	return 0;
//}
