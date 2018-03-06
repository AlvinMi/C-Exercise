// VideoCapture.cpp : Defines the entry point for the console application.
// VideoCapture �� �� OpenCV 2.x ��������һ����. ������ : ����Ƶ�ļ��������ͷ������Ƶ����ʾ����.

#include "stdafx.h"
#include <opencv2\opencv.hpp>
using namespace cv;



int main()
{
	// ������Ƶ, ���ַ�ʽ.
	//VideoCapture capture;
	//capture.open("1.avi");	// ��һ�ַ�ʽ

	VideoCapture capture("2.mp4");	// �ڶ��ַ�ʽ, ���ֽϷ���

	// ѭ����ʾÿһ֡
	while(1)
	{
		Mat	frame;		// ����һ�� Mat ��������ÿһ֡��ͼ��.
		capture>>frame;	// ��ȡ��ǰ֡

		// ����Ƶ��ȡ��, ���˳�ѭ��
		if(frame.empty())
		{	
			break;
		}

		imshow("��ǰ����Ƶ", frame);		// ��ʾ��ǰ��һ֡
		waitKey(50);
	}

	return 0;
}

