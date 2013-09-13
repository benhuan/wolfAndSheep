#ifndef CENTERWIDGET_H
#define CENTERWIDGET_H
#include <QWidget>
#include <chessMan.h>
class QLabel;



class ChessBoard : public QWidget

{
  Q_OBJECT
public:
  ChessBoard(QWidget *parent = 0);
  ~ChessBoard();
  float boardW,boardH,oneStepW,oneStepH;//Width , height and step length of board,
  QPointF *origin;//origin of board
  ChessMan *chessman[5][5];
  QPoint *point[5][5];
  int lineWidth;
  void initLayout();

protected:
  void mouseMoveEvent(QMouseEvent *event);
  void paintEvent(QPaintEvent *event);
};



#endif // CENTERWIDGET_H
