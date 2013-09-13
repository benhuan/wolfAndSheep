#ifndef CONFIGURE_H
#define CONFIGURE_H
#include <QObject>




class Configure : public QObject
{
  Q_OBJECT
public:
  Configure(QObject *parent = 0);
  ~Configure();
  void initData();

  int tableSheep[5][5],tableWolf[5][5],tableCurrent[5][5];
  int newGame;



};

#endif // CONFIGURE_H
