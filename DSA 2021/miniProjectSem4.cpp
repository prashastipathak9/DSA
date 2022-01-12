/*
* Importing all the required libraries for the program
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\objdetect\objdetect.hpp>
/*
* Using namespace directive to import functions from
* OpenCV and std library of C++
*/
using namespace std;
using namespace cv;
/*
* OpenCV provides a training method named Cascade Classifier 
Training/pretrained models,
* that can be read using the cv::CascadeClassifier::load method. The 
pretrained models are
* located in the data folder in the OpenCV installation
* The following code example will use pretrained Haar cascade models to 
detect faces and eyes in an image.
* A cv::CascadeClassifier is created,
* the necessary XML file is loaded using the 
cv::CascadeClassifier::load method.
* Detection is done using cv::CascadeClassifier::detectMultiScale 
method,
* which returns boundary rectangles for the detected faces or eyes.
*/
int main(void) 
{
CascadeClassifier faceDetection;
/*
* load class to invoke a file fetch, the file path is taken as the 
parameter
* the file required here is a Haarcascade template library
* for windows application a \\ is used for directory tree whereas on 
linux/unix only \ suffices
*/
if
(!faceDetection.load("C:\\Users\\user3\\Downloads\\opencv\\sources\\dat
a\\haarcascades\\haarcascade_frontalface_default.xml")) 
{
// If file is absent at the directory or could not be loaded
cout << "\n XML File not found";
exit(0);

/*
* limiting the input path to a 100 characters
* storing the path in input_path variable to pass as a parameter 
* Mat is an image container which stores the image as a matrix
* Mat class helps automatically allocate memory for the object
*/
char input_path[100];
cout << "\n Enter path of image : ";
cin.getline(input_path, 100); 
Mat img = imread(input_path, IMREAD_UNCHANGED);
if (img.empty()) {
// Error message if image could not be loaded
cout << "\n image is not loaded!";
}
else {
// Success prompt for successful image loading
cout << "\n \t image found and loaded!";
cout << "\n \t initiating image processing...";
}
/*
* Choosing a vect data structure to store the image data
* Vector deals with dynamic allocation thus reducing redundant code
* detectMultiScale function detects the image 
* and scans it as a grid in xy plane
* it scans the facial size and subsequently if face is found draws a
* green rectangle around the humanoid faces on the image
*/
vector<Rect> faces;
faceDetection.detectMultiScale(img, faces);
for (int i = 0; i < faces.size(); i++) 
{
Point pt1(faces[i].x, faces[i].y);
Point pt2((faces[i].x + faces[i].height), (faces[i].y + 
faces[i].width));
rectangle(img, pt1, pt2, Scalar(0, 255, 0), 2, 8, 0);
}
/*
* imwrite is the function that finalises the output 
* it stores the data processed above into the file 
* the directory for the output has been predefined and 
* the output file name has also been predifend as a .jpg
* the function writes the output in the mentioned filename
* and subsequently prints a successful completion prompt */

imwrite("C:\\Users\\user3\\Downloads\\output_facedetect.jpg", img);
cout << "\n \t Image is detected successfully!";
return 0;
}
