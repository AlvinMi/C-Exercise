// Use_Camera.cpp : Defines the entry point for the console application.
// ʹ������ͷ, �ɼ�ͼ��.



#include "stdafx.h"
#include <opencv2\opencv.hpp>
using namespace cv;

int main( )
{
	// ������ͷ�ж�����Ƶ
	VideoCapture capture(0);
	Mat	edges;	// ����洢�ҶȻ�֮��ͼƬ�ı���

	while(1)
	{
		Mat	frame;		// ����һ������, ���ڴ���ÿһ֡��ͼ��.
		capture>>frame;// ��ȡ��ǰ֡
		imshow("��ȡ����Ƶ", frame);		// ��ʾ��ǰ֡


		//------ ��������Ч����ʾ --------//
		// ��ԭͼ��ת��Ϊ�Ҷ�ͼ��.
		cvtColor(frame, edges, CV_BGR2GRAY);	// ת�� BGR ��ɫͼΪ�Ҷ�ͼ

		// ���˾��Ϊ OpenCV3 ��Ϊ : 
		//cvtColor(frame, edges, COLOR_BGR2GRAY);	// ת�� BGR ��ɫͼΪ�Ҷ�ͼ

		// ʹ�� 3x3 �ں�������.
		blur(edges, edges, Size(7,7));	 // ģ��

		// ���� Canny ��Ե��Ⲣ��ʾ.
		Canny(edges, edges, 0, 30, 3);
		imshow("canny �����Ƶ", edges);		

		//waitKey(30);    
		if(waitKey(30) >= 0)	break;
	}


	return 0;
}

