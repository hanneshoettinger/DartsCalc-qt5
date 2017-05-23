#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::playerMode(int players)
{

    if (players == 0) // 2 Player Mode
    {
        ui->lcdNumber_1->setStyleSheet("background-color: rgb(147, 255, 156);"); // green
        ui->lcdNumber_2->setStyleSheet("background-color: white;");
        ui->lcdNumber_3->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_4->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_5->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_6->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_7->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_8->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
    }
    else if (players == 1) // 3 Player Mode
    {
        ui->lcdNumber_1->setStyleSheet("background-color: rgb(147, 255, 156);"); // green
        ui->lcdNumber_2->setStyleSheet("background-color: white;");
        ui->lcdNumber_3->setStyleSheet("background-color: white;");
        ui->lcdNumber_4->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_5->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_6->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_7->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_8->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
    }
    else if (players == 2) // 4 Player Mode
    {
        ui->lcdNumber_1->setStyleSheet("background-color: rgb(147, 255, 156);"); // green
        ui->lcdNumber_2->setStyleSheet("background-color: white;");
        ui->lcdNumber_3->setStyleSheet("background-color: white;");
        ui->lcdNumber_4->setStyleSheet("background-color: white;");
        ui->lcdNumber_5->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_6->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_7->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_8->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
    }
    else if (players == 3) // 5 Player Mode
    {
        ui->lcdNumber_1->setStyleSheet("background-color: rgb(147, 255, 156);"); // green
        ui->lcdNumber_2->setStyleSheet("background-color: white;");
        ui->lcdNumber_3->setStyleSheet("background-color: white;");
        ui->lcdNumber_4->setStyleSheet("background-color: white;");
        ui->lcdNumber_5->setStyleSheet("background-color: white;");
        ui->lcdNumber_6->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_7->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_8->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
    }
    else if (players == 4) // 6 Player Mode
    {
        ui->lcdNumber_1->setStyleSheet("background-color: rgb(147, 255, 156);"); // green
        ui->lcdNumber_2->setStyleSheet("background-color: white;");
        ui->lcdNumber_3->setStyleSheet("background-color: white;");
        ui->lcdNumber_4->setStyleSheet("background-color: white;");
        ui->lcdNumber_5->setStyleSheet("background-color: white;");
        ui->lcdNumber_6->setStyleSheet("background-color: white;");
        ui->lcdNumber_7->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
        ui->lcdNumber_8->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
    }
    else if (players == 5) // 7 Player Mode
    {
        ui->lcdNumber_1->setStyleSheet("background-color: rgb(147, 255, 156);"); // green
        ui->lcdNumber_2->setStyleSheet("background-color: white;");
        ui->lcdNumber_3->setStyleSheet("background-color: white;");
        ui->lcdNumber_4->setStyleSheet("background-color: white;");
        ui->lcdNumber_5->setStyleSheet("background-color: white;");
        ui->lcdNumber_6->setStyleSheet("background-color: white;");
        ui->lcdNumber_7->setStyleSheet("background-color: white;");
        ui->lcdNumber_8->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
    }
    else if (players == 6) // 8 Player Mode
    {
        ui->lcdNumber_1->setStyleSheet("background-color: rgb(147, 255, 156);"); // green
        ui->lcdNumber_2->setStyleSheet("background-color: white;");
        ui->lcdNumber_3->setStyleSheet("background-color: white;");
        ui->lcdNumber_4->setStyleSheet("background-color: white;");
        ui->lcdNumber_5->setStyleSheet("background-color: white;");
        ui->lcdNumber_6->setStyleSheet("background-color: white;");
        ui->lcdNumber_7->setStyleSheet("background-color: white;");
        ui->lcdNumber_8->setStyleSheet("background-color: white;");
    }
}
