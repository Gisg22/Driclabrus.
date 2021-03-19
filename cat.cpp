
#include <iostream>
#include <ctime>
#include <fstream>
#include <Windows.h>

using namespace std;
void fight();
void create_character();
void main_menu(int answer, int answer1, int switch_answ);
void choice(string* p_name, int* p_sex);
class Bosses {
public:
    void dialouge();

    void set_damage(int x_damage);
    int get_damage();

    int get_health();
    void set_health(int x_health);

    string get_name();
    void set_name(string x_name);

    int get_id();
    void set_id(int x_id);

    Bosses(int y);

private:
    int damage;
    int health;
    string name;
    int id;
};
class Character {
private:
    int mana;
    int damage;
    int health;
    int id;
    int lucky;
    int agility;
    string name_class_race;
public:
    Character(int x_id, string x_name_class_race);
    void set_name_class_race(string x_name_class_race);
    string get_name_class_race();
    void set_mana(int x_mana);
    int get_mana();

    void set_damage(int x_damage);
    int get_damage();

    int get_health();
    void set_health(int x_health);

    int get_id();
    void set_id(int x_id);

    int get_lucky();
    void set_lucky(int x_lucky);

    int get_agility();
    void set_agility(int x_agility);

};
Character::Character(int x_id, string x_name_class_race) {
    id = x_id;
    name_class_race = x_name_class_race;
}
void Character:: set_damage(int x_damage) {
    damage = x_damage;
};
int Character::get_damage() {
    return damage;
}
void Character::set_mana(int x_mana) {
    mana = x_mana;
};
int Character::get_mana() {
    return mana;
}
void Character::set_health(int x_health) {
    health = x_health;
};
int Character::get_health() {
    return health;
}
void Character::set_id(int x_id) {
    id = x_id;
};
int Character::get_id() {
    return id;
}
void Character::set_name_class_race(string x_name_class_race) {
    name_class_race = x_name_class_race;
}
string Character::get_name_class_race() {

    return name_class_race;
}
int Character::get_lucky() {
    return lucky;
}
void Character::set_lucky(int x_lucky) {
    lucky = x_lucky;
}
int Character::get_agility() {
    return agility;
}
void Character::set_agility(int x_agility) {
    agility = x_agility;
}

