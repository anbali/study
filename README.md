# Задание ФИВТ МФТИ по программированию 1 курс, основной поток 2016-2017.

**Анонс:** после летней сессии появятся задания третьего и четвертого семестра.

Решение конкретного задания имеет вид (SEM)sem/task(MODULE)/TASK
* SEM - семестр
* MODULE - модуль
* TASK - номер задания

Большинство решений прошли все тесты из яндекс-контеста. О неудачных решениях сказано в комментариях к заданию в этом списке.

### Список заданий:

#### 1 семестр.

##### 1 модуль.


**1-1.** Найти, на сколько нулей оканчивается n! = 1 * 2 * 3 * … * n.
n ≤ 1000.


**2-1.** Даны два массива целых чисел одинаковой длины A[0..n-1] и B[0..n-1]. Необходимо найти первую пару индексов i0 и j0, i0 ≤ j0, такую что A[i0] + B[j0] = max {A[i] + B[j], где 0 <= i < n, 0 <= j < n, i <= j}. Время работы - O(n).
n ≤ 100000.


**3-1.** Дан отсортированный массив целых чисел A[0..n-1] и массив целых чисел B[0..m-1]. Для каждого элемента массива B[i] найдите минимальный индекс k минимального элемента массива A, равного или превосходящего B[i]: A[k] >= B[i]. Если такого элемента нет, выведите n. Время работы поиска k для каждого элемента B[i]: O(log(k)).
n, m ≤ 10000.

*Формат входных данных*

В первой строчке записаны числа n и m. Во второй и третьей массивы A и B соответственно.


**4-1.** Во всех задачах из следующего списка следует написать структуру данных, обрабатывающую команды push* и pop*.

*Формат входных данных*

В первой строке количество команд n. n ≤ 1000000.
Каждая команда задаётся как 2 целых числа: a b.
a = 1 - push front
a = 2 - pop front
a = 3 - push back
a = 4 - pop back
Для очереди используются команды 2 и 3. Для дека используются все четыре команды.
Если дана команда pop*, то число b - ожидаемое значение.Если команда pop вызвана для пустой структуры данных, то ожидается “-1”. 

*Формат выходных данных*

Требуется напечатать YES - если все ожидаемые значения совпали. Иначе, если хотя бы одно ожидание не оправдалось, то напечатать NO.
Реализовать очередь с динамическим зацикленным буфером.


**5-1.** Скобочная последовательность.
Дан фрагмент последовательности скобок, состоящей из символов (){}[].
Требуется определить, возможно ли продолжить фрагмент в обе стороны, получив корректную последовательность.
Длина исходной последовательности ≤ 800000.

*Формат входных данных*

Строка, содержащая символы (){}[] и, возможно, перевод строки.

*Формат выходных данных*

Если возможно - вывести минимальную корректную последовательность, иначе - напечатать "IMPOSSIBLE".


**6-1.** Жадина.
Вовочка ест фрукты из бабушкиной корзины. В корзине лежат фрукты разной массы. Вовочка может поднять не более K грамм. Каждый фрукт весит не более K грамм. За раз он выбирает несколько самых тяжелых фруктов, которые может поднять одновременно, откусывает от каждого половину и кладет огрызки обратно в корзину. Если фрукт весит нечетное число грамм, он откусывает большую половину. Фрукт массы 1гр он съедает полностью.
Определить за сколько подходов Вовочка съест все фрукты в корзине.

*Формат входных данных*

Вначале вводится n - количество фруктов и n строк с массами фруктов.
n ≤ 50000.
Затем K - "грузоподъемность". K ≤ 1000.

*Формат выходных данных* 

Неотрицательное число - количество подходов к корзине.



##### 2 модуль.


**1-1.** Во всех вариантах данной задачи необходимо реализовать и использовать сортировку вставками.
Ящики.
На склад привезли много пустых ящиков. Все ящики пронумерованы по порядку поступления от 0. Известно, что их все можно сложить один в один (то есть так, что каждый следующий помещается в предыдущий). Один ящик можно вложить в другой, если его можно перевернуть так, что размеры одного ящика по всем осям станут строго меньше размеров другого ящика по соответствующим осям. Требуется определить, в какой последовательности они будут вложены друг в друга. Вывести номера ящиков.


