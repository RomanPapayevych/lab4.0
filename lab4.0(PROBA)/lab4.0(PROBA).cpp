#include <iostream>
#include <stdio.h>
#include <string>
#include <set>
#include <vector>
using namespace std;


	
	/*
	SomeString(const char* string) {
		m_length = strlen(string);
		m_data = new char[m_length];
		for (int i = 0; i < m_length; i++) {
			memcpy(m_data,string, m_length);
		}
	}
	//friend ostream& operator <<(ostream& stream, const SomeString& string);
	
	SomeString(const SomeString& other) 
		: m_length(other.m_length)
	{
		m_data = new char[m_length + 1];
		memcpy(m_data, other.m_data, m_length + 1);
	}
	*/
	

	/*
class SomeString {
private:
	char* m_data;
	int m_length;
public:
	SomeString(const SomeString& source)
	{
		// Оскільки m_length не є вказівником, то ми можемо виконати поверхневе копіювання
		m_length = source.m_length;

		// m_data є вказівником, тому нам потрібно виконати глибоке копіювання, при умові, що цей вказівник не є нульовим
		if (source.m_data)
		{
			// Виділяємо пам'ять для нашої копії
			m_data = new char[m_length];

			// Виконуємо копіювання
			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = 0;
	}
	SomeString& operator=(const SomeString& source)
	{
		// Перевірка на самоприсвоювання
		if (this == &source)
			return *this;

		// Спочатку нам потрібно очистити попереднє значення m_data (члена неявного об'єкта)
		delete[] m_data;
	
		// Оскільки m_length не є вказівником, то ми можемо виконати поверхневе копіювання
		m_length = source.m_length;

		// m_data є вказівником, тому нам потрібно виконати глибоке копіювання, при умові, що цей вказівник не є нульовим
		if (source.m_data)
		{
			// Виділяємо пам'ять для нашої копії
			m_data = new char[m_length];

			// Виконуємо копіювання
			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = 0;

		return *this;
	}
	
};
	*/
	


class Students {
private:
	string first_name;
	string last_name;
	float mark_1;
	float mark_2;
	float mark_3;
	string m_length;
	string m_data;
public:
	Students(string first_name, string last_name, float mark_1, float mark_2, float mark_3) {
		this->first_name = first_name;
		this->last_name = last_name;
		this->mark_1 = mark_1;
		this->mark_2 = mark_2;
		this->mark_3 = mark_3;
	}
	virtual bool didNotPass() {
		return (mark_1 < 120 || mark_2 < 120 || mark_3 < 120);
		
		
	}
	
	string Get_first_name() {
		return first_name;
	}
	string Get_last_name() {
		return last_name;
	}

	
};
class Student_Roman : public Students {
	Student_Roman(string first_name, string last_name, float mark_1, float mark_2, float mark_3) : Students(first_name, last_name, mark_1, mark_2, mark_3) {\
	
	}

};
class Student_Pavlo : public Students {
	Student_Pavlo(string first_name, string last_name, float mark_1, float mark_2, float mark_3) : Students(first_name, last_name, mark_1, mark_2, mark_3) {
		
	}
};
class Student_Andriy : public Students {
	Student_Andriy(string first_name, string last_name, float mark_1, float mark_2, float mark_3) : Students(first_name, last_name, mark_1, mark_2, mark_3) {
		
	}
};
class Student_Sergiy : public Students {
	Student_Sergiy(string first_name, string last_name, float mark_1, float mark_2, float mark_3) : Students(first_name, last_name, mark_1, mark_2, mark_3) {
		
	}
};
class Student_Kristiano : public Students {
	Student_Kristiano(string first_name, string last_name, float mark_1, float mark_2, float mark_3) : Students(first_name, last_name, mark_1, mark_2, mark_3) {
		
	}
};
int main()
{	
	Students st1("Roman", "Papayevych", 163, 176, 149);
	Students st2("Pavlo", "Boiko", 160, 119, 130);
	Students st3("Andriy", "Gerasymenko", 190, 150, 183); 
	Students st4("Sergiy", "Bondarchuk", 140, 154, 117);
	Students st5("Kristiano", "Ronaldo", 200, 200, 200);
	//Students* students[5] = {&st1, &st2, &st3, &st4, &st5};
	
	int notPassed = 0;
	if (st1.didNotPass()) {
		cout << st1.Get_first_name() << " " << st1.Get_last_name() << " did not pass at least one exam" << endl;
		notPassed++;
	}
	if (st2.didNotPass()) {
		cout << st2.Get_first_name() << " " << st2.Get_last_name() << " did not pass at least one exam" << endl;
		notPassed++;
	}
	if (st3.didNotPass()) {
		cout << st3.Get_first_name() << " " << st3.Get_last_name() << " did not passat least one exam" << endl;
		notPassed++;
	}
	if (st4.didNotPass()) {
		cout << st4.Get_first_name() << " " << st4.Get_last_name() << " did not pass at least one exam" << endl;
		notPassed++;
	}
	if (st5.didNotPass()) {
		cout << st5.Get_first_name() << " " << st5.Get_last_name() << " did not pass at least one exam" << endl;
		notPassed++;
	}
	cout << "The number of students who did not pass at least one exam: " << notPassed << endl;
	

}