/*
 * Copyright (C) 2023  ikozyris
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * cide is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QObject>
#include <QString>
/*
#include <QVector>
#include <QtCore>
#include <qt5/QtCore/QVector>
#include <qvector.h>
#include "qt5/QtCore/qvector.h"
*/

class Example: public QObject
{
    Q_OBJECT

public:
    Example();
    ~Example() = default;

    Q_INVOKABLE void save(int, QString);
    Q_INVOKABLE int compile(int, int);
    //Q_INVOKABLE static void run();
    Q_INVOKABLE void runAsync(QString);
    Q_INVOKABLE QString getOutput();
};

#endif
