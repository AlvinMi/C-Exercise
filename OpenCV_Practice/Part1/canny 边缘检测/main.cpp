// canny ��Ե���.cpp : Defines the entry point for the console application.
// canny ��Ե���, ����ͼƬ, ����ת��Ϊ�Ҷ�ͼ. ���� blur ��������ͼ��ģ���Խ���, Ȼ���� canny ��Ե���.
// ������ϰ�� 2018.3.6		alvinmi

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

int _tmain()
{
	// ����ԭʼͼ
	Mat	srcImage = imread("1.jpg");

	imshow("��ԭʼͼ��Canny ��Ե���", srcImage);
	Mat	edge, grayImage;	// ��������
	
	// ��ԭͼת��Ϊ�Ҷ�ͼ��
	cvtColor(srcImage, grayImage, CV_BGR2GRAY);

	// ��ʹ�� 3x3 �ں�������
	blur(grayImage, edge, Size(3,3));

	// ���� Canny ����
	Canny(edge, edge, 3, 9, 3);

	// ��ʾЧ��ͼ
	imshow("��Ч��ͼ��Canny ��Ե���",edge);

	waitKey(0);
	return 0;
}