Bosses::Bosses(int y) {
    id = y;
}
void Bosses::set_damage(int x_damage) {
    damage = x_damage;

};
int Bosses::get_damage() {
    return damage;
};
void Bosses::set_health(int x_health) {
    health = x_health;

};
int Bosses::get_health() {
    return health;
};
void Bosses::set_name(string x_name) {
    name = x_name;

};
string Bosses::get_name() {
    return name;
};
void Bosses::set_id(int x_id) {
    x_id = id;

};
int Bosses::get_id() {

    return id; 
};
void Bosses::dialouge() {
    
    if (id == 34) {
        int answer;
        int answer1;
        int switch_answ;

        cout << "Котёнок: Мяу..." << endl;
        cout << "Промяукал котёнок, открывая глаза." << endl;
        cout << "Он смотрит на вас пустым взглядом..." << endl;
        Sleep(4000);
        cout << "Вдруг, он своим детским голоском заговорил..." << endl;
        Sleep(2000);
        cout << "Котёнок: У тебя есть краски в этой жизни?" << endl;
        cout << "1. Да. " << endl;
        cout << "2. Нет." << endl;
        cin >> switch_answ;
        switch (switch_answ) {
        case 1:
            cout << "Котёнок: В чём твои краски присутствуют?" << endl;
            cout << "1. Во вдохновлении в этой жизни чем-то своим или чужим." << endl;
            cout << "2. Мои краски присутствуют в любви." << endl;
            cout << "3. Мне нравиться смотреть на страдания других." << endl;
            cin >> answer1;
            if (answer1 == 1) {
                cout << "Котёнок: Хм, ты мне приятен." << endl;
                Sleep(5000);
                cout << "Котёнок: Вдохновление это то, ради чего можно жить." << endl;
                Sleep(5000);
                cout << "Котёнок: Расскажу-ка я тебе свою историю, почему я раньше жил ради вдохновления." << endl;
                Sleep(5000);
                cout << "Начало истории: " << endl;
                cout << "Родился я до своей смерти в очень богатой семье, которая всегда обеспечивала меня." << endl;
                cout << "Но разве это богатство приносило мне счастье? Нет, не приносило." << endl;
                cout << "Я был вялым, слабым и апатичным. У меня не явился интерес ни к чему." << endl;
                cout << "Среди своего общества, я был почитаемым. Неизвестно из-за чего." << endl;
                cout << "Почитаем был то-ли от богатства, то-ли от разума." << endl;
                cout << "Но у меня не вызывало радость ни богатство, ни успехи, ни окружение." << endl;
                cout << "И вот, в какой-то момент я увидел трость своего старого дедушки писателя." << endl;
                cout << "Трость очень хорошо отдавала запах былого и какие-то ассоциации появились у меня." << endl;
                cout << "Трость отдавала запах даже тогда, когда я не нюхал её специально. " << endl;
                cout << "Она пахла лилиями, которые росли в нашем саду при жизни дедушки." << endl;
                cout << "Сад был усажен этими прекрасными цветами, которые давали мне ностальгию." << endl;
                cout << "Дедушка был писателем, очень хорошим писателем. Благодаря своим книгам он стал богат." << endl;
                cout << "Вдруг, благодаря ностальгии я почувствовал впервые желание писать книги." << endl;
                cout << "Я стал ездить по разным королевствам, империям и провинциям, чтобы получить вдохновление." << endl;
                cout << "Благодаря этому вдохновлению, моя жизнь приобрела краски." << endl;
                cout << "Но вдруг, я писал то, что нельзя было написать в книгах." << endl;
                cout << "Я не знаю, как мой разум смог это придумать. Придумал я запретное в этом мире." << endl;
                cout << "Прости, я не могу это описать и рассказать про это, ибо твой разум это не воспримет." << endl;
                cout << "Меня перенесли в парралельное измерение, они..." << endl;
                cout << "Они заставляли меня воевать, сражаться, несмотря на мой немощный вид." << endl;
                cout << "Я убивал этих созданий своим огромным мечём." << endl;
                cout << "Меня заставляли это делать бесконечно, но я не хотел продолжать." << endl;
                cout << "Мои краски стали угасать, а жизнь тускнеть. " << endl;
                cout << "И тогда я решил умереть, убив себя." << endl;
                cout << "В итоге - я умер и превратился в это." << endl;
                cout << "Они стали падать в битвах и упали с течением семи веков." << endl;
                cout << "Теперь их мир пустой. В этом мире только я и ты." << endl;
                cout << "У меня нет красок больше. Нет того, ради чего можно жить." << endl;
                cout << "Поэтому, я воскресаю, чтобы выбраться отсюда. Чтобы убить всех в этом мире и писать книги дальше из оставшихся красок... " << endl;
                Sleep(8000);
                cout << "Котёнок: Прости..." << endl;
                Sleep(3000);
                cout << "Котёнок: Приятель..." << endl;
                Sleep(3000);
                cout << "Котёнок: Мне придёться тебя убить..." << endl;
                cout << "Вдруг, тело котёнка полностью покрывается тёмной сферой, которая закрывает и скрывает его в ней." << endl;
                
            }
            else if (answer1 == 2) {
                cout << "Котёнок: Любовь - это слишком мало, чтобы жить в красках." << endl;
                Sleep(3000);
                cout << "Котёнок: Не понимаю тех, кто живёт ради любви... " << endl;
                Sleep(3000);
                cout << "Котёнок: Прости..." << endl;
                Sleep(3000);
                cout << "Котёнок: Человек..." << endl;
                Sleep(3000);
                cout << "Котёнок: Мне придёться тебя убить..." << endl;
                cout << "Вдруг, тело котёнка полностью покрывается тёмной сферой, которая закрывает и скрывает его в ней." << endl;
            }
            else if (answer1 == 3) {
              cout << "Котёнок: М-да..." << endl;
              Sleep(3000);
              cout<< "Котёнок: Какой ты жестокий и ужасный..." << endl;
              Sleep(3000);
              cout<<"Котёнок: Видеть краски жизни в таком..." << endl;
              Sleep(3000);
              cout << "Котёнок: Ты мне отвратителен и я не хочу с тобой говорить. " << endl;
              Sleep(5000);
              cout << "Котёнок: Мерзость..." << endl;
              Sleep(3000);
              cout << "Котёнок: Мне придёться тебя убить..." << endl;
              cout << "Вдруг, тело котёнка полностью покрывается тёмной сферой, которая закрывает и скрывает его в ней." << endl;
            }
            break;
        case 2:
            cout << "Котёнок: Почему у тебя их нет?" << endl;
            cout << "1. Я ничем не радуюсь и мне ничего не интересно. Я не буду задумываться об этом." << endl;
            cout << "2. Почему они должны быть и к чему этот вопрос?" << endl;
            cin >> answer;
            if (answer == 1) {
                cout << "Котёнок: Хм, значит ты живёшь не ради красок в этой жизни, а неизвестно зачем..." << endl;
                Sleep(5000);
                cout << "Котёнок: Меня очень печалит подобное мышление... " << endl;
                Sleep(2000);
                cout << "Котёнок: Прости..." << endl;
                Sleep(3000);
                cout << "Котёнок: Недоумок..." << endl;
                Sleep(3000);
                cout << "Котёнок: Мне придёться тебя убить..." << endl;
                cout << "Вдруг, тело котёнка полностью покрывается тёмной сферой, которая закрывает и скрывает его в ней." << endl;
            }
            else if (answer == 2) {
                cout << "Котёнок: Эх... До чего же ты любопытный..." << endl;
                Sleep(2000);
                cout << "Котёнок: Тебе знать не дано, почему я спрашиваю это..." << endl;
                Sleep(2000);
                cout << "Котёнок: Прости..." << endl;
                Sleep(3000);
                cout << "Котёнок: Недоумок..." << endl;
                Sleep(3000);
                cout << "Котёнок: Мне придёться тебя убить..." << endl;
                cout << "Вдруг, тело котёнка полностью покрывается тёмной сферой, которая закрывает и скрывает его в ней." << endl;
                break;
            }
        }

    };

};
void fight() {
};

