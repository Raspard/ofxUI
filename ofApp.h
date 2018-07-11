#pragma once

#include "ofMain.h"
#include "ofxUI.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void setupBasicsGUI();
		
		float red, blue, green, alpha;
		ofColor uiThemecb, uiThemeco, uiThemecoh, uiThemecf, uiThemecfh, uiThemecp, uiThemecpo;
		float dim;                            // Size of GUI elements
		float guiWidth;
		float guiMargin;
};
