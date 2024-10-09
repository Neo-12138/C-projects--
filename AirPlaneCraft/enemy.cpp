#include "enemy.h"
#include <QPixmap>
#include "gamesetting.h"
#include <QRandomGenerator>
#include <QGraphicsScene>
#include "player.h"
#include "bullet.h"
#include "score.h"
#include "health.h"
#include "unistd.h"
#include <QTimer>



using namespace GameSetting;

enemy::enemy(QGraphicsItem *parent):QGraphicsPixmapItem (parent)
{
    setPixmap(QPixmap(":/image/res/enemy.png"));

    setScale(enemyScale);//设置图片比例

    int max = sceneWidth-boundingRect().width()*playerScale;
    int randomNuber = QRandomGenerator::global()->bounded(1,max);//随机值
    setPos(randomNuber, 0);//设置敌机坐标

    startTimer(enemyTimer);

    connect(bullet_timer,&QTimer::timeout,this,&enemy::timer);
}

void enemy::timer()
{

}

void enemy::timerEvent(QTimerEvent *)
{

    //碰撞检测
    QList<QGraphicsItem *> item_list = collidingItems();
    for(auto item: item_list)
    {
        //敌机撞到玩家
        if (typeid (*item) == typeid (player))
        {
            //健康值减1
            health::getinstance().reduce();

            scene()->removeItem(this);
            delete this;
            return;
        }
        //敌机子弹撞到玩家
        if (typeid (*item) == typeid (enemyBullet))
        {
            //健康值减1
            health::getinstance().reduce();

            scene()->removeItem(this);
            delete this;
            return;
        }

        //敌机撞到玩家的子弹
        if (typeid (*item) == typeid (bullet))
        {
            //需要加分
            score::getinstance().increase();

            scene()->removeItem(item);
            scene()->removeItem(this);

            delete item;
            delete this;
            return;
        }
    }

    setPos(x(), y()+enemySpeed);
    if(y()>sceneHight)
    {
        scene()->removeItem(this);
        delete this;
        return;
    }
}




//qDebug()<<"生成了敌机子弹";
//enemyBullet *enemy_bullet = new enemyBullet;

//int tmp = x() + boundingRect().height() * enemyScale/4;//往右偏移半个飞机
////tmp -= player_bullet->boundingRect().height() * bulletScale/2;//往左偏移半个子弹
//enemy_bullet->setPos(tmp, y());
