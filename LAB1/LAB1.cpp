#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;


class Partition {
private:
    string value;
public:
    Partition() {
    }

    Partition(string value) {
        this->value = value;
    }

    string GetValue() {
        return value;
    }

    void SetValue(string value) {
        this->value = value;
    }

    string IntToBin(int number) {
        string temp_number = "";
        while (number) {
            if (number % 2 == 0) {
                temp_number += '0';
            }
            else if (number % 2 != 0) {
                temp_number += '1';
            }
            number /= 2;
        }
        string num;
        for (int i = temp_number.length() - 1; i > -1; --i) {
            num += temp_number[i];
        }
        return num;
    }

    int BinToInt(string val) {
        int int_value = 0;
        for (int i = 0; i < value.length(); ++i) {
            if (value[i] == '0') {
                continue;
            }
            else if (value[i] == '1') {
                int_value += pow(2, (value.length() - i - 1));
            }
        }
        return int_value;
    }

    string Supplement(string val) {
        if (val.length() < 5) {
            while (val.length() < 5) {
                val = "0" + val;
            }
        }
        return val;
    }

    Partition operator+(const Partition& other) {
        Partition temp;
        int int_value_1 = 0;
        int int_value_2 = 0;
        for (int i = 0; i < value.length(); ++i) {
            if (value[i] == '0') {
                continue;
            }
            else if (value[i] == '1') {
                int_value_1 += pow(2, (value.length() - i - 1));
            }
        }
        for (int i = 0; i < other.value.length(); ++i) {
            if (other.value[i] == '0') {
                continue;
            }
            else if (other.value[i] == '1') {
                int_value_2 += pow(2, (other.value.length() - i - 1));
            }
        }
        int result = int_value_1 + int_value_2;
        string number = IntToBin(result);
        string res = Supplement(number);
        temp.value = res;
        return temp;
    }

    Partition operator*(const Partition& other) {
        Partition temp;
        int int_value_1 = 0;
        int int_value_2 = 0;
        for (int i = 0; i < value.length(); ++i) {
            if (value[i] == '0') {
                continue;
            }
            else if (value[i] == '1') {
                int_value_1 += pow(2, (value.length() - i - 1));
            }
        }
        for (int i = 0; i < other.value.length(); ++i) {
            if (other.value[i] == '0') {
                continue;
            }
            else if (other.value[i] == '1') {
                int_value_2 += pow(2, (other.value.length() - i - 1));
            }
        }
        int result = int_value_1 * int_value_2;
        string number = IntToBin(result);
        string res = Supplement(number);
        temp.value = res;
        return temp;
    }

    Partition operator^(const Partition& other) {
        Partition temp;
        int int_value_1 = 0;
        int int_value_2 = 0;
        for (int i = 0; i < value.length(); ++i) {
            if (value[i] == '0') {
                continue;
            }
            else if (value[i] == '1') {
                int_value_1 += pow(2, (value.length() - i - 1));
            }
        }
        for (int i = 0; i < other.value.length(); ++i) {
            if (other.value[i] == '0') {
                continue;
            }
            else if (other.value[i] == '1') {
                int_value_2 += pow(2, (other.value.length() - i - 1));
            }
        }
        int result = int_value_1 ^ int_value_2;
        string number = IntToBin(result);
        string res = Supplement(number);
        temp.value = res;
        return temp;
    }

    Partition operator|(const Partition& other) {
        Partition temp;
        int result = 0;
        int int_value_1 = 0;
        int int_value_2 = 0;
        for (int i = 0; i < value.length(); ++i) {
            if (value[i] == '0') {
                continue;
            }
            else if (value[i] == '1') {
                int_value_1 += pow(2, (value.length() - i - 1));
            }
        }
        for (int i = 0; i < other.value.length(); ++i) {
            if (other.value[i] == '0') {
                continue;
            }
            else if (other.value[i] == '1') {
                int_value_2 += pow(2, (other.value.length() - i - 1));
            }
        }
        result = int_value_1 | int_value_2;
        string number = IntToBin(result);
        string res = Supplement(number);
        temp.value = res;
        return temp;
    }

    Partition operator&(const Partition& other) {
        Partition temp;
        int int_value_1 = 0;
        int int_value_2 = 0;
        for (int i = 0; i < value.length(); ++i) {
            if (value[i] == '0') {
                continue;
            }
            else if (value[i] == '1') {
                int_value_1 += pow(2, (value.length() - i - 1));
            }
        }
        for (int i = 0; i < other.value.length(); ++i) {
            if (other.value[i] == '0') {
                continue;
            }
            else if (other.value[i] == '1') {
                int_value_2 += pow(2, (other.value.length() - i - 1));
            }
        }
        int result = int_value_1 & int_value_2;
        string number = IntToBin(result);
        string res = Supplement(number);
        temp.value = res;
        return temp;
    }

