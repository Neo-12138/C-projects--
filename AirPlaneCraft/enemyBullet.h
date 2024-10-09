#ifndef ENEMYBULLET_H
#define ENEMYBULLET_H

//#include <QObject>

//class enemyBullet
//{
//    Q_OBJECT
//public:
//    enemyBullet();
//};

#include <QObject>
#include <QGraphicsPixmapItem>

class enemyBullet : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    enemyBullet(QGraphicsItem *parent = nullptr);

    // QObject interface
protected:
    void timerEvent(QTimerEvent *event);
};


#endif // ENEMYBULLET_H


