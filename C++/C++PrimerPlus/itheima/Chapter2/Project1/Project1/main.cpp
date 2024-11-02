#include<iostream>
#include<string>
#include<cstring>
using namespace std;

#define MAX 1000
struct Person {
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbooks {
	//ͨѶ¼�б������ϰ�˵�����
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼�� ��ϵ�˵ĸ���
	int m_Size;
};

void deletePerson(struct Addressbooks * abs);
int isExist(struct Addressbooks * abs, string name);
void showMenu(void);
void addPerson(struct Addressbooks * abs);
void showPerson(struct Addressbooks * abs);
void findPerson(struct Addressbooks * abs);
void modifyPerson(struct Addressbooks * abs); 
void cleanPerson(struct Addressbooks * abs);
int main(void) {

	struct Addressbooks abs;
	abs.m_Size = 0;
	int choice;
	/*showMenu();
	cin >> choice;*/
	while (1) {
		showMenu();
		cin >> choice;
		//do something
		switch (choice) {
		case 1:
			addPerson(&abs);//���õ�ַ����,��������ʵ��
			break;
		case 2:
			showPerson(&abs);//���õ�ַ����,��������ʵ��
			break;
		case 3:
		/*{	cout << "������Ҫɾ������ϵ�˵�����: " << endl;
			string name;
			cin >> name;
			if (isexist(&abs, name) != -1)
				cout << "�ҵ���" << endl;
			else
				cout << "û�ҵ�" << endl;
		}*/
			deletePerson(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��!!" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "default" << endl;
			return 0;
			break;
		}
	}
	return 0;
}

void cleanPerson(struct Addressbooks * abs) {
	abs->m_Size = 0;
	cout << "ͨѶ¼�Ѿ����" << endl;
	system("pause");
	system("cls");
}
//5. �޸���ϵ����Ϣ

void modifyPerson(struct Addressbooks * abs) {
	cout << "��������Ҫ�޸ĵ���ϵ��: " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		//cout << "�ҵ���" << endl;
		//����
		cout << "����������" << endl;
		string name;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1--male" << endl;
		cout << "2--female" << endl;
		int sex = 0;
		while (1) {

			cin >> sex;
			if (sex == 1 || sex == 2) {

				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else cout << "�������˴��������,��������һ��" << endl;

		}
		//����
		cout << "����������: " << endl;
		int age;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ: " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;
	}
	else
		cout << "û�ҵ�" << endl;

	system("pause");
	system("cls");
}


//4. ����ָ������ϵ����Ϣ
void findPerson(struct Addressbooks * abs) {
	cout << "��������Ҫ���ҵ���ϵ��: " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "�ҵ���" << endl;
		int i = ret;
		cout << "����: " << abs->personArray[i].m_Name << "\t";
		cout << "�Ա�: " << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "����: " << abs->personArray[i].m_Age << "\t";
		cout << "�绰: " << abs->personArray[i].m_Phone << "\t";
		cout << "סַ: " << abs->personArray[i].m_Addr << "\t";
		cout << endl;
	}
	else
		cout << "û�ҵ�" << endl;

	system("pause");
	system("cls");
}

//3. ɾ����ϵ��
void deletePerson(struct Addressbooks * abs) {
	cout << "��������Ҫɾ������ϵ��: " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		//cout << "�ҵ���" << endl;
		//���������ɾ��,��ѭ��ǰһ��
		for (int j = ret; j < abs->m_Size - 1; j++) {
			abs->personArray[j] = abs->personArray[j + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
		cout << "û�ҵ�" << endl;

	system("pause");
	system("cls");
}
//�����ϵ���Ƿ����
int isExist(struct Addressbooks * abs, string name) {
	int i = abs->m_Size - 1;
	for (; i >= 0; i--) {
		if (name == abs->personArray[i].m_Name)
			break;
		else;
	}
	return i;
}
//2. ��ʾ��ϵ��
void showPerson(struct Addressbooks * abs) {
	if (abs->m_Size == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "����: " << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�: " << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "����: " << abs->personArray[i].m_Age << "\t";
			cout << "�绰: " << abs->personArray[i].m_Phone << "\t";
			cout << "סַ: " << abs->personArray[i].m_Addr << "\t";
			cout << endl;
		}
	}

	system("pause");
	system("cls");
}
//1. �����ϵ��
void addPerson(struct Addressbooks * abs) {
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼����,�޷����" << endl;
		return;
	}
	else {
		//����
		cout << "����������" << endl;
		string name;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1--male" << endl;
		cout << "2--female" << endl;
		int sex = 0;
		while (1) {

		cin >> sex;
		if (sex == 1 || sex == 2) {

		abs->personArray[abs->m_Size].m_Sex = sex;
		break;
		}
		else cout << "�������˴��������,��������һ��" << endl;

		}
		//����
		cout << "����������: " << endl;
		int age;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ: " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		//��ʾ�û�
		cout << "��ӳɹ�" << endl;

		system("pause");
		system("cls");

	}
}
void showMenu(void) {

	cout << "**************************" << endl;
	cout << "*****  1,�����ϵ��  *****" << endl;
	cout << "*****  2,��ʾ��ϵ��  *****" << endl;
	cout << "*****  3,ɾ����ϵ��  *****" << endl;
	cout << "*****  4,������ϵ��  *****" << endl;
	cout << "*****  5,�޸���ϵ��  *****" << endl;
	cout << "*****  6,�����ϵ��  *****" << endl;
	cout << "*****  0,�˳�ͨѶ¼  *****" << endl;
	cout << "**************************" << endl;
}