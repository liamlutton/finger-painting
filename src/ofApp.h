#pragma once

#include "pen-viewer.h"
#include "canvas.h"

class ofFingerPaint : public ofBaseApp {

	private:
		static const int kImageX = 130;
		static const int kImageY = 0;

		static const int kMazeTextSpacing = 30;
		static const int kMazeTextStartX = 10;
		static const int kMazeTextStartY = 10;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		PenViewer pen_viewer_;
		
};
