#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtGoogleSpeech/qgooglespeech.h"


void MainWindow::updateScore(int score, int currentplayer)
{
    if (currentplayer == 1)
    {
        if (throww == 1)
        {
            player1_temp = player1_score; // save previous score
        }
        player1_score -=  score;  //for lcd Number -> so refresh with every dart

        threethrowscore += score; //for playing sound

        // check if player score greater 1 for double out or single out player score greater 0
        if (player1_score > 1 | (finish_option == 2 & player1_score > 0))
        {
            if (throww == 3) //if third throw playSound, if there is one available
            {
                playGoogleThreeScore(threethrowscore);
            }
            ui->lcdNumber_1->display(player1_score); //set lcd to score
        }
        else if (finish_option == 1)  // Double out
        {
            if ((player1_score == 0) & (ui->checkBox_x2->isChecked() == 1 | bull_pressed == 1))  // check if he finished
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 1 ");
                ui->lcdNumber_1->display(player1_score); //set lcd to score
                thanks_player->play();
            }
            else if ((player1_score <= 1) & (ui->checkBox_x2->isChecked() == 0 | bull_pressed == 0))
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player1_score = player1_temp;
                ui->lcdNumber_1->display(player1_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_1->setStyleSheet("background-color: red;");
            }
        }
        else if (finish_option == 2)  // Single out
        {
            if (player1_score == 0)  // check if he finished
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 1");
                ui->lcdNumber_1->display(player1_score); //set lcd to score
                thanks_player->play();
            }
            else if (player1_score <= 0)
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player1_score = player1_temp;
                ui->lcdNumber_1->display(player1_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_1->setStyleSheet("background-color: red;");
            }
        }
    }
    else if (currentplayer == 2)
    {
        if (throww == 1)
        {
            player2_temp = player2_score;   // save previous score
        }

        player2_score -=  score;  //for lcd Number -> so refresh with every dart

        threethrowscore += score; //for playing sound

        if (player2_score > 1)
        {
            if (throww == 3) //if third throw playSound, if there is one available
            {
                playGoogleThreeScore(threethrowscore);
            }
            ui->lcdNumber_2->display(player2_score); //set lcd to score
        }
        else if (finish_option == 1)
        {
            if ((player2_score == 0) & (ui->checkBox_x2->isChecked() == 1 | bull_pressed == 1))  // check if he finished
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 2 ");
                ui->lcdNumber_2->display(player2_score); //set lcd to score
                thanks_player->play();
            }
            else if ((player2_score <= 1) & (ui->checkBox_x2->isChecked() == 0 | bull_pressed == 0))
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player2_score = player2_temp;
                ui->lcdNumber_2->display(player2_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_2->setStyleSheet("background-color: red;");
            }
        }
        else if (finish_option == 2)
        {
            if (player2_score == 0)
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 2 ");
                ui->lcdNumber_2->display(player2_score); //set lcd to score
                thanks_player->play();
            }
            else if (player2_score <= 0)
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player2_score = player2_temp;
                ui->lcdNumber_2->display(player2_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_2->setStyleSheet("background-color: red;");
            }
        }


    }
    else if (currentplayer == 3)
    {
        if (throww == 1)
        {
            player3_temp = player3_score;   // save previous score
        }

        player3_score -=  score;  //for lcd Number -> so refresh with every dart

        threethrowscore += score; //for playing sound

        if (player3_score > 1)
        {
            if (throww == 3) //if third throw playSound, if there is one available
            {
                playGoogleThreeScore(threethrowscore);
            }
            ui->lcdNumber_3->display(player3_score); //set lcd to score
        }
        else if (finish_option == 1)
        {
            if ((player3_score == 0) & (ui->checkBox_x2->isChecked() == 1 | bull_pressed == 1))  // check if he finished
            {    
                // play final score
                playGoogleFinal(threethrowscore, " Player 3 ");
                ui->lcdNumber_3->display(player3_score); //set lcd to score
                thanks_player->play();
            }
            else if ((player3_score <= 1) & (ui->checkBox_x2->isChecked() == 0 | bull_pressed == 0))
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player3_score = player3_temp;
                ui->lcdNumber_3->display(player3_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_3->setStyleSheet("background-color: red;");
            }
        }
        else if (finish_option == 2)
        {
            if (player3_score == 0)
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 3 ");
                ui->lcdNumber_3->display(player3_score); //set lcd to score
                thanks_player->play();
            }
            else if (player3_score <= 0)
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player3_score = player3_temp;
                ui->lcdNumber_3->display(player3_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_3->setStyleSheet("background-color: red;");
            }
        }
    }
    else if (currentplayer == 4)
    {
        if (throww == 1)
        {
            player4_temp = player4_score;   // save previous score
        }

        player4_score -=  score;  //for lcd Number -> so refresh with every dart

        threethrowscore += score; //for playing sound

        if (player4_score > 1)
        {
            if (throww == 3) //if third throw playSound, if there is one available
            {
                playGoogleThreeScore(threethrowscore);
            }
            ui->lcdNumber_4->display(player3_score); //set lcd to score
        }
        else if (finish_option == 1)
        {
            if ((player4_score == 0) & (ui->checkBox_x2->isChecked() == 1 | bull_pressed == 1))  // check if he finished
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 4 ");
                ui->lcdNumber_4->display(player4_score); //set lcd to score
                thanks_player->play();
            }
            else if ((player4_score <= 1) & (ui->checkBox_x2->isChecked() == 0 | bull_pressed == 0))
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player4_score = player4_temp;
                ui->lcdNumber_4->display(player4_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_4->setStyleSheet("background-color: red;");
            }
        }
        else if (finish_option == 2)
        {
            if (player4_score == 0)
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 4 ");
                ui->lcdNumber_4->display(player4_score); //set lcd to score
                thanks_player->play();
            }
            else if (player4_score <= 0)
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player4_score = player4_temp;
                ui->lcdNumber_4->display(player4_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_4->setStyleSheet("background-color: red;");
            }
        }
    }
    else if (currentplayer == 5)
    {
        if (throww == 1)
        {
            player5_temp = player5_score;   // save previous score
        }

        player5_score -=  score;  //for lcd Number -> so refresh with every dart

        threethrowscore += score; //for playing sound

        if (player5_score > 1)
        {
            if (throww == 3) //if third throw playSound, if there is one available
            {
                playGoogleThreeScore(threethrowscore);
            }
            ui->lcdNumber_5->display(player5_score); //set lcd to score
        }
        else if (finish_option == 1)
        {
            if ((player5_score == 0) & (ui->checkBox_x2->isChecked() == 1 | bull_pressed == 1))  // check if he finished
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 5 ");
                ui->lcdNumber_5->display(player5_score); //set lcd to score
                thanks_player->play();
            }
            else if ((player5_score <= 1) & (ui->checkBox_x2->isChecked() == 0 | bull_pressed == 0))
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player5_score = player5_temp;
                ui->lcdNumber_5->display(player5_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_5->setStyleSheet("background-color: red;");
            }
        }
        else if (finish_option == 2)
        {
            if (player5_score == 0)
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 5 ");
                ui->lcdNumber_5->display(player5_score); //set lcd to score
                thanks_player->play();
            }
            else if (player5_score <= 0)
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player5_score = player5_temp;
                ui->lcdNumber_5->display(player5_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_5->setStyleSheet("background-color: red;");
            }
        }
    }
    else if (currentplayer == 6)
    {
        if (throww == 1)
        {
            player6_temp = player6_score;   // save previous score
        }

        player6_score -=  score;  //for lcd Number -> so refresh with every dart

        threethrowscore += score; //for playing sound

        if (player6_score > 1)
        {
            if (throww == 3) //if third throw playSound, if there is one available
            {
                playGoogleThreeScore(threethrowscore);
            }
            ui->lcdNumber_6->display(player6_score); //set lcd to score
        }
        else if (finish_option == 1)
        {
            if ((player6_score == 0) & (ui->checkBox_x2->isChecked() == 1 | bull_pressed == 1))  // check if he finished
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 6 ");
                ui->lcdNumber_6->display(player6_score); //set lcd to score
                thanks_player->play();
            }
            else if ((player6_score <= 1) & (ui->checkBox_x2->isChecked() == 0 | bull_pressed == 0))
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player6_score = player6_temp;
                ui->lcdNumber_6->display(player6_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_6->setStyleSheet("background-color: red;");
            }
        }
        else if (finish_option == 2)
        {
            if (player6_score == 0)
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 6 ");
                ui->lcdNumber_6->display(player6_score); //set lcd to score
                thanks_player->play();
            }
            else if (player6_score <= 0)
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player6_score = player6_temp;
                ui->lcdNumber_6->display(player6_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_6->setStyleSheet("background-color: red;");
            }
        }
    }
    else if (currentplayer == 7)
    {
        if (throww == 1)
        {
            player7_temp = player7_score;   // save previous score
        }

        player7_score -=  score;  //for lcd Number -> so refresh with every dart

        threethrowscore += score; //for playing sound

        if (player7_score > 1)
        {
            if (throww == 3) //if third throw playSound, if there is one available
            {
                playGoogleThreeScore(threethrowscore);
            }
            ui->lcdNumber_7->display(player7_score); //set lcd to score
        }
        else if (finish_option == 1)
        {
            if ((player7_score == 0) & (ui->checkBox_x2->isChecked() == 1 | bull_pressed == 1))  // check if he finished
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 7 ");
                ui->lcdNumber_7->display(player7_score); //set lcd to score
                thanks_player->play();
            }
            else if ((player7_score <= 1) & (ui->checkBox_x2->isChecked() == 0 | bull_pressed == 0))
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player7_score = player7_temp;
                ui->lcdNumber_7->display(player7_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_7->setStyleSheet("background-color: red;");
            }
        }
        else if (finish_option == 2)
        {
            if (player7_score == 0)
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 7 ");
                ui->lcdNumber_7->display(player7_score); //set lcd to score
                thanks_player->play();
            }
            else if (player7_score <= 0)
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player7_score = player7_temp;
                ui->lcdNumber_7->display(player7_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_7->setStyleSheet("background-color: red;");
            }
        }
    }
    else if (currentplayer == 8)
    {
        if (throww == 1)
        {
            player8_temp = player8_score;   // save previous score
        }

        player8_score -=  score;  //for lcd Number -> so refresh with every dart

        threethrowscore += score; //for playing sound

        if (player8_score > 1)
        {
            if (throww == 3) //if third throw playSound, if there is one available
            {
                playGoogleThreeScore(threethrowscore);
            }
            ui->lcdNumber_8->display(player8_score); //set lcd to score
        }
        else if (finish_option == 1)
        {
            if ((player8_score == 0) & (ui->checkBox_x2->isChecked() == 1 | bull_pressed == 1))  // check if he finished
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 8 ");
                ui->lcdNumber_8->display(player8_score); //set lcd to score
                thanks_player->play();
            }
            else if ((player8_score <= 1) & (ui->checkBox_x2->isChecked() == 0 | bull_pressed == 0))
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player8_score = player8_temp;
                ui->lcdNumber_8->display(player8_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_8->setStyleSheet("background-color: red;");
            }
        }
        else if (finish_option == 2)
        {
            if (player8_score == 0)
            {
                // play final score
                playGoogleFinal(threethrowscore, " Player 8 ");
                ui->lcdNumber_8->display(player8_score); //set lcd to score
                thanks_player->play();
            }
            else if (player8_score <= 0)
            {
                QGoogleSpeech::QGoogleSpeech("en", "No Score");
                player8_score = player8_temp;
                ui->lcdNumber_8->display(player8_temp); //set lcd to previous score
                ui->textBrowser_4->setText(QString::number(0)); // set total result to 0
                throww = 3;
                ui->lcdNumber_8->setStyleSheet("background-color: red;");
            }
        }
    }

    bull_pressed = 0; //reset bull_pressed to zero
}
