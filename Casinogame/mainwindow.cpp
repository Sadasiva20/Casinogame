#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{

    delete ui;


}


void MainWindow::on_pushButton_clicked()
{
    close();
}


void MainWindow::on_pushButton_2_clicked()
{

    int bank = { 0 };

    int score = {0};

    int Wager = { 0 };

    int random_num = { 0 };

    int rand_1 = rand()%36;

    int rand_2 = 1+ rand() % 6;

   int  dice_roll =  rand_2 + rand_2;

    if (bank <= 0) {

        ui->label->setText( "Enter a valid amount.");

         }
       else  if (bank > 0) {


              bank = ui->lineEdit->text().toInt();

    }
    if(random_num > 1 || random_num < 36){
     if ( ui->comboBox->currentIndex()==1 ){

         int bank = ui->lineEdit_2->text().toInt();

         int amount = ui->lineEdit->text().toInt();

        ui->label_2->setText("Roulette");

        random_num = rand_1;

        if(random_num== rand_1){

            bank +=amount;

        }
        else {

            bank-=amount;
        }

        ui->label_2->setText(QString::number(random_num));

        ui ->label_3->setText("Number");

        ui ->label_4->setText("Bank");

        ui->lineEdit_3 ->setEnabled(true);

        if (Wager > 0) {

            Wager=(ui->lineEdit_2->text().toInt());

        }
        else if (Wager <0 || bank <0 ){
           ui->label_3->setText("Enter a valid amount.");
        }
    }
    }

    if (ui->comboBox->currentIndex()==2) {

        ui->label_2->setText("Craps.");

        random_num = dice_roll;

        ui->label_2->setText(QString::number(random_num));

        ui->pushButton_2->setText("Roll");

         if (dice_roll == 7 || dice_roll == 11) {

             score+=1;

             int bank = ui->lineEdit_2->text().toInt();

             int amount = ui->lineEdit->text().toInt();

             bank-=amount;


             ui->lineEdit_3->setText(QString::number(bank));

             ui->label_5->setText("Win");

             ui->label_6->setText(QString::number(score));
         }

         else if (dice_roll == 2 || dice_roll == 3 || dice_roll == 12) {

             score+=1;

             int bank = ui->lineEdit_2->text().toInt();

             int amount = ui->lineEdit->text().toInt();

             bank-=amount;

             ui->lineEdit_3->setText(QString::number(bank));

             ui->label_5->setText ("Loose");

             ui->label_6->setText(QString::number(score));

         }
         else if (dice_roll == 4 || dice_roll == 5 || dice_roll == 6 || dice_roll == 8 || dice_roll == 9|| dice_roll == 10) {

             score+=1;

             int bank = ui->lineEdit_2->text().toInt();

             int amount = ui->lineEdit->text().toInt();

             bank-=amount;

             int num_1 = rand_2 + rand_2;

             if(num_1==dice_roll){

                  ui->label_5->setText("Win");

             }

             ui->lineEdit_3->setText(QString::number(bank));

             ui->label_6->setText(QString::number(score));
         }
         if (Wager > 0) {

           Wager= ui->lineEdit_2->text().toInt();

         }

    }


}


void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{

}


void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{

}

