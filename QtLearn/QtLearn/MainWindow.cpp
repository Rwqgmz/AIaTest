#include "MainWindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    m_widget = new QWidget(ui.centralWidget);
    m_widget->setWindowIconText(QStringLiteral("����"));

    QPushButton* button = new QPushButton(m_widget);
    button->setText(QStringLiteral("��ť"));
}

MainWindow::~MainWindow()
{}
