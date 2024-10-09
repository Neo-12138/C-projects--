#include "OnlineMusic.h"
#include "ui_OnlineMusic.h"
#include <QPainter>
#include <QMouseEvent>

OnlineMusic::OnlineMusic(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OnlineMusic)
{
    ui->setupUi(this);

    //禁止窗口尺寸改变
    this->setFixedSize(this->geometry().size());
    //去掉窗口标题
    this->setWindowFlag(Qt::FramelessWindowHint);

    //判断数据库是否存在
    if (QSqlDatabase::contains("sql_default_connection"))
    {
        //根据数据库默认连接名称得到连接
        db = QSqlDatabase::database("sql_default_connection");
    }
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("mp3listdatabase.db");
    }
    //打开数据库
    if (!db.open())//打开失败 弹出消息盒子
    {
        QMessageBox::critical(0,"Open Data Base Error", db.lastError().text());//上下文没有窗口填写0，有窗口衔接填this
        qDebug()<<"打开失败"<<db.lastError().text();
    }
    else
    {
        //定义query对象  得到打开数据库标识
        QSqlQuery query;

        QString sql = "create table if not exists searchlist(id int, songname text, singername text, album_id text, hash text);";//album_id 专辑

        if(!query.exec(sql))//执行失败
        {
            QMessageBox::critical(0,"create searchlist Error", query.lastError().text());
            qDebug()<<"创表1失败"<<query.lastError().text();
        }

        //歌曲历史记录
        sql = "create table if not exists historysongs(id INTEGER primary key autoincrement, songname text, singername text, album_id text, hash text);";
        if(!query.exec(sql))//执行失败
        {
            QMessageBox::critical(0,"create historysongs Error", query.lastError().text());
            qDebug()<<"创表2失败"<<query.lastError().text();
        }
        //查询历史数据表中的播放歌曲的数据
        sql = "select *from historysongs;";
        if(!query.exec(sql))//执行失败
        {
            QMessageBox::critical(0,"select historysongs Error", query.lastError().text());
            qDebug()<<"查数据失败"<<query.lastError().text();
        }

        while(query.next())//查找数据
        {
            QString songname, singername;
            QSqlRecord rec = query.record();
            int ablumkey = rec.indexOf("songname");
            int hashkey = rec.indexOf("singername");
            songname = query.value(ablumkey).toString();
            singername = query.value(hashkey).toString();

            //显示字符串
            QString strshow = songname + "--" + singername;

            QListWidgetItem *item = new QListWidgetItem(strshow);
            ui->listWidget_2->addItem(item);
        }
    }
    //播放操作
    player = new QMediaPlayer;
    playerlist = new QMediaPlaylist;



}

OnlineMusic::~OnlineMusic()
{
    delete ui;

}

//修改bmp
void OnlineMusic::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    //更换背景图片
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/image/image/bmp.png"));
}

//关闭程序
void OnlineMusic::on_pushButton_close_clicked()
{
    close();
}

//下载音乐
void OnlineMusic::downloadPlayer(QString album_id, QString hash)
{

}


void OnlineMusic::httpAccessFunc(QString)
{

}

void OnlineMusic::hashJsonAnalysis(QByteArray)
{

}

QString OnlineMusic::musicJsonAnalysis(QByteArray)
{

}

//鼠标拖动移动窗口
void OnlineMusic::mouseMoveEvent(QMouseEvent *event)
{
    if(mouthpress)
    {
        QPoint movePos = event->globalPos();
        move(movePos - move_point);
    }
}

void OnlineMusic::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        mouthpress = true;
    }
    //窗口移动距离
    move_point = event->globalPos()-pos();
}

void OnlineMusic::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        mouthpress = false;
    }
}
