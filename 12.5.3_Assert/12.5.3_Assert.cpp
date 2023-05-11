﻿/*Задание 3. Использование assert
Что нужно сделать
Создайте в своей программе функцию float travelTime(float distance, float speed). 
Она будет находить время в пути и при этом использовать assert, чтобы отбросить нулевую 
и отрицательную скорость. Вызовите эту функцию в main. Убедитесь, что падение происходит 
за счёт assert. Не забудьте подключить заголовочный файл cassert.

Что оценивается
При запуске происходит падение с указанием исходника и строки в нём, на которой 
расположен вызов макроса assert.

Критерии оценки работы
Программы запускаются и корректно работают, нет синтаксических ошибок.
Имена переменных корректные, отражают суть хранимых данных.
Создан текстовый интерфейс для всех программ.
Для всех заданий обеспечен контроль ввода, который обусловлен логикой работы
программы. Не должно быть обращения к элементам за границы контейнера хранения.
В решении программ соблюдается необходимая асимптотическая сложность.*/

#include <iostream>
#include <cassert>

using namespace std;

float travelTime(float distance, float speed) 
{
    assert(speed > 0);
    return distance / speed;
}

int main()
{
    int distance, speed;

    cout << "Enter the distance (in km): ";
    cin >> distance;
    cout << "Enter the speed (in km/h): ";
    cin >> speed;

    //float timeT = travelTime(distance, speed);
    //int hours = int(timeT);
    //int minutes = int((timeT - hours) * 60);

    float timeT = travelTime(distance, speed);
    int timeMinutes = timeT * 60;
    int hours = timeMinutes / 60;
    int minutes = timeMinutes % 60;

    //cout << "Trevel time: " << travelTime(distance, speed) << '\n';
    cout << "The travel time is: " << hours << " hours and " << minutes << " monutes";

    //return 0;
}


