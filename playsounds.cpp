#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtGoogleSpeech/qgooglespeech.h"


// Play Player Requires
void MainWindow::playGoogle(int scorevalue, QString playername)
{
    if (voice == 1)  // Play only if voice is activated
    {
        if (scorevalue <= 170)
        {
            if ((scorevalue == 169) | (scorevalue == 168) | (scorevalue == 166) | (scorevalue == 165) || (scorevalue == 163) | (scorevalue == 162) | (scorevalue == 159))
            {
                //set Google Language
                QGoogleSpeech::QGoogleSpeech("en", "Boogey Number");
            }
            else
            {
                //set Google Language
                QGoogleSpeech::QGoogleSpeech("en", playername + " requires " + QString::number(scorevalue));
            }
        }
    }
}

// Play ThreeScore
void MainWindow::playGoogleThreeScore(int threethrowscore)
{
    if (voice == 1 | voice == 2)  // play if voice is activated or partly activated
    {
        if (threethrowscore == 100 | threethrowscore == 137 | threethrowscore == 140 | threethrowscore == 177 | threethrowscore == 180 | threethrowscore == 26 | threethrowscore == 41 | threethrowscore == 55 | threethrowscore == 60 | threethrowscore == 85)
        {
            playSound(threethrowscore);
        }
        else
        {
            //set Google Language
            QGoogleSpeech::QGoogleSpeech("en", QString::number(threethrowscore));
        }
    }
    // update final score textbrowser
    ui->textBrowser_4->setText(QString::number(threethrowscore));
}

// Play final score and winner
void MainWindow::playGoogleFinal(int threethrowscore, QString playername)
{
    if (voice == 1 | voice == 2)  // play if voice is activated or partly activated
    {
        if (threethrowscore == 100 | threethrowscore == 137 | threethrowscore == 140 | threethrowscore == 177 | threethrowscore == 180 | threethrowscore == 26 | threethrowscore == 41 | threethrowscore == 55 | threethrowscore == 60 | threethrowscore == 85)
        {
            //set Google Language
            playSound(threethrowscore);
            QGoogleSpeech::QGoogleSpeech("en", "Game shot and the leg, " + playername);
        }
        else
        {
            //set Google Language
            QGoogleSpeech::QGoogleSpeech("en", QString::number(threethrowscore) + " Game shot and the leg, " + playername);
        }
    }
    // update final score textbrowser
    ui->textBrowser_4->setText(QString::number(threethrowscore));
}

// Play Russ Voice
void MainWindow::playSound(int dart_value)
{
    if (voice == 1 | voice == 2)  // play if voice is activated or partly activated
    {
        if (dart_value == 100)
        {
            onehundred_player->play();
        }
        if (dart_value == 180)  // onehundredandeeeeiightyyy
        {
            oneeighty_player->play();
        }
        if (dart_value == 137)
        {
            onehundthsev_player->play();
        }
        if (dart_value == 140)
        {
            onehundfourty_player->play();
        }
        if (dart_value == 177)
        {
            onesevsev_player->play();
        }
        if (dart_value == 26)
        {
            twentysix_player->play();
        }
        if (dart_value == 41)
        {
            fourtyone_player->play();
        }
        if (dart_value == 55)
        {
            fiftyfive_player->play();
        }
        if (dart_value == 60)
        {
            sixty_player->play();
        }
        if (dart_value == 85)
        {
            eightyfive_player->play();
        }
    }
}
