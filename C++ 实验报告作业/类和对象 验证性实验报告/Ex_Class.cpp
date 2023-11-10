#include "Ex_class.h"
#include<bits/stdc++.h>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
const int N = 100;

// 构造函数
CPerson::CPerson(const char* name, int id, const char* gender) 
{
    strcpy(m_name, name);
    m_id = id;
    strcpy(m_gender, gender);
}

// 设置人员信息
void CPerson::SetPersonInfo(const char* name, int id, const char* gender) 
{
    strcpy(m_name, name);
    m_id = id;
    strcpy(m_gender, gender);
}

// 获取人员信息
void CPerson::GetPersonInfo() const 
{
    cout << "Name: " << m_name << endl;
    cout << "ID: " << m_id << endl;
    cout << "Gender: " << m_gender << endl;
}

int main() 
{
    CPerson person1("John Doe", 123, "Male");  // 创建一个带有初始值的人员对象
    cout << "Person 1:" << endl;
    person1.GetPersonInfo();  // 输出设置后的人员信息

    // 输入数据
    int id;
    char name1[N], gender[N];
    cin >> id;
    cin >> name1 >> gender;

    person1.SetPersonInfo(name1, id, gender);  // 更新人员1的信息
    cout << "Person 1 (updated):" << endl;
    person1.GetPersonInfo();  // 输出更新后的人员1信息

    return 0;
}