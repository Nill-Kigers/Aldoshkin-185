#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace cv;
using namespace std;

Mat img;

int main1()

{
	setlocale(LC_ALL, "Russian");
	char filename[80];
	cout << "Ввeдите имя файла, в который хотите внести измененя, и нажмите Enter" << endl;
	cin.getline(filename, 80);
	cout << "Открыт файл";
	cout << filename << endl;

	Mat img = imread(filename, 1);
	

	namedWindow("source_window", WINDOW_AUTOSIZE);
	imshow("source_window", img);


	waitKey(0);
	return (0);
}
