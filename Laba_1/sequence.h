#pragma once

template <class T>
class Sequence {
public:
    virtual const T& get_first() = 0;//����� ����������� ���������� IndexOutOfRange
    virtual const T& get_last() = 0;//����� ����������� ���������� IndexOutOfRange
    virtual const T& get(int index) = 0;//����� ����������� ���������� IndexOutOfRange
    virtual int get_length() = 0;
    virtual void append(const T& item) = 0;
    virtual void prepend(const T& item) = 0;
    virtual void set(const T& item, int index) = 0;//����� ����������� ���������� IndexOutOfRange
    virtual void remove_first() = 0;//����� ����������� ���������� IndexOutOfRange
    virtual void concat(Sequence<T>&) = 0;
    virtual void insert_at(const T& item, int index) = 0;//����� ����������� ���������� IndexOutOfRange
    virtual void get_subsequence(int startindex, int endindex) = 0;//����� ����������� ���������� IndexOutOfRange

    //������� ����������
    virtual void quick_sort_(bool(*comparator_ascending_order)(const T&, const T&)) = 0;
    //���������� ��������� ���������
    virtual void binary_insertion_sort_(bool(*comparator_ascending_order)(const T&, const T&)) = 0;
    //���������� ��������
    virtual void merge_sort_(bool(*comparator_ascending_order)(const T&, const T&)) = 0;
};