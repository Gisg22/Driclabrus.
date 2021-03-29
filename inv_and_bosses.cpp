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

class weapon :public item {
public:
    weapon(string x_items_name, int x_id, int x_base_damage, int x_durability, int x_degradation, int x_weight) : item(x_items_name, x_id) { base_damage = x_base_damage; durability = x_durability; degradation = x_degradation; weight = x_weight; };

    int get_base_damage() const { return this->base_damage; };
    int get_durability() const { return this->durability; };
    int get_degradation() const { return this->degradation; };
    int get_weight() const { return this->weight; };
    int hit();
private:
    int base_damage;
    int durability;
    int degradation;
    int weight;

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
            cout << items[i].get_items() << endl;
        cout << endl;
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
    // virtual void dialouge() = 0;
    string get_name() { return name; }
    int get_health() { return health; }
    void set_health(int x_health) { health = x_health; }
    int get_id() { return id; }
private:
    int health;
    string name;
    int id;
};

class Bosses : public NPC {
public:
    //void dialouge() override;

    int get_damage() { return damage; };

    Bosses(int x_id, string x_name, int x_damage) : NPC(x_id, x_name) { x_damage = damage; };

    void set_inv_boss(inventory x_inv_boss) {
        *inv_boss = x_inv_boss;

    };
    inventory get_inv_boss() { return *inv_boss; };

private:
    int damage;
    inventory* inv_boss;
};

int main()
{
    setlocale(LC_ALL, "ru");
    //main_menu();
    Bosses Cat(34, "Брошенный кот", 44);
    Cat.set_health(4500);
    inventory inventory_class;
    weapon claws("Когти", 15, 6, 7, 5, 3);
    weapon cat_sword("Меч ночи.", 15, 6, 7, 5, 6);
    Cat.set_inv_boss(inventory_class);
    inventory_class.add(claws);
    inventory_class.open();
    inventory_class.add(cat_sword);
    inventory_class.open();
}