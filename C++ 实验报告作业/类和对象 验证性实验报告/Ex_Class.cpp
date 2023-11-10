#include "Ex_class.h"
#include<bits/stdc++.h>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
const int N = 100;

// ���캯��
CPerson::CPerson(const char* name, int id, const char* gender) 
{
    strcpy(m_name, name);
    m_id = id;
    strcpy(m_gender, gender);
}

// ������Ա��Ϣ
void CPerson::SetPersonInfo(const char* name, int id, const char* gender) 
{
    strcpy(m_name, name);
    m_id = id;
    strcpy(m_gender, gender);
}

// ��ȡ��Ա��Ϣ
void CPerson::GetPersonInfo() const 
{
    cout << "Name: " << m_name << endl;
    cout << "ID: " << m_id << endl;
    cout << "Gender: " << m_gender << endl;
}

int main() 
{
    CPerson person1("John Doe", 123, "Male");  // ����һ�����г�ʼֵ����Ա����
    cout << "Person 1:" << endl;
    person1.GetPersonInfo();  // ������ú����Ա��Ϣ

    // ��������
    int id;
    char name1[N], gender[N];
    cin >> id;
    cin >> name1 >> gender;

    person1.SetPersonInfo(name1, id, gender);  // ������Ա1����Ϣ
    cout << "Person 1 (updated):" << endl;
    person1.GetPersonInfo();  // ������º����Ա1��Ϣ

    return 0;
}