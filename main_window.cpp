#include "main_window.h"
#include <dtitlebar.h>

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    mainWidget = new QWidget();
    layout = new QVBoxLayout();
    hlayout = new QHBoxLayout();
    navigation = new Navigation(this);
    interFace = new InterFace();
    footer = new Footer(this);
    tb = new TitleBar();

    if (titlebar()) {
        tb->searchEdit->setFixedWidth(width() / 2);
        titlebar()->setCustomWidget(tb, Qt::AlignHCenter, false);
        titlebar()->setSeparatorVisible(true);
    }

    hlayout->addWidget(navigation);
    hlayout->addWidget(interFace);

    layout->setMargin(0);
    layout->setSpacing(0);
    layout->addLayout(hlayout);
    layout->addWidget(footer);

    mainWidget->setLayout(layout);

    setCentralWidget(mainWidget);
}
