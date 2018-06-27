#pragma once
#include <QAbstractListModel>
#include "DataOfThePerson.h"
#include <QFile.h>
#include <QTextStream>
#include <qdebug.h>
#include <QList>

class MyModel : public QAbstractListModel
{
	Q_OBJECT
public:
	explicit MyModel(QObject * parent = nullptr);
	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

	int rowCount(const QModelIndex &parent = QModelIndex()) const override;

	int columnCount(const QModelIndex &/*parent*/) const;
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
	QList<DataOfThePerson> m_qdatperList;
	void readFile(const QString &);
	DataOfThePerson parseStrToData(const QString & str);
};

