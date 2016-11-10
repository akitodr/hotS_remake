#pragma once

#include "ofMain.h"
#include "GameObject.h"

class Hero : public GameObject {

	private:
		ofVec2f position;
		ofVec2f direction;
		ofVec2f destination;
		float speed;
		int life;
		int mana;
		bool isWalking;
		//bool isVisible = true;

	public:
		void init();
		void update(float secs);
		void draw(const ofVec2f& camera);
		void collidedWith(GameObject* other);
		bool isAlive() const;
		bool isShooting() const;
		const void walk();
		const void stop();
		const void setMana(int& manaCost);

		const ofVec2f getPosition() const;
		const ofVec2f setDestination(const ofVec2f& mousePos);
		const ofVec2f getDestination() const;
		const ofVec2f getDirection() const;

		ofRectangle bounds();
};