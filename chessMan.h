#ifndef CHESSMAN_H
#define CHESSMAN_H
#include <QPushButton>

class ChessMan : public QPushButton

{
  Q_OBJECT
public:
  ChessMan(QPushButton *parent = 0);
  ~ChessMan();
  int moving;
  void move2(QPoint *point);
  void move2 (int x,int y);
  void dead();

private  slots:
    void chosen ();
protected:
  void mouseMoveEvent(QMouseEvent *event);
//  void mousePressEvent(QMouseEvent *event);
//  void mouseReleaseEvent(QMouseEvent *event);
//  bool eventFilter(QObject *obj, QEvent *event);
  // void paintEvent(QPaintEvent *event);
};

#endif // CHESSMAN_H