**2-1.** Во всех задачах данного раздела необходимо реализовать и использовать локальную пирамидальную сортировку (без использования дополнительной памяти). Общее время работы алгоритма O(n log n).
Реклама.
В супермаркете решили оптимизировать показ рекламы. Известно расписание прихода и ухода покупателей (два целых числа). Каждому покупателю необходимо показать минимум 2 рекламы.  Рекламу можно транслировать только в целочисленные моменты времени. Покупатель может видеть рекламу от момента прихода до момента ухода из магазина.
В каждый момент времени может показываться только одна реклама. Считается, что реклама показывается мгновенно. Если реклама показывается в момент ухода или прихода, то считается, что посетитель успел её посмотреть. Требуется определить минимальное число показов рекламы.


**3-1.** Даны неотрицательные целые числа n,k и массив целых чисел из [0..10^9] размера n. Требуется найти k-ю порядковую статистику. т.е. напечатать число, которое бы стояло на позиции с индексом k (0..n-1) в отсортированном массиве. Напишите нерекурсивный алгоритм.
Требования к дополнительной памяти: O(n). Требуемое среднее время работы: O(n).
Функцию Partition следует реализовывать методом прохода двумя итераторами в одном направлении. Описание для случая прохода от начала массива к концу:
Выбирается опорный элемент. Опорный элемент меняется с последним элементом массива.
Во время работы Partition в начале массива содержатся элементы, не бОльшие опорного. Затем располагаются элементы, строго бОльшие опорного. В конце массива лежат нерассмотренные элементы. Последним элементом лежит опорный.
Итератор (индекс) i указывает на начало группы элементов, строго бОльших опорного.
Итератор j больше i, итератор j указывает на первый нерассмотренный элемент.
Шаг алгоритма. Рассматривается элемент, на который указывает j. Если он больше опорного, то сдвигаем j.
Если он не больше опорного, то меняем a[i] и a[j] местами, сдвигаем i и сдвигаем j.
В конце работы алгоритма меняем опорный и элемент, на который указывает итератор i.
Реализуйте стратегию выбора опорного элемента “медиана трёх”. Функцию Partition реализуйте методом прохода двумя итераторами от начала массива к концу.


**4-1.** Первые k элементов длинной последовательности.
Дана очень длинная последовательность целых чисел длины n. Требуется вывести в отсортированном виде её первые k элементов. Последовательность может не помещаться в память. Время работы O(n * log(k)). Доп. память O(k). Использовать слияние.

 
**5-1.** MSD для строк.
Дан массив строк. Количество строк не больше 105. Отсортировать массив методом поразрядной сортировки MSD по символам. Размер алфавита - 256 символов. Последний символ строки = ‘\0’.


**6.** Отсутсвует



##### 3 модуль.


**1-1.** Дано число N < 106 и последовательность целых чисел из [-231..231] длиной N.
Требуется построить бинарное дерево, заданное наивным порядком вставки.
Т.е., при добавлении очередного числа K в дерево с корнем root, если root→Key ≤ K, то узел K добавляется в правое поддерево root; иначе в левое поддерево root.
 
Выведите элементы в порядке in-order (слева направо).


**2-1.** Дано число N < 106 и последовательность пар целых чисел из [-231..231] длиной N.
Построить декартово дерево из N узлов, характеризующихся парами чисел {Xi, Yi}.
Каждая пара чисел {Xi, Yi} определяет ключ Xi и приоритет Yi в декартовом дереве.
Добавление узла в декартово дерево выполняйте второй версией алгоритма, рассказанного на лекции:
При добавлении узла (x, y) выполняйте спуск по ключу до узла P с меньшим приоритетом. Затем разбейте найденное поддерево по ключу x так, чтобы в первом поддереве все ключи меньше x, а во втором больше или равны x. Получившиеся два дерева сделайте дочерними для нового узла (x, y). Новый узел вставьте на место узла P.
 
Построить также наивное дерево поиска по ключам Xi методом из задачи 2.
 
Вычислить разницу глубин наивного дерева поиска и декартового дерева. Разница может быть отрицательна.


**3-2.** АВЛ-дерево. Порядковые статистики. Дано число N и N строк. Каждая строка содержащит команду добавления или удаления натуральных чисел, а также запрос на получение k-ой порядковой статистики. Команда добавления числа A задается положительным числом A, команда удаления числа A задается отрицательным числом “-A”. Запрос на получение k-ой порядковой статистики задается числом k. Требуемая скорость выполнения запроса - O(log n).


**4.** Напишите две функции для создания архива из одного файла и извлечения файла из архива.

    // Метод архивирует данные из потока original
    void Encode(IInputStream& original, IOutputStream& compressed);
    // Метод восстанавливает оригинальные данные
    void Decode(IInputStream& compressed, IOutputStream& original);
     где:
    typedef char byte;
     
    interface IInputStream {
    	// Возвращает false, если поток закончился
    	virtual bool Read(byte& value) = 0;
    };
     
    interface IOutputStream {
    	virtual void Write(byte value) = 0;
    };

