#include <chessMan.h>
#include <game.h>
#include <QtGui>
#include <global.h>



ChessMan::ChessMan(QPushButton *parent):
  QPushButton(parent)
{
  moving = 0;//
  connect (this,SIGNAL(clicked ()),this,SLOT(chosen()));
}

ChessMan::~ChessMan(){

}

void ChessMan::move2 (QPoint *point)
{

  this->move(point->x ()-this->size ().width ()/2,point->y ()-this->size ().height ()/2);

}
void ChessMan::move2 (int x,int y)
{

  this->move(x-this->size ().width ()/2,y-this->size ().height ()/2);

}
void ChessMan::dead ()
{
  this->setVisible (false);
}

void ChessMan::chosen ()
{

  if (moving == 0)
    {
      moving=1;
      this->setText ("TT");
      setMouseTracking (true);
      chessboard->setMouseTracking (true);

    }
  else
    {
      setMouseTracking (false);
      moving = 0;
    }

  //  emit this->clicked (true);


}
void ChessMan::mouseMoveEvent (QMouseEvent *event){

  if(moving == 1)
    this->move2 (event->pos ().x (),event->pos ().y ());


}
