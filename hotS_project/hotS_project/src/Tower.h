#pragma once

#include "GameObject.h"

enum TowerState {
	IDLE, ATTACKING
};

class Tower : public GameObject {
private:
	ofImage blue[2];
	ofImage red[2];
	ofVec2f position;
	TowerState state;
	int life;
public:
	Tower(const ofVec2f& position);
	void init();
	void update(float secs);
	void draw(const ofVec2f& camera);
	void shoot();
	void collidedWith(GameObject* other);
	bool isAlive() const;
	ofRectangle bounds();
};