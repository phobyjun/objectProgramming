#include "Ball.h"

monBall::monBall()
{
	Item::setName("몬스터볼");
	Item::setCost(50);
	Ball::setProb(30);
}

sBall::sBall()
{
	Item::setName("슈퍼볼");
	Item::setCost(80);
	Ball::setProb(50);
}

maBall::maBall()
{
	Item::setName("마스터볼");
	Item::setCost(120);
	Ball::setProb(90);
}
