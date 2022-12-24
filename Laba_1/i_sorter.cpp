#include "i_sorter.h"
#include "library.h"

template <class T>
void ISorter<T>::quick_sort(Sequence<T>* seq, bool(*comparator_ascending_order)(const T&, const T&)) {
    high_resolution_clock::time_point t_start, t_end;
    duration<double> time_span;
    message_before(seq);
    t_start = high_resolution_clock::now();
    seq->quick_sort_(comparator_ascending_order);
    t_end = high_resolution_clock::now();
    time_span = duration_cast<duration<double>>(t_end - t_start);
    message_after(seq);
    cout << "�����, ������� ���� ��������� �� ������ ���������, ��������� " << time_span.count() << " ������" << endl;
    cout << endl;
}
template <class T>
void ISorter<T>::binary_insertion_sort(Sequence<T>* seq, bool(*comparator_ascending_order)(const T&, const T&)) {
    high_resolution_clock::time_point t_start, t_end;
    duration<double> time_span;
    message_before(seq);
    t_start = high_resolution_clock::now();
    seq->binary_insertion_sort_(comparator_ascending_order);
    t_end = high_resolution_clock::now();
    time_span = duration_cast<duration<double>>(t_end - t_start);
    message_after(seq);
    cout << "�����, ������� ���� ��������� �� ������ ���������, ��������� " << time_span.count() << " ������" << endl;
    cout << endl;
}
template <class T>
void ISorter<T>::merge_sort(Sequence<T>* seq, bool(*comparator_ascending_order)(const T&, const T&)) {
    high_resolution_clock::time_point t_start, t_end;
    duration<double> time_span;
    message_before(seq);
    t_start = high_resolution_clock::now();
    seq->merge_sort_(comparator_ascending_order);
    t_end = high_resolution_clock::now();
    time_span = duration_cast<duration<double>>(t_end - t_start);
    message_after(seq);
    cout << "�����, ������� ���� ��������� �� ������ ���������, ��������� " << time_span.count() << " ������" << endl;
    cout << endl;
}

template<class T>
void ISorter<T>::message_before(Sequence<T>* seq) {
    cout << "������������������ �� ����������: " << endl;
    for (int i = 0; i < seq->get_length(); i++) {
        cout << seq->get(i) << ' ';
    }
    cout << endl;
}
template<class T>
void ISorter<T>::message_after(Sequence<T>* seq) {
    cout << "������������������ ����� ����������: " << endl;
    for (int i = 0; i < seq->get_length(); i++) {
        cout << seq->get(i) << ' ';
    }
    cout << endl;
}