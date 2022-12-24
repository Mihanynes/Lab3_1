#include "library.h"
#include "dynamic_array.cpp"
#include "linked_list.cpp"
#include "others.cpp"
#include "i_sorter.cpp"
#include "array_sequence.cpp"
#include "linked_list_sequence.cpp"


int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    
    int item, index, index_beginning, index_ending;
    int length = 0;

    fstream file_for_writing, file_for_saving;
    fstream file;
    string name_of_file, str1;
    int item0;
    int* array_from_file = new int[10000];

    ISorter<int> tmp;

    high_resolution_clock::time_point t_start, t_end;
    duration<double> time_span1, time_span2, time_span3, time_span4, time_span5, time_span6, time_span7, time_span8, time_span9;


    LinkedListSequence<int> list0;
    LinkedListSequence<int> list1;
    Sequence<int>* sequence = &list0;
    Sequence<int>* concat_sequence = &list1;


    int* items1 = new int[100];
    for (int i = 0; i < 100; i++)
        items1[i] = rand();
    LinkedListSequence<int> list_ex1(items1, 100);
    Sequence<int>* sequence_ex1_bis = &list_ex1;
    Sequence<int>* sequence_ex1_qs = sequence_ex1_bis;
    Sequence<int>* sequence_ex1_ms = sequence_ex1_bis;


    tmp.binary_insertion_sort(sequence_ex1_bis, comparator);
    cout << endl;
    tmp.quick_sort(sequence_ex1_qs, comparator);
    cout << endl;
    tmp.merge_sort(sequence_ex1_ms, comparator);
    cout << endl;
    /*int* items1 = new int[50000];
    for (int i = 0; i < 50000; i++)
        items1[i] = rand();
    int* items2 = new int[60000];
    for (int i = 0; i < 60000; i++)
        items2[i] = rand();
    int* items3 = new int[70000];
    for (int i = 0; i < 70000; i++)
        items3[i] = rand();
        

    LinkedListSequence<int> list_ex1(items1, 50000);
    Sequence<int>* sequence_ex1_bis = &list_ex1;
    Sequence<int>* sequence_ex1_qs = sequence_ex1_bis;
    Sequence<int>* sequence_ex1_ms = sequence_ex1_bis;
    */
   /* LinkedListSequence<int> list_ex2(items2, 60000);
    Sequence<int>* sequence_ex2_bis = &list_ex2;
    Sequence<int>* sequence_ex2_qs = sequence_ex2_bis;
    Sequence<int>* sequence_ex2_ms = sequence_ex2_bis;

    LinkedListSequence<int> list_ex3(items3, 70000);
    Sequence<int>* sequence_ex3_bis = &list_ex3;
    Sequence<int>* sequence_ex3_qs = sequence_ex3_bis;
    Sequence<int>* sequence_ex3_ms = sequence_ex3_bis;
    */

    
    /*
    //������� ����������
    t_start = high_resolution_clock::now();
    sequence_ex1_qs->quick_sort_(comparator);
    t_end = high_resolution_clock::now();
    time_span4 = duration_cast<duration<double>>(t_end - t_start);
    cout << sequence_ex1_bis << endl;
    t_start = high_resolution_clock::now();
    sequence_ex2_qs->quick_sort_(comparator);
    t_end = high_resolution_clock::now();
    time_span5 = duration_cast<duration<double>>(t_end - t_start);

    t_start = high_resolution_clock::now();
    sequence_ex3_qs->quick_sort_(comparator);
    t_end = high_resolution_clock::now();
    time_span6 = duration_cast<duration<double>>(t_end - t_start);

    //���������� ��������
    t_start = high_resolution_clock::now();
    sequence_ex1_ms->merge_sort_(comparator);
    t_end = high_resolution_clock::now();
    time_span7 = duration_cast<duration<double>>(t_end - t_start);

    t_start = high_resolution_clock::now();
    sequence_ex2_ms->merge_sort_(comparator);
    t_end = high_resolution_clock::now();
    time_span8 = duration_cast<duration<double>>(t_end - t_start);

    t_start = high_resolution_clock::now();
    sequence_ex3_ms->merge_sort_(comparator);
    t_end = high_resolution_clock::now();
    time_span9 = duration_cast<duration<double>>(t_end - t_start);

    //���������� ��������� ���������
    t_start = high_resolution_clock::now();
    sequence_ex1_bis->binary_insertion_sort_(comparator);
    t_end = high_resolution_clock::now();
    time_span1 = duration_cast<duration<double>>(t_end - t_start);

    t_start = high_resolution_clock::now();
    sequence_ex2_bis->binary_insertion_sort_(comparator);
    t_end = high_resolution_clock::now();
    time_span2 = duration_cast<duration<double>>(t_end - t_start);

    t_start = high_resolution_clock::now();
    sequence_ex3_bis->binary_insertion_sort_(comparator);
    t_end = high_resolution_clock::now();
    time_span3 = duration_cast<duration<double>>(t_end - t_start);


    file.open("comparison.csv", fstream::out | fstream::in | fstream::app);
    //���������� ���������;����� ������ ��������� ���������� ��������� ���������;����� ������ ��������� ������� ����������;����� ������ ��������� ���������� ��������
    
    file << 50000 << ";" << time_span1.count() << ";" << time_span4.count() << ";" << time_span7.count() << ";" << "\n";
    file << 60000 << ";" << time_span2.count() << ";" << time_span5.count() << ";" << time_span8.count() << ";" << "\n";
    file << 70000 << ";" << time_span3.count() << ";" << time_span6.count() << ";" << time_span9.count() << ";" << "\n";
    file.close();
    cout << "���������� �������������� ������� ����� ������� � ����� comparison.csv" << endl;
    cout << endl;


    */
    return 0;
}