В архиве сохраняйте дерево Хаффмана и код Хаффмана от исходных данных.
Дерево Хаффмана требуется хранить эффективно - не более 10 бит на каждый 8-битный символ.
В контест необходимо отправить .cpp файл содержащий функции Encode, Decode, а также включающий файл Huffman.h. Тестирующая программа выводит размер сжатого файла в процентах от исходного.
 
Лучшие 3 решения с Kc <= 50% из каждой группы оцениваются в 15, 10 и 5 баллов соответственно.
 
Пример минимального решения:

    #include "Huffman.h"
     
    static void copyStream(IInputStream& input, IOutputStream& output)
    {
    	byte value;
    	while (input.Read(value)) 
    	{ 
    		output.Write(value); 
    	}
    }
     
    void Encode(IInputStream& original, IOutputStream& compressed) 
    {
    	copyStream(original, compressed); 
    }
     
    void Decode(IInputStream& compressed, IOutputStream& original) 
    { 
    	copyStream(compressed, original); 
    }

> Примечание: не протестировано в контесте, но должно работать. Проходит все придуманные мной тесты.



##### 4 модуль.


**1-1.** Реализуйте структуру данных типа “множество строк” на основе динамической хеш-таблицы с открытой адресацией. Хранимые строки непустые и состоят из строчных латинских букв. Начальный размер таблицы должен быть равным 8-ми. Перехеширование выполняйте при добавлении элементов в случае, когда коэффициент заполнения таблицы достигает 3/4.
Хеш-функцию строки реализуйте с помощью вычисления значения многочлена методом Горнера.
Структура данных должна поддерживать операции добавления строки в множество, удаления строки из множества и проверки принадлежности данной строки множеству.
Для разрешения коллизий используйте квадратичное пробирование. i-ая проба
g(k, i)=g(k, i-1) + i (mod m). m - степень двойки.

*Формат входных данных*

Каждая строка входных данных задает одну операцию над множеством. Запись операции состоит из типа операции и следующей за ним через пробел строки, над которой проводится операция.
Тип операции  – один из трех символов:
    +  означает добавление данной строки в множество; 
    -  означает удаление  строки из множества;
    ?  означает проверку принадлежности данной строки множеству. 
При добавлении элемента в множество НЕ ГАРАНТИРУЕТСЯ, что он отсутствует в этом множестве. При удалении элемента из множества НЕ ГАРАНТИРУЕТСЯ, что он присутствует в этом множестве.

*Формат выходных данных*

Программа должна вывести для каждой операции одну из двух строк OK или FAIL, в зависимости от того, встречается ли данное слово в нашем множестве.


**2-1.** Сделано неправильно.


**3-1.** Дано N кубиков. Требуется определить каким количеством способов можно выстроить из этих кубиков пирамиду.
Формат входных данных:
На вход подается количество кубиков N.
Формат выходных данных:
Вывести число различных пирамид из N кубиков.
 
Высокая пирамида. Каждый вышележащий слой пирамиды должен быть не больше нижележащего.
N ≤ 200.


**4-1.** Дано невзвешенное дерево. Расстоянием между двумя вершинами будем называть количество ребер в пути, соединяющем эти две вершины. 
 
Самая удаленная вершина.
Для каждой вершины определите расстояние до самой удаленной от нее вершины. Время работы должно быть O(n).
 
Формат входных данных:
В первой строке записано количество вершин n ≤ 10000. Затем следует n – 1 строка, описывающая ребра дерева. Каждое ребро – это два различных целых числа – индексы вершин в диапазоне
[0, n–1]. Индекс корня – 0. В каждом ребре родительской вершиной является та, чей номер меньше.
Формат выходных данных:
Выход должен содержать n строк. В i-ой строке выводится расстояние от i-ой вершины до самой удаленной от нее.

***

#### 2 семестр.

##### 1 модуль.


**1.** Представление графа. Дан базовый интерфейс для представления графа:

    struct IGraph {
    virtual ~IGraph() {}
	
    	// Добавление ребра от from к to.
        virtual void AddEdge(int from, int to) = 0;
     
    	virtual int VerticesCount() const  = 0;
     
        virtual void GetNextVertices(int vertex, std::vector<int>& vertices) const = 0;
        virtual void GetPrevVertices(int vertex, std::vector<int>& vertices) const = 0;
    };
 
