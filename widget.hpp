#ifndef WIDGET_HPP
#define WIDGET_HPP

#include "ui_widget.h"
#include <pmdsdk2.h>

class Widget : public QWidget, public Ui::Widget
{
    Q_OBJECT
    PMDHandle hnd;
    void setupSpinbox(QSpinBox *box,bool enabled,int value);
public:
    void updateConfig(PMDHandle hnd);
    explicit Widget(QWidget *parent = 0);
private slots:
    void on_integ_time_valueChanged(int value);
    void on_isAveraging_toggled(bool checked);
    void on_numAveraging_valueChanged(int arg1);
    void on_isThrottling_toggled(bool checked);
    void on_numThrott_valueChanged(int arg1);
    void on_isBilat_toggled(bool checked);
    void on_numBilat_valueChanged(int arg1);
	void on_bottomCap_valueChanged(int arg1);
	void on_topCap_valueChanged(int arg1);
};

#endif // WIDGET_HPP
