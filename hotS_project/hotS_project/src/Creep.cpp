#include "Creep.h"

void Creep::init() {
	life = 50;
	position.set(ofGetWidth(), ofGetHeight());
	for (int i = 0; i < 5; i++) {
		ofVec2f pos(ofGetWidth(), 200);
		ofVec2f length(0, 100);
		wayPoints.push_back(pos);
		pos += length;
	}
}

void Creep::update(float secs) {

}

void Creep::draw(const ofVec2f& camera) {

}

void Creep::collidedWith(GameObject* other) {

}

bool Creep::isAlive() const {

}

bool Creep::isShooting() const {

}

ofRectangle Creep::bounds(){

}