#include "ofApp.h"

void ofApp::ofAndroidKeyboard(){
	ofLog()<<"start keyboard show";
	jclass javaClass = ofGetJNIEnv()->FindClass("cc/openframeworks/keyboard/OFActivity");
	if(javaClass==0)
	{
		ofLogError("ofAppAndroidWindow") << "ofkeyboard(): couldn't find OFActivity java class";
		return;
	}
	jmethodID method = ofGetJNIEnv()->GetMethodID(javaClass, "ofkeyboard","()V");
	if(!method){
		ofLogError("ofAppAndroidWindow") << "ofkeyboard(): couldn't find OFActivity ofkeyboard method";
		return;
	}
	else{
		ofGetJNIEnv()->NewObject(javaClass,method);
	}
}

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255,0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){ 
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::touchDown(int x, int y, int id){
	ofAndroidKeyboard();
}

//--------------------------------------------------------------
void ofApp::touchMoved(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchUp(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchDoubleTap(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchCancelled(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::swipe(ofxAndroidSwipeDir swipeDir, int id){

}

//--------------------------------------------------------------
void ofApp::pause(){

}

//--------------------------------------------------------------
void ofApp::stop(){

}

//--------------------------------------------------------------
void ofApp::resume(){

}

//--------------------------------------------------------------
void ofApp::reloadTextures(){

}

//--------------------------------------------------------------
bool ofApp::backPressed(){
	return false;
}

//--------------------------------------------------------------
void ofApp::okPressed(){

}

//--------------------------------------------------------------
void ofApp::cancelPressed(){

}
