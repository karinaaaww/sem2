#pragma once
#include <iostream>
#include <initializer_list>
#include <string>

/*
 * @brief Класс Вектор
 */
class Vector
{
private:
    /**
     * @brief Указатель на массив элементов
     */
    int *m_elements;

    /**
     * @brief Количество элементов в коллекции
     */
    size_t m_count;

public:
    /**
     * @brief Конструктор по умолчанию
     */
    Vector();
    /**
     * @brief Конструктор со списком инициализации
     * @param items список элементов для инициализации вектора
     */
    Vector(const std::initializer_list<int> items);
    /**
     * @brief Конструктор копирования
     * @param other ссылка на другой объект Vector для копирования
     */
    Vector(const Vector &other);
    /**
     * @brief Конструктор перемещения
     * @param other rvalue-ссылка на другой объект Vector для перемещения
     */
    Vector(Vector &&other);
    /**
     * @brief Деструктор
     */
    ~Vector();
    /**
     * @brief Возвращает строку с содержимым коллекции
     * @return строка, содержащая все элементы вектора
     */
    std::string to_string() const;
    /**
     * @brief Возвращает текущий размер
     * @return количество элементов в векторе
     */
    size_t get_size() const;
    /**
     * @brief Проверка коллекции на пустоту
     * @return true, если вектор пуст, иначе false
     */
    bool is_empty() const;
    /**
     * @brief Вставка элемента по заданному индексу
     * @param index позиция
     * @param value новое значение
     */
    void insertAt(size_t index, const int value);
    /**
     * @brief Удаление элемента по заданному индексу
     * @param index позиция
     */
    void removeAt(const size_t index);
    /**
     * @brief Поиск элемента в коллекции
     * @param value искомое значение
     * @return индекс первого вхождения или -1, если не найден
     */
    int indexOf(const int value) const;
    /**
     * @brief Оператор присваивания (копирование)
     * @param other ссылка на другой объект Vector для копирования
     * @return ссылка на текущий объект
     */
    Vector &operator=(const Vector &other);
     /**
     * @brief Оператор присваивания (перемещение)
     * @param other rvalue-ссылка на другой объект Vector для перемещения
     * @return ссылка на текущий объект
     */
    Vector &operator=(Vector &&other);
    /**
     * @brief Переопределение оператора индексации (неконстантная версия)
     * @param index индекс элемента
     * @return ссылка на элемент по указанному индексу
     */
    int &operator[](const size_t index);
    /**
     * @brief Переопределение оператора индексации (константная версия)
     * @param index индекс элемента
     * @return константная ссылка на элемент по указанному индексу
     */
    const int &operator[](const size_t index) const;
    /**
     * @brief Перегрузка оператора сдвига влево (вывод в поток)
     * @param os выходной поток
     * @param arr объект Vector для вывода
     * @return ссылка на выходной поток
     */
    friend std::ostream &operator<<(std::ostream &os, const Vector    
    /**
     * @brief Перегрузка оператора сдвига вправо (ввод из потока)
     * @param is входной поток
     * @param arr объект Vector для заполнения
     * @return ссылка на входной поток
     */
    friend std::istream &operator>>(std::istream &is, Vector &arr);
};
