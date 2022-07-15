
int main() {
	//
	int d1[]{ 1,2,3,4,5 };
	int d2[]{ 60,70,80 };
	int n1 = sizeof(d1) / sizeof(d1[0]);
	int n2 = sizeof(d2) / sizeof(d2[0]);
	//
	Class c1{ n1,d1 };
	Class c2{ n2,d2 };
	c1 = std::move(c2); // „move“ paverčia c2 dešiniuoju reiškiniu
	//
	c1.showClass();
	//
}
