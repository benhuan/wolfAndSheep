#include "mainwindow.h"
#include <QtGui>
#include <chessboard.h>
#include <game.h>
extern Game * game;

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
{
  initWindow ();
}

MainWindow::~MainWindow()
{
  
}

void MainWindow::initWindow (){
  //set background
  QPixmap pixmap(":/background/res/background/wood0.jpg");
  QPalette   palette;
  palette.setBrush(QPalette::Background,QBrush(pixmap));
  this->setPalette(palette);
  this->setMask(pixmap.mask());  //可以将图片中透明部分显示为透明的
  this->setAutoFillBackground(true); //在调用paintevent之前是否绘制背景图

  //menu
  QAction *newAction = new QAction(trUtf8 ("&New"),this);
  newAction->setIcon (QIcon(":/icon/res/emotes/face-smile.png"));
  newAction->setShortcut (QKeySequence::New);
  newAction->setToolTip ("Start New Game");

  toolbar = new QToolBar(this);
  toolbar->addAction(newAction);
  toolbar->setContextMenuPolicy (Qt::PreventContextMenu);//forbid toolbar's right click which can hide itself
  addToolBar (toolbar);

  game->newGame = 1;
  game->chessboard = new ChessBoard ();
  this->setCentralWidget (game->chessboard);
  this->resize (game->chessboard->size ().width (),game->chessboard->size ().height ()+50);

}

