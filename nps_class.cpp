
#include <iostream>
#include <Windows.h>
using namespace std;
class inventory {
public:
	inventory();
	void add(string some_item);
	void remove(string some_item);
	void open();
private:
	int item_counter;
	string* items; 
};
inventory::inventory() {

	item_counter = 5;
	items = new string[item_counter];
}
void inventory::open() { 
	for (int i = 0; i < item_counter; i++) cout << items[i] << endl;
	cout << endl;
}

void inventory::add(string some_item) {

	item_counter++;
	string* temp = new string[item_counter];
	for (int i = 0; i < item_counter - 1; i++) temp[i] = items[i];

	temp[item_counter - 1] = some_item;
	delete[] items;
	items = temp;
	temp = 0;
}

void inventory::remove(string some_item) {
	string *temp = new string[item_counter]
    



}
class NPC {
public:
	NPC(string x, int y);
 virtual void dialogue() = 0;
	void set_name(string x_name);
	string get_name();
private:
	string name;
	int id;
	int health;

};
NPC::NPC(string x_name, int x_id) {
	name = x_name;
	id = x_id;
}

class  Boss: public NPC {

public:
	Boss(string x_name, int x_id);
	void attack();
	 void set_damage(int x_damage);
	int get_damage();
	void dialogue();
private:
	int damage;
};
void Boss::dialogue() {
	int switch_answ;
	cout << "Вы входите ворота, что находяться в кладбище павших воинов." << endl;
	Sleep(2000);
	cout << "Огромные склепы и могилы окружают вас..." << endl;
	Sleep(2000);
	cout << "Рыцарь поднимается из своей могилы..." << endl;
	Sleep(2000);
	cout << "Его огромный, серый меч впирается в землю, пока он выходит из могилы..." << endl;
	Sleep(2000);
	cout << "Голова этого воина повёрнута в вашу сторону..." << endl;
	Sleep(2000);
	cout << " Печальный рыцарь: Я знаю, зачем ты пришёл. Тебе нужен этот камень. Я чувствую твои намерения." << endl;
	cout << "Печальный рыцарь: Твои намерения очень ощущаемы..." << endl;
	Sleep(2000);
	cout << "Печальный рыцарь: Странник..." << endl;
	cout << "Печальный рыцарь: Есть вещи, ради которых живут многие. Из-за которых и появляется счастье." << endl;
	cout << "Печальный рыцарь: Есть деньги, есть продолжение своего рода и есть знания.  " << endl;
	cout << "Печальный рыцарь: Ради чего ты живёшь?" << endl;
	cout << "1.Деньги." << endl;
	cout << "2.Продолжение рода." << endl;
	cout << "3.Знания." << endl;
	cout << "4.У меня нет вещи, ради которой можно жить." << endl;
	cin >> switch_answ;
	
	switch (switch_answ) {
	case 1:
		cout << "Печальный рыцарь: По тебе видно, что ты богатство ищешь. " << endl;
		cout << "Печальный рыцарь: Я всё равно, знал про твой ответ, но в качестве полного убеждения спросил у тебя." << endl;
		cout << "Печальный рыцарь: Деньги - это инструмент управления и ничего больше. " << endl;
		cout << "Печальный рыцарь: Но тоже не маловажный. " << endl;
	
		cout << "Печальный рыцарь: Но прости, из-за твоих целей и намерений я должен убить тебя" << endl;
		break;
	case 2:
		cout << "Печальный рыцарь: По тебе видно, что ты хочешь продолжение своего рода. " << endl;
		cout << "Печальный рыцарь: Я всё равно, знал про твой ответ, но в качестве полного убеждения спросил у тебя." << endl;
		
		cout << "Печальный рыцарь: Но прости, из-за твоих целей и намерений я должен убить тебя" << endl;
		break;
	case 3:
		cout << "Печальный рыцарь: По тебе видно, что ты знание ищешь. " << endl;
		cout << "Печальный рыцарь: Я всё равно, знал про твой ответ, но в качестве полного убеждения спросил у тебя." << endl;
		cout << "Печальный рыцарь: Но прости, из-за твоих целей и намерений я должен убить тебя" << endl;
		break;
	case 4:
		cout << "Печальный рыцарь: А вот этот ответ я не смог предугадать. " << endl;
		cout << "Печальный рыцарь: Я всё равно, знал про твой ответ, но в качестве полного убеждения спросил у тебя." << endl;

		cout << "Печальный рыцарь: Но прости, из-за твоих целей и намерений я должен убить тебя" << endl;
		break;
	}






}
/*Boss::Boss(string x_name, int x_id) {

	x_name = name;

} */

void Boss:: set_damage (int x_damage) {

	damage = x_damage;

}
int Boss::get_damage() {
	return damage;
}

int main()
{
	setlocale(LC_ALL, "ru");
	Boss Sad_knight("Печальный рыцарь.", 77);

}

