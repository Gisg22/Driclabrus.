#include <iostream> 

using namespace std;



class item {
public:
	item(string x_items = "", int x_id = 0) { this->items_name = x_items; id = x_id; }
	void set_weight(int x_weight) { this->weight = x_weight; };
	int get_weight() { return this->weight; };

	void set_items(string x_items) { this->items_name = x_items; };
	string get_items() { return this->items_name; };

	void set_cost(int x_cost) { this->cost = x_cost; };
	int get_cost() { return this->cost; };

	void set_id(int x_id) { this->id = x_id; }
	int get_id() { return this->id; }
private:
	int weight;
	int cost;
	string items_name;
	int id;
};
class inventory {
private:
	int item_counter;
	item* items;
	//Character *max_weight; 

public:
	inventory() {

		item_counter = 20;
		items = new item[item_counter];
	};
	~inventory() {
		delete[] items;
		items = 0;
	};
	void open() {
		for (int i = 0; i < item_counter; i++)
			cout « items[i].get_items() « endl;
		cout « endl;
	};
	void add(item some_item) {
		item_counter++;
		item* temp = new item[item_counter];
		for (int i = 0; i < item_counter - 1; i++) temp[i] = items[i];
		temp[item_counter - 1] = some_item;
		delete[] items;
		items = temp;
		temp = 0;
	};
	void remove(item some_item) {
		int search;
		item temp1;
		for (int i = 0; i < item_counter; i++) {
			if (items[i].get_items() == some_item.get_items()) {
				search = i;
				break;
			}
		}
		if (search != item_counter - 1) {
			for (int i = search; i < item_counter - 1; i++) {
				items[i] = items[i + 1];
			}
		}
		else {}
		item_counter--;
		item* temp = new item[item_counter];
		for (int i = 0; i < item_counter - 1; i++) temp[i] = items[i];
		temp[item_counter - 1] = items[item_counter - 1];
		delete[] items;
		items = temp;
		temp = 0;
	}
};
class NPC {
public:
	NPC(int x_id, string x_name) { id = x_id; name = x_name; }
	virtual void dialouge() = 0;
	string get_name() { return name; }
	int get_health() { return health; }
	void set_health(int x_health) { health = x_health; }
	int get_id() { return id; }
private:
	int health;
	string name;
	int id;
};
class Character :public NPC {
private:
	int mana;
	int damage;
	int player_health;
	int lucky;
	int agility;
	// int max_weight; 
	inventory* inv_ch;

public:
	void dialouge() override { cout « "Я: За что мне такая судьба?" « endl; };
	Character(int x_id = 0, string x_name = "") : NPC(x_id, x_name) {};
	inventory get_inv_ch() { return *inv_ch; };
	void set_inv_ch(inventory x_inv_ch) { *inv_ch = x_inv_ch; }

	void set_mana(int x_mana) { mana = x_mana; };
	int get_mana() { return mana; };

	void set_damage(int x_damage) { damage = x_damage; };
	int get_damage() { return damage; };

	int get_health() { return player_health; };
	void set_health(int x_health) { player_health = x_health; };

	int get_lucky() { return lucky; };
	void set_lucky(int x_lucky) { lucky = x_lucky; };

	int get_agility() { return agility; };
	void set_agility(int x_agility) { agility = x_agility; };

	// void set_max_weight(int x_max_weight) { max_weight = x_max_weight; } 
	// int get_max_weight() { return max_weight; } 

};
int main() {


}