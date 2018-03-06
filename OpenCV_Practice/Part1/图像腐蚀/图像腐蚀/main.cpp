// ͼ��ʴ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <opencv2/highgui/highgui.hpp>	// opencv highgui ģ��ͷ�ļ�
#include <opencv2/imgproc/imgproc.hpp>	// opencv ͼ����ͷ�ļ�

using namespace cv; 

int main()
{
	// ����ԭͼ
	Mat srcImage = imread("1.jpg");

	// ��ʾԭͼ
	imshow("��ԭͼ����ʴ����", srcImage);

	// ���и�ʴ����
	Mat	element = getStructuringElement(MORPH_RECT, Size(11,11));
	Mat dstImagel;
	erode(srcImage, dstImagel, element);

	// ��ʾЧ��ͼ
	imshow("��Ч��ͼ����ʴ����", dstImagel);
	waitKey(0);

	return 0;
}