Необходимо написать несколько реализаций интерфейса:
CListGraph, хранящий граф в виде массива списков смежности,
CMatrixGraph, хранящий граф в виде матрицы смежности,
CSetGraph, хранящий граф в виде массива хэш-таблиц,
CArcGraph, хранящий граф в виде одного массива пар {from, to}.
Также необходимо реализовать конструктор, принимающий const IGraph*. Такой конструктор должен скопировать переданный граф в создаваемый объект.
Для каждого класса создавайте отдельные h и cpp файлы.
Число вершин графа задается в конструкторе каждой реализации.


**2.** Цикл минимальной длины. Дан невзвешенный неориентированный граф. В графе может быть несколько кратчайших путей между какими-то вершинами. Найдите количество различных кратчайших путей между заданными вершинами. Требуемая сложность O(V+E). Ввод: v:кол-во вершин(макс. 50000), n:кол-во ребер(макс. 200000), n пар реберных вершин, пара вершин v, w для запроса. Вывод:количество кратчайших путей от v к w


**3.** Количество различных путей. Дан невзвешенный неориентированный граф. В графе может быть несколько кратчайших путей между какими-то вершинами. Найдите количество различных кратчайших путей между заданными вершинами. Требуемая сложность O(V+E).


**4.** Сток. Дана матрица смежности ориентированного графа. Проверьте, содержит ли граф вершину-сток. То есть вершину, в которую ведут ребра из всех вершин, и из которой не выходит ни одного ребра. Требуемая сложность O(V).


**5.** Зал круглых столов. Единственный способ попасть в Зал Круглых Столов – пройти через Колонный Коридор. Стены Коридора изображаются на карте прямыми линиями, которые параллельны осиOY системы координат. Вход в Коридор находится снизу, а выход из Коридора в Зал – сверху. В Коридоре есть цилиндрические (на карте круглые) Колонны одинакового радиуса R.
Разработайте алгоритм, который по информации о размерах Коридора, и размещения Колонн определяет диаметр наибольшего из Круглых Столов, который можно пронести через такой Коридор, сохраняя поверхность Стола горизонтальной.



##### 2 модуль.


**1.** Города. Требуется отыскать самый выгодный маршрут между городами. Требуемое время работы O((N+M)logN), где N-количество городов, M-известных дорог между ними.
Оптимизируйте ввод

*Формат входных данных*

Первая строка содержит число N – количество городов.
Вторая строка содержит число M - количество дорог.
Каждая следующая строка содержит описание дороги (откуда, куда, время в пути).
Последняя строка содержит маршрут (откуда и куда нужно доехать).

*Формат выходных данных*

Вывести длину самого выгодного маршрута.


**2.** Необходимо написать торгового советника для поиска арбитража. 
Определение
Арбитраж - это торговля по цепочке различных валют в надежде заработать на небольших различиях в коэффициентах. Например, есть следующие курсы валют (на 03.05.2015):
GBP/USD: 0.67
RUB/GBP: 78.66
USD/RUB: 0.02
Имея 1$ и совершив цикл USD->GBP->RUB->USD, получим 1.054$. Таким образом заработав 5.4%.
Время работы – O(VE).

*Формат входных данных*

Первая строка содержит число N – количество возможных валют (размер таблицы котировок)
Далее следует построчное представление таблицы. Диагональные элементы (i, i) пропущены (подразумевается, что курс валюты к себе же 1.0).
В элементе таблицы (i, j) содержится обменный курс i->j.
Если обмен в данном направлении не производится, то -1.

*Формат выходных данных*

Выведите YES, если арбитраж есть, и NO, иначе.

> Примечание: работает за O(E^2E).


**3.** Восьминашки. «Восьминашки» – упрощенный вариант известной головоломки «Пятнашки». Восемь костяшек, пронумерованных от 1 до 8, расставлены по ячейкам игровой доски 3 на 3, одна ячейка при этом остается пустой. За один ход разрешается передвинуть одну из костяшек, расположенных рядом с пустой ячейкой, на свободное место. Цель игры – для заданной начальной конфигурации игровой доски за минимальное число ходов получить выигрышную конфигурацию (пустая ячейка обозначена нулем):
	1 2 3
	4 5 6
	7 8 0

*Формат входного файла*

Во входном файле содержится начальная конфигурация головоломки – 3 строки по 3 числа в каждой.

*Формат выходного файла*

