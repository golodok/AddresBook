#pragma once
#include "DataOfThePerson.h"
#include <QtWidgets/QMainWindow>
#include "MyModel.h"
#include <QPointer>
#include <QTableView>


class AddresBook : public QMainWindow
{
	Q_OBJECT

public:
	AddresBook(QWidget *parent = Q_NULLPTR);

private:
	void Init();
	QPointer<QAbstractItemModel> m_model;
};
