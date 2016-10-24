/********************************************************************************
** Form generated from reading UI file 'myreplace.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYREPLACE_H
#define UI_MYREPLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myreplace
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *openfilelistLabel;
    QLabel *filecontentLabel;
    QListWidget *ListWidget;
    QSpacerItem *horizontalSpacer;
    QPushButton *addBtn;
    QPushButton *cancelBtn;
    QPushButton *closeBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *replaceBtn;
    QGridLayout *gridLayout;
    QLabel *findLabel;
    QLineEdit *findLineEdit;
    QLabel *replaceLabel;
    QLineEdit *replaceLineEdit;
    QTextEdit *filecontentTextEdit;

    void setupUi(QWidget *myreplace)
    {
        if (myreplace->objectName().isEmpty())
            myreplace->setObjectName(QStringLiteral("myreplace"));
        myreplace->resize(539, 353);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(myreplace->sizePolicy().hasHeightForWidth());
        myreplace->setSizePolicy(sizePolicy);
        widget = new QWidget(myreplace);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(8, 12, 524, 335));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        openfilelistLabel = new QLabel(widget);
        openfilelistLabel->setObjectName(QStringLiteral("openfilelistLabel"));

        gridLayout_2->addWidget(openfilelistLabel, 0, 0, 1, 1);

        filecontentLabel = new QLabel(widget);
        filecontentLabel->setObjectName(QStringLiteral("filecontentLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filecontentLabel->sizePolicy().hasHeightForWidth());
        filecontentLabel->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(filecontentLabel, 0, 4, 1, 1);

        ListWidget = new QListWidget(widget);
        ListWidget->setObjectName(QStringLiteral("ListWidget"));
        sizePolicy1.setHeightForWidth(ListWidget->sizePolicy().hasHeightForWidth());
        ListWidget->setSizePolicy(sizePolicy1);
        ListWidget->setMaximumSize(QSize(1677721, 1677721));

        gridLayout_2->addWidget(ListWidget, 2, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 0, 1, 1);

        addBtn = new QPushButton(widget);
        addBtn->setObjectName(QStringLiteral("addBtn"));

        gridLayout_2->addWidget(addBtn, 3, 1, 1, 1);

        cancelBtn = new QPushButton(widget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        gridLayout_2->addWidget(cancelBtn, 3, 2, 1, 2);

        closeBtn = new QPushButton(widget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        gridLayout_2->addWidget(closeBtn, 5, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 5, 1, 1, 2);

        replaceBtn = new QPushButton(widget);
        replaceBtn->setObjectName(QStringLiteral("replaceBtn"));

        gridLayout_2->addWidget(replaceBtn, 5, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        findLabel = new QLabel(widget);
        findLabel->setObjectName(QStringLiteral("findLabel"));

        gridLayout->addWidget(findLabel, 0, 0, 1, 1);

        findLineEdit = new QLineEdit(widget);
        findLineEdit->setObjectName(QStringLiteral("findLineEdit"));
        findLineEdit->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(findLineEdit->sizePolicy().hasHeightForWidth());
        findLineEdit->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(findLineEdit, 0, 1, 1, 1);

        replaceLabel = new QLabel(widget);
        replaceLabel->setObjectName(QStringLiteral("replaceLabel"));

        gridLayout->addWidget(replaceLabel, 1, 0, 1, 1);

        replaceLineEdit = new QLineEdit(widget);
        replaceLineEdit->setObjectName(QStringLiteral("replaceLineEdit"));

        gridLayout->addWidget(replaceLineEdit, 1, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 2);

        gridLayout_2->addLayout(gridLayout, 4, 0, 1, 4);

        filecontentTextEdit = new QTextEdit(widget);
        filecontentTextEdit->setObjectName(QStringLiteral("filecontentTextEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(filecontentTextEdit->sizePolicy().hasHeightForWidth());
        filecontentTextEdit->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(filecontentTextEdit, 1, 4, 5, 1);


        retranslateUi(myreplace);

        ListWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(myreplace);
    } // setupUi

    void retranslateUi(QWidget *myreplace)
    {
        myreplace->setWindowTitle(QApplication::translate("myreplace", "myreplace", 0));
        openfilelistLabel->setText(QApplication::translate("myreplace", "\346\211\223\345\274\200\346\226\207\344\273\266\345\210\227\350\241\250", 0));
        filecontentLabel->setText(QApplication::translate("myreplace", "\346\226\207\344\273\266\345\206\205\345\256\271", 0));
        addBtn->setText(QApplication::translate("myreplace", "\346\267\273\345\212\240", 0));
        cancelBtn->setText(QApplication::translate("myreplace", "\345\210\240\351\231\244", 0));
        closeBtn->setText(QApplication::translate("myreplace", "\351\200\200\345\207\272", 0));
        replaceBtn->setText(QApplication::translate("myreplace", "\344\270\200\351\224\256\346\233\277\346\215\242", 0));
        findLabel->setText(QApplication::translate("myreplace", "\346\237\245\346\211\276", 0));
        replaceLabel->setText(QApplication::translate("myreplace", "\346\233\277\346\215\242\344\270\272", 0));
    } // retranslateUi

};

namespace Ui {
    class myreplace: public Ui_myreplace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYREPLACE_H
