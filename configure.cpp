#include <QObject>
#include <global.h>
#include <configure.h>

Configure::Configure(QObject *parent)
  : QObject(parent)
{

  initData ();

}
Configure::~Configure (){

}
void Configure::initData (){
  player = sheep;
  newGame = 1 ;

  tableSheep[0][0]=wolf ;tableSheep[0][1]=seat ;tableSheep[0][2]=wolf ;tableSheep[0][3]=seat ;tableSheep[0][4]=wolf;
  tableSheep[1][0]=seat ;tableSheep[1][1]=seat ;tableSheep[1][2]=seat ;tableSheep[1][3]=seat ;tableSheep[1][4]=seat;
  tableSheep[2][0]=sheep;tableSheep[2][1]=sheep;tableSheep[2][2]=sheep;tableSheep[2][3]=sheep;tableSheep[2][4]=sheep;
  tableSheep[3][0]=sheep;tableSheep[3][1]=sheep;tableSheep[3][2]=sheep;tableSheep[3][3]=sheep;tableSheep[3][4]=sheep;
  tableSheep[4][0]=sheep;tableSheep[4][1]=sheep;tableSheep[4][2]=sheep;tableSheep[4][3]=sheep;tableSheep[4][4]=sheep;

  tableWolf[2][0]=sheep;tableWolf[2][1]=sheep;tableWolf[2][2]=sheep;tableWolf[2][3]=sheep;tableWolf[2][4]=sheep;
  tableWolf[3][0]=sheep;tableWolf[3][1]=sheep;tableWolf[3][2]=sheep;tableWolf[3][3]=sheep;tableWolf[3][4]=sheep;
  tableWolf[4][0]=sheep;tableWolf[4][1]=sheep;tableWolf[4][2]=sheep;tableWolf[4][3]=sheep;tableWolf[4][4]=sheep;
  tableWolf[0][0]=wolf ;tableWolf[0][1]=seat ;tableWolf[0][2]=wolf ;tableWolf[0][3]=seat ;tableWolf[0][4]=wolf;
  tableWolf[1][0]=seat ;tableWolf[1][1]=seat ;tableWolf[1][2]=seat ;tableWolf[1][3]=seat ;tableWolf[1][4]=seat;

  tableCurrent[0][0]=wolf ;tableCurrent[0][1]=seat ;tableCurrent[0][2]=wolf ;tableCurrent[0][3]=seat ;tableCurrent[0][4]=wolf;
  tableCurrent[1][0]=seat ;tableCurrent[1][1]=seat ;tableCurrent[1][2]=seat ;tableCurrent[1][3]=seat ;tableCurrent[1][4]=seat;
  tableCurrent[2][0]=sheep;tableCurrent[2][1]=sheep;tableCurrent[2][2]=sheep;tableCurrent[2][3]=sheep;tableCurrent[2][4]=sheep;
  tableCurrent[3][0]=sheep;tableCurrent[3][1]=sheep;tableCurrent[3][2]=sheep;tableCurrent[3][3]=sheep;tableCurrent[3][4]=sheep;
  tableCurrent[4][0]=sheep;tableCurrent[4][1]=sheep;tableCurrent[4][2]=sheep;tableCurrent[4][3]=sheep;tableCurrent[4][4]=sheep;



}
