#ifndef ONLINEMUSIC_H
#define ONLINEMUSIC_H

#include <QMainWindow>

#include <QNetworkRequest>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QEventLoop>
#include <QJsonArray>
#include <QJsonObject>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include <QSqlDatabase>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QTime>
#include <QDebug>
#include <math.h>
#include <QSqlRecord>
#include <QListWidget>




namespace Ui {
class OnlineMusic;
}

class OnlineMusic : public QMainWindow
{
    Q_OBJECT

public:
    explicit OnlineMusic(QWidget *parent = nullptr);
    ~OnlineMusic();


    //处理播放器背景
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_close_clicked();

private:
    Ui::OnlineMusic *ui;




protected:
    //音乐歌曲的下载和播放
    void downloadPlayer(QString album_id,QString hash);

    //访问http网页
    void httpAccessFunc(QString);

    //音乐的hash 和ablum_id的解析  使用json
    void hashJsonAnalysis(QByteArray);

    //搜索音乐数据信息的Json解析，解析出真正的音乐文件和歌词
    QString musicJsonAnalysis(QByteArray);

protected:
    //鼠标按住拖动窗口
    void mouseMoveEvent(QMouseEvent *event);//移动事件
    void mousePressEvent(QMouseEvent *event);//按压事件
    void mouseReleaseEvent(QMouseEvent *event);//释放事件

private:
    //定义鼠标坐标
    QPoint mouth_point;
    QPoint move_point;
    bool mouthpress;

    QSqlDatabase db;//数据库句柄
    QMediaPlayer *player;
    QMediaPlaylist *playerlist;
};

#endif // ONLINEMUSIC_H
