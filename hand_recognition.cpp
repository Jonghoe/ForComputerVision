#include<opencv.hpp>
#include<string>
#include<iostream>
using namespace cv;
using namespace std;
const string dataPath = "./handData/";
int main()
{
	Mat img = imread(dataPath+"1.jpeg",IMREAD_COLOR);	
	imshow("IMG", img);
	waitKey();
}