Если решение существует, то в первой строке выходного файла выведите минимальное число перемещений костяшек, которое нужно сделать, чтобы достичь выигрышной конфигурации, а во второй строке выведите соответствующую последовательность ходов: L означает, что в результате перемещения костяшки пустая ячейка сдвинулась влево, R – вправо, U – вверх, D – вниз. Если таких последовательностей несколько, то выведите любую из них. Если же выигрышная конфигурация недостижима, то выведите в выходной файл одно число −1.


**4a.** (4) Пятнашки А. Написать алгоритм для решения игры в “пятнашки”. Решением задачи является приведение к виду:
	[ 1  2  3  4 ]
	[ 5  6  7  8 ]
	[ 9  10 11 12] 
	[ 13 14 15 0 ]
где 0 задает пустую ячейку.
Достаточно найти хотя бы какое-то решение. Число перемещений костяшек не обязано быть минимальным.

*Формат входных данных*

Начальная расстановка.

*Формат выходных данных*

Если решение существует, то в первой строке выходного файла выведите минимальное число перемещений костяшек, которое нужно сделать, чтобы достичь выигрышной конфигурации, а во второй строке выведите соответствующую последовательность ходов: L означает, что в результате перемещения костяшки пустая ячейка сдвинулась влево, R – вправо, U – вверх, D – вниз. Если таких последовательностей несколько, то выведите любую из них. Если же выигрышная конфигурация недостижима, то выведите в выходной файл одно число −1.

Примечание: Формат вывода в условии указан неверно. Нужно указывать противоположные ходы: L - пустая сдвинулась вправо и т.д.


**4b.** (5) Пятнашки Б. Как и 3 а), но требуется найти минимальное решение, то есть число перемещений костяшек должно быть минимально.


**5.** (6) Алгоритм Флойда. Полный ориентированный взвешенный граф задан матрицей смежности. Постройте матрицу кратчайших путей между его вершинами. Гарантируется, что в графе нет циклов отрицательного веса.

*Формат входного файла*

В первой строке вводится единственное число 𝑁 (1 ≤ 𝑁 ≤ 100) — количество вершин графа. В следующих 𝑁 строках по 𝑁 чисел задается матрица смежности графа (𝑗-ое число в 𝑖-ой строке — вес ребра из вершины 𝑖 в вершину 𝑗). Все числа по модулю не превышают 100. На главной диагонали матрицы — всегда нули.

*Формат выходного файла*

Выведите 𝑁 строк по 𝑁 чисел — матрицу расстояний между парами вершин, где 𝑗-ое число в 𝑖-ой строке равно весу кратчайшего пути из вершины 𝑖 в j.



##### 3 модуль.


**1.** Минимальное остовное дерево. Дан неориентированный связный граф. Требуется найти вес минимального остовного дерева в этом графе.
Вариант 1. С помощью алгоритма Прима.
 
*Формат входного файла*

Первая строка входного файла содержит два натуральных числа 𝑛 и 𝑚 — количество вершин и ребер графа соответственно (1 ≤ n ≤ 20000, 0 ≤ m ≤ 100000).
Следующие 𝑚 строк содержат описание ребер по одному на строке.
Ребро номер 𝑖 описывается тремя натуральными числами 𝑏𝑖, 𝑒𝑖 и 𝑤𝑖 — номера концов ребра и его вес соответственно (1 ≤ 𝑏𝑖, 𝑒𝑖 ≤ 𝑛, 0 ≤ 𝑤𝑖 ≤ 100000).
 
*Формат выходного файла*

Выведите единственное целое число - вес минимального остовного дерева.


**2.** Задача комивояжера с тестами. Найдите приближенное решение задачи коммивояжера в полном графе на плоскости с помощью минимального остовного дерева, построенного в первой задаче.
Оцените качество приближения на случайном наборе точек, нормально распределенном на плоскости с дисперсией 1. Нормально распределенный набор точек получайте с помощью преобразования Бокса-Мюллера.
При фиксированном N, количестве вершин графа, несколько раз запустите оценку качества приближения. Вычислите среднее значение и среднеквадратичное отклонение качества приближения для данного N.
Запустите данный эксперимент для всех N в некотором диапазоне, например, [2, 10].
Автоматизируйте запуск экспериментов.
В решении требуется разумно разделить код на файлы. Каждому классу - свой заголовочный файл и файл с реализацией.


**3.** Максимальный поток в неориентированном графе. Задан ориентированный граф, каждое ребро которого обладает целочисленной пропускной способностью. Найдите максимальный поток из вершины с номером 1 в вершину с номером 𝑛.

