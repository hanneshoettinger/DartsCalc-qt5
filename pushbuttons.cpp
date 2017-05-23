#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushB_20_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(40);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(60);
        }
        else
        {
            dartscore = QString::number(20);
        }

        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_1_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(2);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(3);
        }
        else
        {
            dartscore = QString::number(1);
        }

        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_2_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(4);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(6);
        }
        else
        {
            dartscore = QString::number(2);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_3_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(6);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(9);
        }
        else
        {
            dartscore = QString::number(3);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_4_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(8);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(12);
        }
        else
        {
            dartscore = QString::number(4);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_5_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(10);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(15);
        }
        else
        {
            dartscore = QString::number(5);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_6_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(12);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(18);
        }
        else
        {
            dartscore = QString::number(6);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_7_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(14);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(21);
        }
        else
        {
            dartscore = QString::number(7);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_8_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(16);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(24);
        }
        else
        {
            dartscore = QString::number(8);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_9_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(18);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(27);
        }
        else
        {
            dartscore = QString::number(9);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_10_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(20);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(30);
        }
        else
        {
            dartscore = QString::number(10);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_11_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(22);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(33);
        }
        else
        {
            dartscore = QString::number(11);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_12_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(24);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(36);
        }
        else
        {
            dartscore = QString::number(12);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_13_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(26);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(39);
        }
        else
        {
            dartscore = QString::number(13);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_14_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(28);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(42);
        }
        else
        {
            dartscore = QString::number(14);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_15_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(30);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(45);
        }
        else
        {
            dartscore = QString::number(15);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_16_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(32);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(48);
        }
        else
        {
            dartscore = QString::number(16);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_17_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(34);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(51);
        }
        else
        {
            dartscore = QString::number(17);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_18_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(36);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(54);
        }
        else
        {
            dartscore = QString::number(18);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_19_clicked(bool checked)
{
    if (throww < 3)
    {
        if (ui->checkBox_x2->isChecked())
        {
            dartscore = QString::number(38);
        }
        else if (ui->checkBox_x3->isChecked())
        {
            dartscore = QString::number(57);
        }
        else
        {
            dartscore = QString::number(19);
        }
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_25_clicked(bool checked)
{
    if (throww < 3)
    {
        dartscore = QString::number(25);
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}
void MainWindow::on_pushB_BULL_clicked(bool checked)
{
    if (throww < 3)
    {
        dartscore = QString::number(50);
        throww += 1; // increment throw

        if (throww == 1)
        {
            ui->textBrowser_1->setText(dartscore);
        }
        else if (throww == 2)
        {
            ui->textBrowser_2->setText(dartscore);
        }
        else if (throww == 3)
        {
            ui->textBrowser_3->setText(dartscore);
        }

        bull_pressed = 1;  // for double finish
        updateScore(dartscore.toInt(),current_player); //set lcd to dartscore
        //set checkboxes back to 0
        ui->checkBox_x2->setChecked(0);
        ui->checkBox_x3->setChecked(0);
    }
}

