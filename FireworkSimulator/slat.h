/*
    Copyright 2016 Chris Arrant
    
    This file is part of FireworksSimulator.

    FireworksSimulator is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    FireworksSimulator is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FireworksSimulator.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SLAT_H
#define SLAT_H

#include <QObject>

class Slat : public QObject
{
    Q_OBJECT
public:
    explicit Slat(QObject *parent = 0);

signals:

public slots:

private:
    //QPixmap image;
    //QImage  *imageObject;
    //QGraphicsScene *scene;
};

#endif // SLAT_H
