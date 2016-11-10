#include "ScreenManager.h"

void ScreenManager::init(Screen* first) {
	current = first;
	current->init();
}

void ScreenManager::update() {
	Screen* next = current->nextScreen();
	if (next != current) {
		next->init();
		delete current;
		current = next;
	}
	current->update(ofGetLastFrameTime(), mouse);
}

void ScreenManager::draw() {
	current->draw();
}


void ScreenManager::mousePressed(int x, int y, int button) {
	mouse.pos.set(x, y);
}

void ScreenManager::mouseReleased(int x, int y, int button) {
	mouse.clicked = false;
}

void ScreenManager::keyPressed(int key) {

}