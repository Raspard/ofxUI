
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	setupBasicsGUI();

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(red,green,blue,alpha);
}

void ofApp::setupBasicsGUI() {

	uiThemecb.set(64, 192), uiThemeco.set(192, 192), uiThemecoh.set(128, 192);
	uiThemecf.set(240, 255); uiThemecfh.set(128, 255), uiThemecp.set(96, 192);
	uiThemecpo.set(255, 192);

	dim = 32;
	guiWidth = 250;
	guiMargin = 2;

	ofxUICanvas *guiBasics = new ofxUICanvas(0, 0, 255, ofGetHeight());		//Canvas create
	guiBasics->setUIColors(uiThemecb, uiThemeco, uiThemecoh, uiThemecf, uiThemecfh, uiThemecp, uiThemecpo);
	guiBasics->addSpacer();
	guiBasics->addLabel("Background", OFX_UI_FONT_MEDIUM);
	guiBasics->addSpacer();
	ofxUISlider *redSlider = guiBasics->addSlider("Red Top", 0.0, 255.0, &red);
	redSlider->setColorFill(ofColor::red);
	guiBasics->setDrawOutline(true);
	guiBasics->setColorOutline(ofColor::red);

	guiBasics->drawFill();
	guiBasics->setWidgetPosition(OFX_UI_WIDGET_POSITION_RIGHT);
	guiBasics->setWidgetSpacing(35);
	guiBasics->setWidgetPosition(OFX_UI_WIDGET_POSITION_DOWN);
	guiBasics->setWidgetSpacing(3);

	ofxUISlider *greenSlider = guiBasics->addSlider("Green Top", 0.0, 255.0, &green);
	greenSlider->setColorFill(ofColor(30, 240, 30));
	greenSlider->setColorFillHighlight(ofColor(30, 150, 30));
	ofxUISlider *blueSlider = guiBasics->addSlider("Blue Top", 0.0, 255.0, &blue);
	blueSlider->setColorFill(ofColor(30, 30, 240));
	blueSlider->setColorFillHighlight(ofColor(30, 30, 150));
	ofxUISlider *alphaSlider = guiBasics->addSlider("Alpha Top", 0.0, 255.0, &alpha);



	guiBasics->autoSizeToFitWidgets();
	//guiBasics->setPosition(150, 0);			//REPOSITION CANVAS.

}
