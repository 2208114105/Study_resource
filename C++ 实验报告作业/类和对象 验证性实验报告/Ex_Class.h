#pragma once
#include<bits/stdc++.h>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

// ��Ա��
class CPerson 
{
public:
    // ���캯��
    CPerson(const char* name = "", int id = 0, const char* gender = "");

    // ������Ա��Ϣ
    void SetPersonInfo(const char* name, int id, const char* gender);

    // ��ȡ��Ա��Ϣ
    void GetPersonInfo() const;

private:
    char m_name[50];    // ����
    int m_id;              // ���
    char m_gender[10];  // �Ա�
};