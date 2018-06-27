#include "MyModel.h"



MyModel::MyModel(QObject *parent)
	: QAbstractListModel(parent)
{
	readFile("DataAdress.csv");
}


QVariant MyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (role != Qt::DisplayRole)
		return QVariant();

	if (orientation == Qt::Horizontal)
		return QString("Column %1").arg(section);
	else
		return QString("Row %1").arg(section);
}

int MyModel::rowCount(const QModelIndex & parent) const
{
	if (parent.isValid())
		return 0;
	return m_qdatperList.size();
}

int MyModel::columnCount(const QModelIndex &) const
{
	return 4;
}

QVariant MyModel::data(const QModelIndex & index, int role) const
{
	if (!index.isValid())
		return QVariant();
	switch (role) {
	case Qt::DisplayRole: {
		DataOfThePerson dataTmp = m_qdatperList.at(index.row());
		if (index.column() == 0) {
			qDebug()<< dataTmp.getName() + " " + dataTmp.getSurname() + " " + dataTmp.getOtshestvo();
			return dataTmp.getName() + " " + dataTmp.getSurname() + " " + dataTmp.getOtshestvo();
		}
		else if (index.column() == 1)
		{
			qDebug() << dataTmp.getNumberOfPhone();
			return dataTmp.getNumberOfPhone();
		}
		else if (index.column() == 2) {
			dataTmp.getEmail();
			return dataTmp.getEmail();
		}
		else if (index.column() == 3) {
			return dataTmp.getAddress();
		}
	}
	default:
		return QVariant();
	}

	return QVariant();
}

void MyModel::readFile(const QString & snameFile)
{
		QFile file(snameFile);
		if (file.exists() && file.open(QIODevice::ReadOnly | QIODevice::Text)) {
			QTextStream stream(&file);
			while (!stream.atEnd()) {
				QString sTmp;
				sTmp = stream.readLine();
				if (sTmp.size() > 0) {
					DataOfThePerson data;
					data = parseStrToData(sTmp);
					m_qdatperList.push_back(data);
				}
				else break;
			}
		}
		else {
			qDebug() << "Ошибка при открытии файла";
		}
		file.close();
	}

DataOfThePerson MyModel::parseStrToData(const QString & str)
{
	DataOfThePerson  data;
	QStringList lToken = str.split(";");
	if (!lToken.size() != 6) {
		data.setName(lToken[0]);
		data.setSurname(lToken[1]);
		data.setOtshestvo(lToken[2]);
		data.setNumberOfPhone(lToken[3]);
		data.setEmail(lToken[4]);
		data.setAdress(lToken[5]);
	}
	else
		qDebug() << "Файл неправильно оформлен ";
	return data;
}



