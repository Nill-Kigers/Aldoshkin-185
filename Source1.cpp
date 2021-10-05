#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace cv;
using namespace std;

int main()
{	 //рисование окна
	int height = 1080;
	int width = 1920;
	Mat img(height, width, CV_8UC3); //создаётся матрица(Mat) изображение заданной ширены и высоты с 3-х канальным цветом
	Point textOrg(100, img.rows / 2); //изменение положения текста по вертикали
	int fontFace = FONT_HERSHEY_SCRIPT_SIMPLEX;//настройка шрифта , FONT_HERSHEY_SIMPLEX - тип шрифта
	int fontScale = 5;
	int fontSize = 5;
	Scalar color(200, 100, 50); //цвет текста


	putText(img, "OpenCV Step By Step", textOrg, fontFace, fontScale, color, fontSize); //  используется для рисования текстовой строки на любом изображении

	imshow("Hello World", img);
	waitKey(0);
	return(0);
	//Запрос от пользователя какой файл ему требуется открыть
	setlocale(LC_ALL, "Russian");
	//string filename; //строчка с названием перменной 
	//cout << "Имя файла "; //вывод значения <<
	//cin >> filename;  // ввод значения >>
	//cout << "Ввели файл "<<filename<<endl; //endl текст будет выведен на след. строке 
	
	/*
	//Блок загрузки изображения, Оператор Canny
	Mat img;//создает матрицу
	img = imread("3.jpg", 1); imread -  считывает изображение из файла, заданного , выводя формат файла из его содержимого.
	namedWindow("okno", WINDOW_AUTOSIZE); // название окна, авторазмер
	imshow("okno", img); // отображает изображение в градациях серого на рисунке. использует диапазон отображения по умолчанию для типа данных изображения и оптимизирует свойства рисунка, осей и объекта изображения для отображения изображения
	Mat src_gray;  //Создание матрицы с названием src_gray
	Mat canny_output; // Создание матрицы
	cvtColor(img, src_gray, COLOR_RGB2BGR); //  cvtColor конвертирует изображения из одного цветового пространства в другое
	blur(src_gray, src_gray, Size(3, 3));  // размытие
	double lower_thresh_val = 100, high_thresh_val = 300; // нижний и верхний порог, нижний отвечает за шумы изображения, если задать много верхнего, то будет просто черное изображение
	Canny(src_gray, canny_output, lower_thresh_val, high_thresh_val, 3); // оператор обнаружения границ изображения
	namedWindow("Серое изображение", WINDOW_AUTOSIZE);
	imshow("Серое изображение", canny_output);
	imwrite("canny_output.jpeg", canny_output);
	
		
	// Моменты и центр масс findContours
		RNG rng(12345); // генератор случайных чисел
		vector<vector<Point>>contours;// вектор
		vector<Vec4i>hierarchy;
		findContours(canny_output, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0)); // нахождение контуров ,RETR_EXTERNAL - удаляет внутренние контуры  ,CHAIN_APPROX_SIMPLE - нужен для экономии памяти: если линия, то хранит только точки начала и конца.
		vector<Moments>mu(contours.size());
		for (int i = 0; i < contours.size(); i++)
		{
		mu[i] = moments(contours[i], false);
		}
		
		vector<Point2f>mc(contours.size());
		for (int i = 0; i < contours.size(); i++) 
		{
			mc[i] = Point2f(mu[i].m10 / mu[i].m00, mu[i].m01 / mu[i].m00);
		}
		for (int i = 0;i < contours.size(); i++) {
			printf("контур № %d:цент масс - x = %.2f y = %.2f; длина - %.2f \n", i, mu[i].m10 / mu[i].m00, mu[i].m01 / mu[i].m00, arcLength(contours[i], true));
		}
		
		
		// Рисование контуров
		Mat drawing = Mat::zeros(canny_output.size(), CV_8UC3);// CV_8UC3 изображение без знака с 3 каналами
		for (int i = 0; i < contours.size(); i++)
		{
			Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255)); //Тип Scalar широко используется в OpenCV для передачи значений пикселей, цвет
			drawContours(drawing, contours, i, color, 2, 8, hierarchy, 0, Point()); //Полученные с помощью функции findContours контуры хорошо бы каким-то образом нарисовать в кадре. Машине это не нужно, зато нам это поможет лучше понять как выглядят найденные алгоритмом контуры. Поможет в этом ещё одна полезная функция — drawContours.
			circle(drawing, mc[i], 4, color, -1, 5, 0);
		}
	
	namedWindow("контуры", WINDOW_AUTOSIZE);
	imshow("контуры", drawing);
	imwrite("контуры.jpeg", drawing);

	
	waitKey(0);
	system("pause");
	return(0);*/

}
