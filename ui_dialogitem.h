/********************************************************************************
** Form generated from reading UI file 'dialogitem.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGITEM_H
#define UI_DIALOGITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogItem
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *price;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *color;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *category;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DialogItem)
    {
        if (DialogItem->objectName().isEmpty())
            DialogItem->setObjectName(QStringLiteral("DialogItem"));
        DialogItem->resize(326, 189);
        verticalLayoutWidget = new QWidget(DialogItem);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 291, 117));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        name = new QLineEdit(verticalLayoutWidget);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout->addWidget(name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);

        horizontalLayout_2->addWidget(label_4);

        price = new QDoubleSpinBox(verticalLayoutWidget);
        price->setObjectName(QStringLiteral("price"));

        horizontalLayout_2->addWidget(price);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        color = new QComboBox(verticalLayoutWidget);
        color->setObjectName(QStringLiteral("color"));

        horizontalLayout_6->addWidget(color);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        category = new QComboBox(verticalLayoutWidget);
        category->setObjectName(QStringLiteral("category"));

        horizontalLayout_4->addWidget(category);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayoutWidget_4 = new QWidget(DialogItem);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(150, 130, 158, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);


        retranslateUi(DialogItem);

        QMetaObject::connectSlotsByName(DialogItem);
    } // setupUi

    void retranslateUi(QDialog *DialogItem)
    {
        DialogItem->setWindowTitle(QApplication::translate("DialogItem", "Dialog", 0));
        label_2->setText(QApplication::translate("DialogItem", "\320\235\320\260\320\267\320\262\320\260:                                    ", 0));
        label_4->setText(QApplication::translate("DialogItem", "\320\246\321\226\320\275\320\260:            ", 0));
        label->setText(QApplication::translate("DialogItem", "\320\232\320\276\320\273\321\226\321\200:", 0));
        color->clear();
        color->insertItems(0, QStringList()
         << QApplication::translate("DialogItem", "\320\247\320\265\321\200\320\262\320\276\320\275\320\270\320\271", 0)
         << QApplication::translate("DialogItem", "\320\241\320\270\320\275\321\226\320\271", 0)
         << QApplication::translate("DialogItem", "\320\227\320\265\320\273\320\265\320\275\320\270\320\271", 0)
        );
        label_6->setText(QApplication::translate("DialogItem", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\321\226\321\217:", 0));
        category->clear();
        category->insertItems(0, QStringList()
         << QApplication::translate("DialogItem", "\320\235\320\260\320\277\320\276\321\227", 0)
         << QApplication::translate("DialogItem", "\320\207\320\266\320\260", 0)
         << QApplication::translate("DialogItem", "\320\227\320\276\320\276\321\202\320\276\320\262\320\260\321\200\320\270", 0)
         << QApplication::translate("DialogItem", "\320\206\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\270", 0)
         << QApplication::translate("DialogItem", "\320\241\320\277\320\276\321\200\321\202", 0)
         << QApplication::translate("DialogItem", "\320\232\320\275\320\270\320\263\320\270", 0)
         << QApplication::translate("DialogItem", "\320\206\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\270", 0)
         << QApplication::translate("DialogItem", "\320\241\320\274\320\260\321\200\321\202\321\204\320\276\320\275\320\270", 0)
         << QApplication::translate("DialogItem", "\320\241\320\260\320\275\321\202\320\265\321\205\320\275\321\226\320\272\320\260", 0)
         << QApplication::translate("DialogItem", "\320\242\321\203\321\200\320\270\320\267\320\274", 0)
         << QApplication::translate("DialogItem", "\320\237\320\276\320\264\320\260\321\200\321\203\320\275\320\272\320\270", 0)
         << QApplication::translate("DialogItem", "\320\224\320\270\321\202\321\217\321\207\321\226 \321\202\320\276\320\262\320\260\321\200\320\270", 0)
        );
        pushButton->setText(QApplication::translate("DialogItem", "\320\236\320\272", 0));
        pushButton_2->setText(QApplication::translate("DialogItem", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogItem: public Ui_DialogItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGITEM_H
