// ͼ��ģ��.cpp : Defines the entry point for the console application.
// Opencv ��ͼƬ���о�ֵ�˲�, ģ��һ��ͼƬ����ֵ�˲����� blur ������
// ������ϰ�� 2018.3.6  alvinmi

#include "stdafx.h"

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main()
{
	// ������ԭʼͼ��
	Mat	srcImage = imread("1.jpg");

	// ����ʾԭʼͼƬ��
	imshow("��ֵ�˲�[ԭͼ]",srcImage);

	// �����о�ֵ�˲���
	Mat dstImage;
	blur(srcImage, dstImage, Size(10,24));

	// ����ʾЧ��ͼ��
	imshow("��ֵ�˲���Ч��ͼ��",dstImage);

	waitKey(0);


	return 0;
}

