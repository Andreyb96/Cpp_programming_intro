#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

struct student {
	string name;
	int subj_1, subj_2, subj_3;
	int subj_mean;
};

bool cmp(student a, student b) {
	return a.subj_mean > b.subj_mean;
}

int main()
{
	int N, subj_1, subj_2, subj_3;
	string first_name, last_name;
	cin >> N;
	vector <student> a(N);
	for (int i = 0; i < N; i++)
	{
		cin >> first_name >> last_name >> subj_1 >> subj_2 >> subj_3;
		a[i].name = first_name + ' ' + last_name;
		a[i].subj_1 = subj_1;
		a[i].subj_2 = subj_2;
		a[i].subj_3 = subj_3;
		a[i].subj_mean = subj_1 + subj_2 + subj_3;
	}
	stable_sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < N; i++)
	{
		cout << a[i].name << endl;
	}
	return 0;
}
© 2013 — 2020. Stepik
Наши условия использования и конфиденциальности
Тарифы
Помощь
Контакты
Stepik Академия
О проекте
Команда
Вакансии
Прессе
319 479 845 решений
Get it on Google Play
