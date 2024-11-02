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
	//通讯录中保存的练习人的数组
	struct Person personArray[MAX];
	//通讯录中当前记录的 联系人的个数
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
			addPerson(&abs);//利用地址传递,可以修饰实参
			break;
		case 2:
			showPerson(&abs);//利用地址传递,可以修饰实参
			break;
		case 3:
		/*{	cout << "请输入要删除的联系人的姓名: " << endl;
			string name;
			cin >> name;
			if (isexist(&abs, name) != -1)
				cout << "找到了" << endl;
			else
				cout << "没找到" << endl;
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
			cout << "欢迎下次使用!!" << endl;
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
	cout << "通讯录已经清空" << endl;
	system("pause");
	system("cls");
}
//5. 修改联系人信息

void modifyPerson(struct Addressbooks * abs) {
	cout << "请输入您要修改的联系人: " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		//cout << "找到了" << endl;
		//姓名
		cout << "请输入姓名" << endl;
		string name;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别
		cout << "请输入性别" << endl;
		cout << "1--male" << endl;
		cout << "2--female" << endl;
		int sex = 0;
		while (1) {

			cin >> sex;
			if (sex == 1 || sex == 2) {

				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else cout << "你输入了错误的数字,请在输入一遍" << endl;

		}
		//年龄
		cout << "请输入年龄: " << endl;
		int age;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//联系电话
		cout << "请输入联系电话: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//家庭住址
		cout << "请输入家庭住址: " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "修改成功" << endl;
	}
	else
		cout << "没找到" << endl;

	system("pause");
	system("cls");
}


//4. 查找指定的联系人信息
void findPerson(struct Addressbooks * abs) {
	cout << "请输入您要查找的联系人: " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "找到了" << endl;
		int i = ret;
		cout << "姓名: " << abs->personArray[i].m_Name << "\t";
		cout << "性别: " << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄: " << abs->personArray[i].m_Age << "\t";
		cout << "电话: " << abs->personArray[i].m_Phone << "\t";
		cout << "住址: " << abs->personArray[i].m_Addr << "\t";
		cout << endl;
	}
	else
		cout << "没找到" << endl;

	system("pause");
	system("cls");
}

//3. 删除联系人
void deletePerson(struct Addressbooks * abs) {
	cout << "请输入您要删除的联系人: " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		//cout << "找到了" << endl;
		//进行数组的删除,和循环前一动
		for (int j = ret; j < abs->m_Size - 1; j++) {
			abs->personArray[j] = abs->personArray[j + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
		cout << "没找到" << endl;

	system("pause");
	system("cls");
}
//检测联系人是否存在
int isExist(struct Addressbooks * abs, string name) {
	int i = abs->m_Size - 1;
	for (; i >= 0; i--) {
		if (name == abs->personArray[i].m_Name)
			break;
		else;
	}
	return i;
}
//2. 显示联系人
void showPerson(struct Addressbooks * abs) {
	if (abs->m_Size == 0) {
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "姓名: " << abs->personArray[i].m_Name << "\t";
			cout << "性别: " << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄: " << abs->personArray[i].m_Age << "\t";
			cout << "电话: " << abs->personArray[i].m_Phone << "\t";
			cout << "住址: " << abs->personArray[i].m_Addr << "\t";
			cout << endl;
		}
	}

	system("pause");
	system("cls");
}
//1. 添加联系人
void addPerson(struct Addressbooks * abs) {
	if (abs->m_Size == MAX) {
		cout << "通讯录满了,无法添加" << endl;
		return;
	}
	else {
		//姓名
		cout << "请输入姓名" << endl;
		string name;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		cout << "请输入性别" << endl;
		cout << "1--male" << endl;
		cout << "2--female" << endl;
		int sex = 0;
		while (1) {

		cin >> sex;
		if (sex == 1 || sex == 2) {

		abs->personArray[abs->m_Size].m_Sex = sex;
		break;
		}
		else cout << "你输入了错误的数字,请在输入一遍" << endl;

		}
		//年龄
		cout << "请输入年龄: " << endl;
		int age;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//联系电话
		cout << "请输入联系电话: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//家庭住址
		cout << "请输入家庭住址: " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		//提示用户
		cout << "添加成功" << endl;

		system("pause");
		system("cls");

	}
}
void showMenu(void) {

	cout << "**************************" << endl;
	cout << "*****  1,添加联系人  *****" << endl;
	cout << "*****  2,显示联系人  *****" << endl;
	cout << "*****  3,删除联系人  *****" << endl;
	cout << "*****  4,查找联系人  *****" << endl;
	cout << "*****  5,修改联系人  *****" << endl;
	cout << "*****  6,清空联系人  *****" << endl;
	cout << "*****  0,退出通讯录  *****" << endl;
	cout << "**************************" << endl;
}