/**************************************************************************
* Otter Browser: Web browser controlled by the user, not vice-versa.
* Copyright (C) 2013 - 2014 Michal Dutkiewicz aka Emdek <michal@emdek.pl>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
**************************************************************************/

#ifndef OTTER_CONSOLEWIDGET_H
#define OTTER_CONSOLEWIDGET_H

#include <QtGui/QStandardItemModel>
#include <QtWidgets/QWidget>

#include "../core/Console.h"

namespace Otter
{

namespace Ui
{
	class ConsoleWidget;
}

class ConsoleWidget : public QWidget
{
	Q_OBJECT

public:
	explicit ConsoleWidget(QWidget *parent = NULL);
	~ConsoleWidget();

protected:
	void showEvent(QShowEvent *event);

protected slots:
	void addMessage(ConsoleMessage *message);
	void clear();
	void filterCategories();
	void filterMessages(const QString &filter);

private:
	QStandardItemModel *m_model;
	Ui::ConsoleWidget *m_ui;
};

}

#endif