void introduction() {
    Sleep(3000);
    cout << "Данная мини-игра является игрушечной. Приятного проxождения :)! " << endl;
    cout << "===============================================================" << endl;
    Sleep(5000);
    cout << "Вы идёте по цветочному полю..." << endl;
    Sleep(2000);
    cout << "Вдали, под большим цветком вы видите спящего котёнка..." << endl;
    Sleep(3000);
    cout << "Вы идёте к нему..." << endl;
    Sleep(2000);
    cout << "У вас внезапно появляется чувство умиления, когда слышите его мурлыкание...  " << endl;
    Sleep(4000);
    cout << "Он просыпается и сонным взглядом смотрит на вас..." << endl;

}
void choice(string* p_name, int* p_sex, int* p_body) {
    ofstream save_character("save.character.txt");
    cout << "Введите имя: " << endl;
    cin >> (*p_name);
    save_character << "Ваше имя: " << (*p_name) << endl;
    cout << "Выберите пол: " << endl;
    cout << "1. Мужской." << endl;
    cout << "2. Женский." << endl;
    cin >> (*p_sex);
    if ((*p_sex) == 1) {
        save_character << "Вы являетесь персонажем мужского пола." << endl;
    }
    else if ((*p_sex) == 2) {
        save_character << "Вы являетесь персонажем женского пола." << endl;
    }
    cout << "Выберите телосложение: " << endl;
    cout << "1.Нормальное" << endl;
    cout << "2.Худое." << endl;
    cout << "3.Очень худое." << endl;
    cout << "4.Полное." << endl;
    cout << "5.Большое-мускулистое." << endl;
    cout << "6.Среднее-мускулистое." << endl;
    cout << "7.Худое-мускулистое." << endl;
    cin >> (*p_body);
    switch ((*p_body)) {
    case 1:
        save_character << "У вас нормальное телосложение." << endl;
        break;
    case 2:
        save_character << "У вас худое телосложение." << endl;
        break;
    case 3:
        save_character << "У вас очень худое телосложение." << endl;
        break;
    case 4:
        save_character << "У вас полное телосложение." << endl;
        break;
    case 5:
        save_character << "У вас большое-мускулистое телосложение. " << endl;
        break;
    case 6:
        save_character << "У вас среднее-мускулистое телосложение." << endl;
        break;
    case 7:
        save_character << "У вас худое-мускулистое телосложение." << endl;
        break;
    }
    save_character.close();
}
void create_character() {
    Character Knight(32, "Рыцарь из Северно-Западных королевств");
    Character Shooter(23, "Касадарский стрелок");
    Character Dwarf(44, "Крепкий Дворф" );
    Character Samurai(55, "Самурай из Империи Тсукичи");
    Character Mage(31, "Маг из Земель Хтунов");
    Character Undead(22, "Нежить из Мрачных земель");
    Character Demon(12, "Демон из Огненных вулканов");
     Character Burglar(2, "Жалкий вор из провинции Ванирии");

    int sex, answer, switch_answ, body;
    string name;
    cout << "Создание персонажа. " << endl;
    cout << "Выберите расу/класс:" << endl;
    cout << "1."<< Knight.get_name_class_race() << endl;
    cout << "------------------------------------------" << endl;
    cout << "Способности: " << endl;
    cout << "Имеет неплохую ловкость, силу и удачу, но низкую магическую силу. Имеет умеренное здоровье." << endl;
    cout << "==========================================" << endl;
    cout << "2." << Shooter.get_name_class_race() << endl;
    cout << "------------------------------------------" << endl;
    cout << "Способности: " << endl;
    cout <<  "Способен хорошо стрелять из лука/пистолета/арбалета, благодаря удачи и ловкости, но имеет слабый магический урон. Имеет умеренное здоровье." << endl;
    cout << "==========================================" << endl;
    cout << "3."<< Dwarf.get_name_class_race() << endl;
    cout << "------------------------------------------" << endl;
    cout << "Способности: " << endl;
    cout << "Имеет большую силу и здоровье, но слабую ловкость, магию и удачу." << endl;
    cout << "==========================================" << endl;
    cout << "4." << Samurai.get_name_class_race() << endl;
    cout << "------------------------------------------" << endl;
    cout << "Способности: " << endl;
    cout << "Имеет большую ловкость и силу, но плохую удачу и магическую силу. Имеет умеренное здоровье." << endl;
    cout << "==========================================" << endl;
    cout << "5." <<Mage.get_name_class_race() << endl;
    cout << "------------------------------------------" << endl;
    cout << "Способности: " << endl;
    cout << "Имеет большую магическую силу и удачу, но малую силу и ловкость. Имеет умеренное здоровье." << endl;
    cout << "==========================================" << endl;
    cout << "6."<< Undead.get_name_class_race() << endl;
    cout << "------------------------------------------" << endl;;
    cout << "Способности:" << endl;
    cout << "Имеет большой магический урон, но мало силового урона. Имеет плохое здоровье." << endl;
    cout << "==========================================" << endl;
    cout << "7."<<Demon.get_name_class_race() << endl;
    cout << "------------------------------------------" << endl;
    cout << "Способности: " << endl;
    cout << "Демон имеет плохую удачу и ловкость, но он имеет большую силу и магический урон. Имеет умеренное здоровье." << endl;
    cout << "==========================================" << endl;
    cout << "8." << Burglar.get_name_class_race()<< endl;
    cout << "------------------------------------------" << endl;
    cout << "Способности: " << endl;
    cout << "Очень слабый и имеет плохую магическую силу, но при этом он обладает большой удачей и ловкостью. Имеет плохое здоровье." << endl;
    string data_character = "data.character.txt";
    ofstream save_character;
    save_character.open(data_character);
    cin >> answer;
    switch (answer)
    {
    case 1:
        choice(&name, &sex, &body);
        Knight.set_damage(25);
        Knight.set_health(120);
        Knight.set_mana(0);
        Knight.set_lucky(30);
        Knight.set_agility(15);
        save_character << Knight.get_name_class_race() << ":" << endl;
        save_character << "Урон: "<<Knight.get_damage() << endl;
        save_character << "Здоровье: " << Knight.get_health() << endl;
        save_character << "Мана: " << Knight.get_mana() << endl;
        save_character << "Удача: " << Knight.get_lucky() << endl;
        save_character << "Ловкость: " << Knight.get_agility() << endl;
      break;
    case 2:
        choice(&name, &sex, &body);
        Shooter.set_damage(5);
        Shooter.set_health(120);
        Shooter.set_mana(0);
        Shooter.set_lucky(50);
        Shooter.set_agility(25);
        save_character << Shooter.get_name_class_race() << ":" << endl;
        save_character << "Урон: " << Shooter.get_damage() << endl;
        save_character << "Здоровье: " << Shooter.get_health() << endl;
        save_character << "Мана: " << Shooter.get_mana() << endl;
        save_character << "Удача: " << Shooter.get_lucky() << endl;
        save_character << "Ловкость: " << Shooter.get_agility() << endl;
        break;
    case 3:
        choice(&name, &sex, & body);
        Dwarf.set_damage(50);
        Dwarf.set_health(200);
        Dwarf.set_mana(0);
        Dwarf.set_lucky(0);
        Dwarf.set_agility(0);
        save_character << Dwarf.get_name_class_race() << ":" << endl;
        save_character << "Урон: " << Dwarf.get_damage() << endl;
        save_character << "Здоровье: " << Dwarf.get_health() << endl;
        save_character << "Мана: " << Dwarf.get_mana() << endl;
        save_character << "Удача: " << Dwarf.get_lucky() << endl;
        save_character << "Ловкость: " << Dwarf.get_agility() << endl;
        break;
    case 4:
        choice(&name, &sex, &body);
        Samurai.set_damage(45);
        Samurai.set_health(120);
        Samurai.set_mana(0);
        Samurai.set_lucky(5);
        Samurai.set_agility(50);
        save_character << Samurai.get_name_class_race() << ":" << endl;
        save_character << "Урон: " << Samurai.get_damage() << endl;
        save_character << "Здоровье: " << Samurai.get_health() << endl;
        save_character << "Мана: " << Samurai.get_mana() << endl;
        save_character << "Удача: " << Samurai.get_lucky() << endl;
        save_character << "Ловкость: " << Samurai.get_agility() << endl;

        break;
    case 5:
        choice(&name, &sex, &body);
        Mage.set_damage(5);
        Mage.set_health(120);
        Mage.set_mana(100);
        Mage.set_lucky(50);
        Mage.set_agility(3);
        save_character << Mage.get_name_class_race() << ":" << endl;
        save_character << "Урон: " << Mage.get_damage() << endl;
        save_character << "Здоровье: " << Mage.get_health() << endl;
        save_character << "Мана: " << Mage.get_mana() << endl;
        save_character << "Удача: " << Mage.get_lucky() << endl;
        save_character << "Ловкость: " << Mage.get_agility() << endl;
        break;
    case 6:
        choice(&name, &sex, &body);

        Undead.set_damage(25);
        Undead.set_health(70);
        Undead.set_mana(0);
        Undead.set_lucky(30);
        Undead.set_agility(25);
        save_character << Undead.get_name_class_race() << ":" << endl;
        save_character << "Урон: " << Undead.get_damage() << endl;
        save_character << "Здоровье: " << Undead.get_health() << endl;
        save_character << "Мана: " << Undead.get_mana() << endl;
        save_character << "Удача: " << Undead.get_lucky() << endl;
        save_character << "Ловкость: " << Undead.get_agility() << endl;
        break;
    case 7:
        choice(&name, &sex, &body);

        Demon.set_damage(25);
        Demon.set_health(120);
        Demon.set_mana(0);
        Demon.set_lucky(5);
        Demon.set_agility(5);
        save_character << Demon.get_name_class_race() << ":" << endl;
        save_character << "Урон: " << Demon.get_damage() << endl;
        save_character << "Здоровье: " << Demon.get_health() << endl;
        save_character << "Мана: " << Demon.get_mana() << endl;
        save_character << "Удача: " << Demon.get_lucky() << endl;
        save_character << "Ловкость: " << Demon.get_agility() << endl;
        break;
    case 8:
        choice(&name, &sex, &body);
        Burglar.set_damage(25);
        Burglar.set_health(70);
        Burglar.set_mana(0);
        Burglar.set_lucky(60);
        Burglar.set_agility(50);
        save_character << Burglar.get_name_class_race() << ":" << endl;
        save_character << "Урон: " << Burglar.get_damage() << endl;
        save_character << "Здоровье: " << Burglar.get_health() << endl;
        save_character << "Мана: " << Burglar.get_mana() << endl;
        save_character << "Удача: " << Burglar.get_lucky() << endl;
        save_character << "Ловкость: " << Burglar.get_agility() << endl;
        break;
    default:
        break;
    }
    save_character.close();
    cout << "Для того, чтобы загрузить и открыть статистику этого класса, позже введите - data.character.txt" << endl;
    cout << "Для того, чтобы выбрать данные о персонаже, позже введите - save.character.txt " << endl;
}

