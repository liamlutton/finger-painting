#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "canvas.h"

class PenViewer {

    private:
        void processImage();
        void setupCamera();
        void loadColorPixelImages(const ofPixels &image_pixels);

        Canvas canvas_;

        ofVideoGrabber camera_;
        ofxCvColorImage current_image_;
        
        ofxCvContourFinder contour_finder_;

        ofxCvColorImage display_image_;

        ofxCvColorImage red_blob_image_;
        ofxCvColorImage green_blob_image_;
        ofxCvColorImage blue_blob_image_;

        ofPoint center_red_;
        ofPoint center_green_;
        ofPoint center_blue_;

        ofColor current_color_;

    public:
        ofVideoGrabber getCamera() const;
        ofxCvColorImage getCurrentImage() const;
        ofxCvColorImage getDisplayImage() const;
        Canvas getCanvas() const;
        bool isImageLoaded();

        void update();
        void setup();

};