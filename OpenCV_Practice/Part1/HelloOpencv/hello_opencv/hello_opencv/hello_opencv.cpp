// hello_opencv.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <opencv2/opencv.hpp>

using namespace cv;

//#pragma comment(lib, "opencv_calib3d2413d.lib")
int main()
{
	// ��ȡһ��ͼƬ ��������ʵ��ͼ��
	Mat img = imread("1.jpg",	CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_ANYCOLOR);	

	imshow("��������ʵ��ͼƬ", img);

	// ����Ҷ�ͼ
	img = imread("1.jpg",0);		

	imshow("����ĻҶ�ͼ", img);

	// ������ͨ���Ĳ�ɫͼƬ

	Mat logo1 = imread("1.jpg", 4);
	imshow("����3ͨ����ɫͼƬ", logo1);

	// �ȴ� 6000 ms �󴰿��Զ��ر�
	waitKey(8000);


	//return 0;
}

