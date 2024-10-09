#include "enemyBullet.h"
#include <QPixmap>
#include "gamesetting.h"
#include <QGraphicsScene>
#include <QDebug>



using namespace GameSetting;


enemyBullet::enemyBullet(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/image/res/bullet_1.png"));
    setScale(enemybulletScale);//设置图片比例

    startTimer(enemybulletTimer);
}

void enemyBullet::timerEvent(QTimerEvent *event)
{
    setPos(x(),y()+enemybulletSpeed);
    if (y()+boundingRect().height()<0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
