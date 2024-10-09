#include <vector>
#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T value) : data(value), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    int size;

public:
    LinkedList() : head(nullptr), size(0) {}

    ~LinkedList() {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* next = current->next;
            delete current;
            current = next;
        }
    }

 
    void add(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node<T>* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        size++;
    }

   
    int getSize() {
        return size;
    }

 
    T get(int index) {
        Node<T>* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->data;
    }

    void viewList() {
        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    LinkedList<T> algorithm1() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        T sum = 0;
        Node<T>* current = head;
        while (current != nullptr) {
            sum += current->data;
            result.add(sum);
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm2() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        while (current != nullptr) {
            result.add(current->data * current->data);
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm3() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        T sum = 0;
        Node<T>* current = head;
        while (current != nullptr) {
            sum += current->data;
            result.add(std::abs(sum));
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm4() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        T product = 1;
        int sign = 1;
        while (current != nullptr) {
            product *= current->data;
            result.add(sign * product);
            sign = -sign;
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm5() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        int sign = -1;
        while (current != nullptr) {
            result.add(sign * current->data);
            sign = -sign;
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm6() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        int i = 0;
        while (current != nullptr) {
            result.add(current->data + i + 1);
            i++;
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm7() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        int i = 0;
        while (current != nullptr) {
            result.add(current->data * (i + 1));
            i++;
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm8() {
        if (size < 2) {
            throw std::runtime_error("Список должен содержать не менее двух элементов");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        Node<T>* next = current->next;
        while (next != nullptr) {
            result.add(current->data * next->data);
            current = next;
            next = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm9() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        int i = 0;
        while (current != nullptr) {
            if (i + 1 == 0) {
                throw std::runtime_error("Деление на ноль");
            }
            result.add(current->data / (i + 1));
            i++;
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm10() {
        if (size < 2) {
            throw std::runtime_error("Список должен содержать не менее двух элементов");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        Node<T>* next = current->next;
        while (next != nullptr) {
            result.add(current->data + next->data);
            current = next;
            next = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm11() {
        if (size < 3) {
            throw std::runtime_error("Список должен содержать не менее трёх элементов");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        Node<T>* next = current->next;
        Node<T>* nextNext = next->next;
        while (nextNext != nullptr) {
            result.add(current->data + next->data + nextNext->data);
            current = next;
            next = nextNext;
            nextNext = next->next;
        }
        return result;
    }

    LinkedList<T> algorithm12() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        int i = size;
        while (current != nullptr) {
            result.add(i + current->data);
            i--;
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm13() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        int i = size;
        while (current != nullptr) {
            result.add(i * current->data);
            i--;
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm14() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        int i = size;
        while (current != nullptr) {
            if (i == 0) {
                throw std::runtime_error("Деление на ноль");
            }
            result.add(current->data / i);
            i--;
            current = current->next;
        }
        return result;
    }

    LinkedList<T> algorithm15() {
        if (size == 0) {
            throw std::runtime_error("Список пуст");
        }
        LinkedList<T> result;
        Node<T>* current = head;
        int i = size;
        while (current != nullptr) {
            result.add(current->data * i);
            i--;
            current = current->next;
        }
        return result;
    }
};

int main() {
    LinkedList<int> list;
    int choice;
    int N;

    setlocale(LC_ALL, "rus");

    while (true) {
        std::cout << "Меню:" << std::endl;
        std::cout << "1. Просмотр содержимого списка" << std::endl;
        std::cout << "2. Инициализация списка и его аргументов" << std::endl;
        std::cout << "3. Выполнить алгоритм 1" << std::endl;
        std::cout << "4. Выполнить алгоритм 2" << std::endl;
        std::cout << "5. Выполнить алгоритм 3" << std::endl;
        std::cout << "6. Выполнить алгоритм 4" << std::endl;
        std::cout << "7. Выполнить алгоритм 5" << std::endl;
        std::cout << "8. Выполнить алгоритм 6" << std::endl;
        std::cout << "9. Выполнить алгоритм 7" << std::endl;
        std::cout << "10. Выполнить алгоритм 8" << std::endl;
        std::cout << "11. Выполнить алгоритм 9" << std::endl;
        std::cout << "12. Выполнить алгоритм 10" << std::endl;
        std::cout << "13. Выполнить алгоритм 11" << std::endl;
        std::cout << "14. Выполнить алгоритм 12" << std::endl;
        std::cout << "15. Выполнить алгоритм 13" << std::endl;
        std::cout << "16. Выполнить алгоритм 14" << std::endl;
        std::cout << "17. Выполнить алгоритм 15" << std::endl;
        std::cout << "18. Выход из программы" << std::endl;
        std::cout << "Введите свой выбор: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            if (list.getSize() == 0) {
                std::cout << "Список пуст." << std::endl;
            }
            else {
                std::cout << "Содержимое списка: ";
                list.viewList();
            }
            break;
        case 2:
            std::cout << "Введите размер списка: ";
            std::cin >> N;
            list = LinkedList<int>();
            for (int i = 0; i < N; i++) {
                list.add(i + 1);
            }
            std::cout << "Список инициализирован." << std::endl;
            break;
        case 3:
            try {
                LinkedList<int> result = list.algorithm1();
                std::cout << "Результат алгоритма 1: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 4:
            try {
                LinkedList<int> result = list.algorithm2();
                std::cout << "Результат алгоритма 2: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 5:
            try {
                LinkedList<int> result = list.algorithm3();
                std::cout << "Результат алгоритма 3: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 6:
            try {
                LinkedList<int> result = list.algorithm4();
                std::cout << "Результат алгоритма 4: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 7:
            try {
                LinkedList<int> result = list.algorithm5();
                std::cout << "Результат алгоритма  5: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 8:
            try {
                LinkedList<int> result = list.algorithm6();
                std::cout << "Результат алгоритма 6: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 9:
            try {
                LinkedList<int> result = list.algorithm7();
                std::cout << "Результат алгоритма 7: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 10:
            try {
                LinkedList<int> result = list.algorithm8();
                std::cout << "Результат алгоритма 8: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 11:
            try {
                LinkedList<int> result = list.algorithm9();
                std::cout << "Результат алгоритма 9: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 12:
            try {
                LinkedList<int> result = list.algorithm10();
                std::cout << "Результат алгоритма 10: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 13:
            try {
                LinkedList<int> result = list.algorithm11();
                std::cout << "Результат алгоритма 11: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 14:
            try {
                LinkedList<int> result = list.algorithm12();
                std::cout << "Результат алгоритма 12: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 15:
            try {
                LinkedList<int> result = list.algorithm13();
                std::cout << "Результат алгоритма 13: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 16:
            try {
                LinkedList<int> result = list.algorithm14();
                std::cout << "Результат алгоритма 14: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 17:
            try {
                LinkedList<int> result = list.algorithm15();
                std::cout << "Результат алгоритма 15: ";
                result.viewList();
            }
            catch (const std::exception& e) {
                std::cout << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 18:
            std::cout << "Выход из программы." << std::endl;
            return 0;
        default:
            std::cout << "Неправильный выбор. Попробуйте еще раз." << std::endl;
        }
    }

    return 0;
}

