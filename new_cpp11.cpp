类：

委托构造函数
    MyClass(int data, string s)
        : m_data(data), m_s(s) {}
    MyClass() : MyClass(0, ""){}  //委托构造函数
    MyClass(string s) : MyClass(0, s) {}  // 委托构造函数
