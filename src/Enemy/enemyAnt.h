/*
 * enemy.h
 *
 *  Created on: Mar 24, 2013
 *      Author: ludkiller
 */

#ifndef ENEMY_ANT_H_
#define ENEMY_ANT_H_

class enemyAnt: public aiEntity

{
public:
	enemyAnt();
	enemyAnt(int _x, int _y, int _w, int _h);
	~enemyAnt();
	void destroyMe();

};

#endif /* ENEMY_ANT_H_ */