    Partition operator<<(const Partition& other) {
        Partition temp;
        int int_value_1 = 0;
        int int_value_2 = 0;
        for (int i = 0; i < value.length(); ++i) {
            if (value[i] == '0') {
                continue;
            }
            else if (value[i] == '1') {
                int_value_1 += pow(2, (value.length() - i - 1));
            }
        }
        for (int i = 0; i < other.value.length(); ++i) {
            if (other.value[i] == '0') {
                continue;
            }
            else if (other.value[i] == '1') {
                int_value_2 += pow(2, (other.value.length() - i - 1));
            }
        }
        int result = int_value_1 << int_value_2;
        string number = IntToBin(result);
        string res = Supplement(number);
        temp.value = res;
        return temp;
    }

    Partition operator>>(const Partition& other) {
        Partition temp;
        int int_value_1 = 0;
        int int_value_2 = 0;
        for (int i = 0; i < value.length(); ++i) {
            if (value[i] == '0') {
                continue;
            }
            else if (value[i] == '1') {
                int_value_1 += pow(2, (value.length() - i - 1));
            }
        }
        for (int i = 0; i < other.value.length(); ++i) {
            if (other.value[i] == '0') {
                continue;
            }
            else if (other.value[i] == '1') {
                int_value_2 += pow(2, (other.value.length() - i - 1));
            }
        }
        int result = int_value_1 >> int_value_2;
        string number = IntToBin(result);
        string res = Supplement(number);
        temp.value = res;
        return temp;
    }
};

class Tape {
private:
    string act;
    Partition first_value;
    Partition second_value;
    Partition empty_value;
    string result;
    string end_program;
public:
    Tape() {
        result = "00000";
    }

    Tape(string act, Partition first_value, Partition second_value) {
        this->act = act;
        this->first_value = first_value;
        this->second_value = second_value;
        result = "00000";
    }

    void SetResult(string result) {
        this->result = result;
    }

    void ShowTape() {
        empty_value.SetValue("00000");
        end_program = "1111";
        cout << "|" << act << "|" << first_value.GetValue() << "|" << second_value.GetValue() << "|"
            << empty_value.GetValue() << "|" << result << "|" << end_program << "|" << endl;
    }
};


void Menu() {
    cout << "Введите значение для первой ячейки: " << endl;
    string str_1;
    cin >> str_1;
    cout << "Введите значение для второй ячейки: " << endl;
    string str_2;
    cin >> str_2;
    cout << "Введите операцию:" << endl;
    cout << "1. Сложение (00001)" << endl;
    cout << "2. Умножение (00010)" << endl;
    cout << "3. Операция & (00100)" << endl;
    cout << "4. Операция | (01000)" << endl;
    cout << "5. Операция << (10000)" << endl;
    cout << "6. Операция >> (00011)" << endl;
    Partition p_1(str_1);
    Partition p_2(str_2);
    Partition temp("00000");
    cout << "Введите операцию:" << endl;
    int operation;
    cin >> operation;
    switch (operation) 
    {
    case 1:
    {
        Partition value_1(str_1);
        Partition value_2(str_2);
        Tape tape("00001", value_1, value_2);
        Partition result = value_1 + value_2;
        tape.SetResult(result.GetValue());
        tape.ShowTape();
        break;
    }
    case 2:
    {
        Partition value_1(str_1);
        Partition value_2(str_2);
        Tape tape("00010", value_1, value_2);
        Partition result = value_1 * value_2;
        tape.SetResult(result.GetValue());
        tape.ShowTape();
        break;
    }
    case 3:
    {
        Partition value_1(str_1);
        Partition value_2(str_2);
        Tape tape("00100", value_1, value_2);
        Partition result = value_1 & value_2;
        tape.SetResult(result.GetValue());
        tape.ShowTape();
        break;
    }
    case 4:
    {
        Partition value_1(str_1);
        Partition value_2(str_2);
        Tape tape("01000", value_1, value_2);
        Partition result = value_1 | value_2;
        tape.SetResult(result.GetValue());
        tape.ShowTape();
        break;
    }
    case 5:
    {
        Partition value_1(str_1);
        Partition value_2(str_2);
        Tape tape("10000", value_1, value_2);
        Partition result = value_1 << value_2;
        tape.SetResult(result.GetValue());
        tape.ShowTape();
        break;
    }
    case 6:
    {
        Partition value_1(str_1);
        Partition value_2(str_2);
        Tape tape("00011", value_1, value_2);
        Partition result = value_1 >> value_2;
        tape.SetResult(result.GetValue());
        tape.ShowTape();
        break;
    }
    }
}


int main() {
    setlocale(LC_ALL, "Rus");
    //    Partition p("00011");
    //    Partition r("00011");
    //    Partition f = p >> r;
    //    //cout << f.GetValue() << endl;
    //    Tape t("00001", p, r);
    //    t.ShowTape();
    Menu();
    system("pause");
    return 0;
}