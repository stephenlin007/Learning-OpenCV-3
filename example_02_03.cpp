//
// Created by gengee on 17-9-13.
//
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;

int main( int argc, char** argv ) {

    cv::namedWindow( "Example 2-3", cv::WINDOW_AUTOSIZE );

    cv::VideoCapture videoCapture;

    videoCapture.open( string( argv[1] ) );
        cout << "Opend file: " << argv[1] << endl;

    cv::Mat frame;

    for(;;) {
        videoCapture >> frame;

        if( frame.empty() ) break;

        cv::imshow( "Example 2-3", frame );

        if( (char)cv::waitKey(33) >= 0 ) break;
    }
    return 0;
}
