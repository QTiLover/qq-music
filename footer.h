#ifndef FOOTER_H
#define FOOTER_H

#include <QWidget>
#include <QHBoxLayout>
#include <dimagebutton.h>
#include <QSlider>

DWIDGET_USE_NAMESPACE

class Footer : public QWidget
{
    Q_OBJECT

public:
    Footer(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *);

private:
    QHBoxLayout *layout;

    DImageButton *prevButton;
    DImageButton *playButton;
    DImageButton *pauseButton;
    DImageButton *nextButton;
    QSlider *slider;
};

#endif // FOOTER_H