*Формат входного файла*

Первая строка входного файла содержит 𝑛 и 𝑚 — количество вершин и количество ребер графа (2 ≤ 𝑛 ≤ 100, 1 ≤ 𝑚 ≤ 1000). Следующие 𝑚 строк содержат по три числа: номера вершин, которые соединяет соответствующее ребро графа и его пропускную способность. Пропускные способности не превосходят 105.
 
*Формат выходного файла*

В выходной файл выведите одно число — величину максимального потока из вершины с номером 1 в вершину с номером n.


**4.** Расстояние Хэмминга. Расстояние Хэмминга между двумя строками равной длины — это количество индексов, в которых символы этих строк не равны.
Определим расстояние от шаблона p до строки s как суммарное расстояние Хэмминга от p до всех подстрок s, имеющих длину |p|. В строке и в шаблоне некоторые символы стёрты. Нужно восстановить стёртые символы так, чтобы расстояние от p до s было минимально возможным.
 
*Формат входного файла*

В первой строке дана строка s, во второй — шаблон p. Обе строки непусты, имеют длину не более 1000 и состоят из символов `0', `1' и `?'. `?' обозначает стёртые символы, которые нужно восстановить. Длина строки p не превосходит длины строки s.
 
*Формат выходного файла*

В первой строке выведите минимальное расстояние от p до s после восстановления всех стёртых символов. Во второй и третьей строках соответственно выведите s и p, в которых символы `?` заменены на `0` и `1`.



##### 4 модуль.


**1.** RMQ. Дано число N и последовательность из N целых чисел. Найти вторую порядковую статистику на заданных диапазонах.
 
*Формат входных данных*

В первой строке заданы 2 числа: размер последовательности N и количество диапазонов M. Следующие N целых чисел задают последовательность. Далее вводятся M пар чисел - границ диапазонов.  Гарантируется, что каждый диапазон содержит как минимум 2 элемента.

*Формат выходных данных*

Для каждого из M диапазонов напечатать элемент последовательности - 2ю порядковую статистику. По одному числу в строке.
 
Для решения задачи используйте структуру данных Sparse Table. Требуемое время обработки каждого диапазона O(1). Время подготовки структуры данных O(n log n).


**2-1.** Система бронирования. ООО Новые Железные Дороги поручило вам разработать систему бронирования билетов на новый маршрут поезда дальнего следования. Маршрут проходит через N станций, занумерованных от 0 до N-1. Вместимость поезда ограничена. В систему бронирования последовательно приходят запросы от пассажиров с указанием номера начальной и конечной станции, а также количество билетов, которые пассажир хочет приобрести. Требуемая скорость обработки каждого запроса - O(log N).

*Формат входных данных*

Первая строка содержит число N – количество станций (1 ≤ N ≤ 50 000). Вторая строка содержит начальное количество проданных билетов. В примере продано по одному билету на перегонах 0->1 и 4->5. В третьей строке указана вместимость поезда. В четвёртой - количество запросов на бронирование. Далее идут непосредственно запросы в виде: номер начальной станции, номер конечной станции, количество запрашиваемых билетов.

*Формат выходных данных*

Необходимо вывести номера запросов, которые не удалось выполнить из-за отсутствия свободных мест.


**3.** LCA. Задано дерево с корнем, содержащее 𝑛 (1 ≤ 𝑛 ≤ 100 000) вершин, пронумерованных от 0 до 𝑛−1. Требуется ответить на 𝑚 (1 ≤ 𝑚 ≤ 10 000 000) запросов о наименьшем общем предке для пары вершин. Запросы генерируются следующим образом. Заданы числа 𝑎1, 𝑎2 и числа 𝑥, 𝑦 и 𝑧. Числа 𝑎3, . . . , 𝑎2𝑚 генерируются следующим образом: 𝑎𝑖 = (𝑥·𝑎𝑖−2+𝑦·𝑎𝑖−1+𝑧) mod 𝑛. Первый запрос имеет вид ⟨𝑎1, 𝑎2⟩. Если ответ на 𝑖−1-й запрос равен 𝑣, то 𝑖-й запрос имеет вид ⟨(𝑎2𝑖−1 + 𝑣) mod 𝑛, 𝑎2𝑖⟩.
Для решения задачи можно использовать метод двоичного подъёма.

*Формат входных данных*

Первая строка содержит два числа: 𝑛 и 𝑚. Корень дерева имеет номер 0.
Вторая строка содержит 𝑛 − 1 целых чисел, 𝑖-е из этих чисел равно номеру родителя вершины 𝑖.
Третья строка содержит два целых числа в диапазоне от 0 до 𝑛−1: 𝑎1 и 𝑎2.
Четвертая строка содержит три целых числа: 𝑥, 𝑦 и 𝑧, эти числа неотрицательны и не превосходят 109.

*Формат выходных данных*

Выведите в выходной файл сумму номеров вершин — ответов на все запросы.


**4.** Супермассив строк. Реализуйте структуру данных “массив строк” на основе декартового дерева по неявному ключу со следующими методами:

    // Добавление строки в позицию position.
    // Все последующие строки сдвигаются на одну позицию вперед.
    void InsertAt( int position, const std::string& value );
    // Удаление строки из позиции position.
    // Все последующие строки сдвигаются на одну позицию назад.
    void DeleteAt( int position );
    // Получение строки из позиции position.
    std::string GetAt( int position );

Все методы должны работать за O(log n) в среднем, где n – текущее количество строк в массиве.

*Формат входных данных*

Первая строка содержит количество команд k ≤ 106.
Последующие k строк содержат описания команд:
Команда “+ 10 hello”
означает добавление строки hello в позицию 10.
Команда “- 14”
означает удаление строки из позиции 14.
Команда “? 33”
означает запрос на вывод строки из массива в позиции 33.

*Формат выходных данных*

Выведите все строки, запрошенные командами “?”.

***

#### 3 семестр.

##### 1 модуль.

**1.** Префикс-функция. Найдите все вхождения шаблона в строку. Длина шаблона – p, длина строки ­– n. Время O(n + p), доп. память – O(p).
Вариант 1. С помощью префикс-функции;

*Формат ввода*

Шаблон, символ перевода строки, строка.

*Формат вывода*

Позиции вхождения шаблона в строке.


**2-3.** Преобразования. Реализовать набор преобразований строки в префикс-функцию, z-функцию и обратно, а также из префикс-функции в z-функцию и обратно (6 шт). Все преобразования должны работать за линейное время (размер алфавита считаем константой). Преобразование в строку должно выдавать лексикографически минимально возможную строку.

Задача в контесте C1: Найти лексикографически-минимальную строку, построенную по префикс-функции, в алфавите a-z.
Задача в контесте C2: Найти лексикографически-минимальную строку, построенную по z-функции, в алфавите a-z.


**4.**  Шаблон с "?". Шаблон поиска задан строкой длины m, в которой кроме обычных символов могут встречаться символы “?”. Найти позиции всех вхождений шаблона в тексте длины n. Каждое вхождение шаблона предполагает, что все обычные символы совпадают с соответствующими из текста, а вместо символа “?” в тексте встречается произвольный символ. Время работы - O(n + m + Z), где Z - общее -число вхождений подстрок шаблона “между вопросиками” в исходном тексте. (Ахо-Корасик)

*Формат ввода*

Шаблон, символ перевода строки, строка.

*Формат вывода*

Позиции вхождения шаблона в строке.


##### 2 модуль.

**1.**  Дана строка длины n. Найти количество ее различных подстрок.
Используйте суффиксный массив.
Построение суффиксного массива выполняйте за O(n log n).
Вычисление количества различных подстрок выполняйте за O(n).


##### 3 модуль.

**1.** Расстояние между отрезками. Даны два отрезка в пространстве (x1, y1, z1) - (x2, y2, z2) и (x3, y3, z3) - (x4, y4, z4). Найдите расстояние между отрезками.

*Формат ввода*

Заданы целые x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4. Координаты по модулю не превосходят 1000.

*Формат вывода*

Выведите искомую величину c точностью не менее 6 знаков после десятичной точки.


**2.** Выпуклая оболочка. Даны n точек в пространстве. Никакие 4 точки не лежат в одной полуплоскости. Найдите выпуклую оболочку этих точек за O(n2) (или быстрее :)).

*Формат ввода*

Первая строка содержит число m - количество тестов. В последующих строках описаны сами тесты. Каждый тест начинается со строки, содержащей n (n ≤ 1000) - число точек. Далее, в n строках даны по три числа - координаты точек. Все координаты целые, не превосходят по модулю 500.

*Формат вывода*

Для каждого теста выведите следующее. В первую строку выведите количество граней m. Далее в последующие m строк выведите описание граней: количество точек грани (=3) и номера точек в исходном множестве. Точки нумеруются в том же порядке, в котором они даны во входном файле.
Точки в пределах грани должны быть отсортированы в порядке против часовой стрелки относительно внешней нормали к грани. Первая точка – точка с минимальным номером.

> Это решение очень специфично (if u know what i mean). Чтобы удовлетворять реализации все точки поворачиваются на малый угол, потом запускается алгортм Чана, потом точки поворачиваются назад.
> Алгоритм взят отсюда: http://tmc.web.engr.illinois.edu/ch3d/ch3d.pdf . Удачи.


**3.** Сумма Миньковского. Даны два выпуклых многоугольника на плоскости. В первом n точек, во втором m. Определите, пересекаются ли они за O(n + m).
Указание. Используйте сумму Минковского.

*Формат ввода*

Первая строка содержит число n точек первого многоугольника. Затем идут n строчек с координатами точек первого многоугольника по часовой стрелке (координаты – действительные числа, double).
Второй прямоугольник задается аналогично.
n, m ≤ 80000.

*Формат вывода*

YES/NO.


**4.** Диаграмма Вороного. Даны точки, никакие 3 из которых не лежат на одной прямой. Никакие 4 точки не лежат на одной окружности. Кроме того, все точки имеют различные x-координаты. Определите  среднее число сторон в многоугольниках диаграммы Вороного этого множества точек. Считаются только конечные многоугольники. Если все многоугольники неограниченны, ответ полагается равным 0. Число точек n ≤ 100000. Алгоритм должен иметь асимптотику O(n log n).

*Формат ввода*

В каждой строке через пробел записаны действительные координаты точек xi yi.

*Формат вывода*

Число - среднее число сторон в ограниченных многоугольниках диаграммы Вороного. 0, если таких многоугольников нет.

> Используется выпуклая оболочка из задачи 2.


#### 4 модуль.

**1.** Big Integer. В этой задаче разрешается подключать <iostream>, <vector> и <string> и только их.
Напишите класс BigInteger для работы с длинными целыми числами. Должны поддерживаться операции:
сложение, вычитание, умножение, деление, остаток по модулю, работающие так же, как и для int; составное присваивание с этими операциями;
унарный минус, префиксный и постфиксный инкремент и декремент,
операторы сравнения == != < > <= >=
вывод в поток и ввод из потока;
метод toString(), возвращающий строковое представление числа;
конструирование из int (в том числе неявное преобразование, когда это надо);
неявное преобразование в bool, когда это надо (должно работать в условных выражениях).
Асимптотические ограничения на время работы операторов в контесте не проверяются, но реализация должна работать за:
Сложение, вычитание, унарный минус, операторы сравнения – O(n),
Умножение, деление, остаток по модулю – O(n2),
где n – количество разрядов большего числа (по модулю).

В вашем файле должна отсутствовать функция main(), а сам файл должен называться biginteger.h (маленькими буквами). В качестве компилятора необходимо указывать Make. Ваш код будет вставлен посредством команды #include<biginteger.h> в программу, содержащую тесты; вследствие этого, код необходимо отправлять в файле со строго соответствующим именем!

*Формат ввода*

Не требуется считывать ввод.

*Формат вывода*

Не требуется выводить.


**2.** Преобразование Фурье. 
1. Установите Jupyter и Python.
2. Для функции f на диапазоне [0, 10] с частотой дискретизации 100 изготовьте код для построения графика f. Используйте matplotlib.
3. Реализуйте прямое и обратное дискретное преобразование Фурье FFT и FFTReverse на питоне за O(n log n).
4. По функции f вычислите g = FFT( f ).
5. Вычислите f2 = FFTReverse( g ).
6. Постройте график f2.
7. Обнулите некоторую долю D последних коэффициентов g. Обновите f2 и ее график. Попробуйте несколько различных значений D.
8. Проведите эксперименты с функциями f = x, x2, sin x, sin x2, sin x / x. Для каждой функции найдите долю D, для которой разница f и f2 видна невооруженным глазом.


**4.** Эндшпиль.  На шахматной доске стоит три фигуры: белый король КW, белый ферзь QW, черный король KB. КW стоит на поле C3. Положение двух других фигур задается на входе программы. Предполагается, что в заданной позиции ход белых. Определите, можно ли поставить мат, выполняя ходы только белым ферзем QW. Если поставить мат нельзя, выведите “IMPOSSIBLE”. Если поставить мат можно, выведите минимальное число ходов до мата. Считаются ходы как белых, так и черных.

*Формат ввода*

Вначале задается позиция QW, затем KB.

*Формат вывода*

Если поставить мат нельзя, выведите “IMPOSSIBLE”. Если поставить мат можно, выведите минимальное число ходов до мата.
