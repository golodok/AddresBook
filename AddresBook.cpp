#include "AddresBook.h"


AddresBook::AddresBook(QWidget *parent)
	: QMainWindow(parent)
{
	Init();
}

void AddresBook::Init()
{
	m_model = new MyModel();
	QTableView *tableView = new QTableView();
	tableView->setModel(m_model);
	tableView->show();
}