void main_menu() {
    int answer, answer1, switch_answ;
    Bosses Cat(34);
    Cat.set_name("Брошенный кот");
    Cat.set_damage(30);
    Cat.set_health(4500);
    
    do {
        cout << "Меню: " << endl;
        cout << "1. Создать персонажа и начать новую игру." << endl;
        cout << "2. Загрузить сохранение." << endl;
        cout << "3. Выйти." << endl;
        cin >> switch_answ;
        switch (switch_answ) {
        case 1:
            create_character();
            introduction();
            Cat.dialouge();
            fight();
            break;
        case 2:
            string fin;
            cout << "Введите имя файла, чтобы загрузить сохранение создание персонажа/выбора класса: " << endl;
            cin >> fin;
            ifstream save_open;
            save_open.open(fin);
            if (!save_open.is_open()) {
                cout << "Вы неверно ввели имя файла, либо отсувствует все файлы." << endl;
            }
            else {
                cout << "Сохранение найдено." << endl;
                char ch;
                while (save_open.get(ch)) {
                    cout << ch;
                }
            }
            save_open.close();

            break;
        }
    } while (switch_answ != 4);
}
int main()
{
    setlocale(LC_ALL, "ru");
    main_menu();
}

//ifstream save_open("C:\\Users\\77479\\source\\repos\\cat\\cat");