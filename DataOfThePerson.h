#pragma once
#include <QString>
class DataOfThePerson
{
public:
	void setName(const QString sName) {
		this->sName = sName;
	}
	QString getName() { return sName;}

	void setSurname(const QString sSurname) {
		this->sSurname = sSurname;
	}
	QString getSurname() { return sSurname; }
	
	void setOtshestvo(const QString sOtshetvo) {
		this->sOtshetvo = sOtshetvo;
	}
	QString getOtshestvo() { return sOtshetvo; }

	void setNumberOfPhone(const QString sNumberOfPhone) {
		this->sNumberOfPhone =sNumberOfPhone;
	}
	QString getNumberOfPhone() { return sNumberOfPhone; }

	void setEmail(QString sEmail) {
		this->sEmail = sEmail;
	}
	QString getEmail() { return sEmail; }

	void setAdress(QString sAddress) {
		this->sAddress = sAddress;
	}
	QString getAddress() { return sAddress; }

	DataOfThePerson() :sName(""), sSurname(""), sOtshetvo(""), sNumberOfPhone(""), sEmail(""),sAddress("") {};

private:

	QString sName;
	QString sSurname;
	QString sOtshetvo;
	QString sNumberOfPhone;
	QString sEmail;
	QString sAddress;

};

