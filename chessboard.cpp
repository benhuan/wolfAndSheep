#include <chessboard.h>
#include <QtGui>


ChessBoard::ChessBoard(QWidget *parent):
  QWidget(parent)
{

  initLayout();

}
ChessBoard::~ChessBoard(){

}
void ChessBoard::initLayout (){
  this->setMinimumSize (500,500);
  //  QGridLayout *mainLayout=new QGridLayout();//mainLayout just for backup
  //  QHBoxLayout *boardLayout=new QHBoxLayout();
  this->resize (600,500);
  boardW=this->size ().width ();
  boardH=this->size ().height ();
  lineWidth=5;
  oneStepW=boardW/5;
  oneStepH=boardH/5;
  origin=new QPointF(oneStepW/2+lineWidth,oneStepH/2+lineWidth);

  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
        {
          //      boardLayout->addWidget (chessman[i][j]=new ChessMan());
          chessman[i][j]=new ChessMan();
          point[i][j]=new QPoint(origin->x ()+oneStepW*i,origin->y ()+oneStepH*j);
          chessman[i][j]->setParent (this);
          chessman[i][j]->move2 (point[i][j]);
          if( player != sheep )
            { // wolf up,sheep down,player is sheep, I like to be sheep so sheep is the default option.
              tableCurrent[i][j]=tableWolf[i][j];
            }
        }
    }

  // mainLayout->addLayout (boardLayout,0,0,Qt::AlignLeft);
  // this->setLayout (mainLayout);

}

void ChessBoard::paintEvent (QPaintEvent *){
  /// \chapter 直接计算线段的头尾坐标，划线
  //  boardW=this->size ().width ()*8/9;//给下面右面预留1/10
  //  boardH=this->size ().height ()*8/9;
  //  int penWid=5;
  //  oneStepW=boardW/5-penWid;
  //  oneStepH=boardH/5-penWid;
  //  origin=new QPointF(oneStepW/2+penWid,oneStepH/2+penWid);

  //  QPainter painter(this);
  //  QPen *linePen= new QPen(Qt::black);
  //  linePen->setWidth (penWid);
  //  painter.setPen(*linePen);

  //  for(int i=0;i<5;i++)
  //    {
  //      //   painter.drawLine(origin->x (),origin->y ()+(oneStepH+penWid)*i,origin->x ()+ (oneStepW+penWid)*4, origin->y ()+(oneStepH+penWid)*i);
  //      //   painter.drawLine(origin->x ()+(oneStepW+penWid)*i,origin->y (), origin->x ()+(oneStepW+penWid)*i,origin->y ()+ (oneStepH+penWid)*4);//如果上面不预留则采取此处代码
  //      painter.drawLine(origin->x (),origin->y ()+(oneStepH+penWid)*i,boardW-origin->x (), origin->y ()+(oneStepH+penWid)*i);
  //      painter.drawLine(origin->x ()+(oneStepW+penWid)*i,origin->y (), origin->x ()+(oneStepW+penWid)*i,boardH-origin->y ()+penWid);
  //    }
  /// \endchapter

  if(newGame == 0)
    return;
  boardW=this->size ().width ();
  boardH=this->size ().height ();
  int penWid=5;
  oneStepW=boardW/5;
  oneStepH=boardH/5;
  origin=new QPointF(oneStepW/2+penWid,oneStepH/2+penWid);

  QPainter painter(this);
  QPen *linePen= new QPen(Qt::black);
  linePen->setWidth (penWid);
  painter.setPen(*linePen);

  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
        {
          point[i][j]->setX(origin->x ()+oneStepW*j);
          point[i][j]->setY(origin->y ()+oneStepH*i);
          chessman[i][j]->move2 (point[i][j]);

          switch(tableCurrent[i][j]){
            case wolf:
              chessman[i][j]->setText (trUtf8 ("Wolf"));//wolf here
              chessman[i][j]->resize (oneStepW/2,oneStepH/2);
              chessman[i][j]->setVisible (true);
              break;
            case sheep:
              chessman[i][j]->setText (trUtf8 ("Sheep"));//sheep here
              chessman[i][j]->resize (oneStepW*2/5,oneStepH*2/5);
              chessman[i][j]->setVisible (true);
              break;
            case seat:
              chessman[i][j]->setVisible (false);//nothing here
              break;
            default:
              break;
            }
          if(j>0)
            painter.drawLine(*point[i][j],*point[i][j-1]);
          if(i>0)
            painter.drawLine(*point[i][j],*point[i-1][j]);
        }
    }

}

void ChessBoard::mouseMoveEvent (QMouseEvent *event){


}
//void CenterWidget::mousePressEvent (QMouseEvent *event){


//}
