#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace cv;
using namespace std;

int main()
{
	int height = 1080;
	int width = 1920;
	Mat img(height, width, CV_8UC3); //�������� ����������� �������� ������ � ������ � 3-� ��������� ������
	Point textOrg(100, img.rows / 2); //��������� ��������� ������ �� ���������
	int fontFace = FONT_HERSHEY_SCRIPT_SIMPLEX;
	int fontScale = 5;
	int fontSize = 5;
	Scalar color(200, 100, 50); //���� ������


	putText(img, "OpenCV Step By Step", textOrg, fontFace, fontScale, color, fontSize);

	imshow("Hello World", img);
	waitKey(0);
	return(0);
	/*setlocale(LC_ALL, "Russian");
	Mat img;
	img = imread("3.jpg", 1);
	namedWindow("okno", WINDOW_AUTOSIZE);
	imshow("okno", img);
	Mat src_gray;
	Mat canny_output;
	cvtColor(img, src_gray, COLOR_RGB2BGR);
	blur(src_gray, src_gray, Size(3, 3));
	double lower_thresh_val = 100, high_thresh_val = 300;
	Canny(src_gray, canny_output, lower_thresh_val, high_thresh_val, 3);
	namedWindow("����� �����������", WINDOW_AUTOSIZE);
	imshow("����� �����������", canny_output);
	imwrite("canny_output.jpeg", canny_output);
	RNG rng(12345);
	vector<vector<Point>>contours;
	vector<Vec4i>hierarchy;
	findContours(canny_output, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));
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
		printf("������ � %d:���� ���� - x = %.2f y = %.2f; ����� - %.2f \n", i, mu[i].m10 / mu[i].m00, mu[i].m01 / mu[i].m00, arcLength(contours[i], true));
	}
	
	Mat drawing = Mat::zeros(canny_output.size(), CV_8UC3);
	for (int i = 0; i < contours.size(); i++)
	{
		Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
		drawContours(drawing, contours, i, color, 2, 8, hierarchy, 0, Point());
		circle(drawing, mc[i], 4, color, -1, 5, 0);
	}
	namedWindow("�������", WINDOW_AUTOSIZE);
	imshow("�������", drawing);
	imwrite("�������.jpeg", drawing);
	waitKey(0);
	system("pause");
	return(0);*/

}