/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QApplication>
#include <QtGui/QGuiApplication>
#include <QtQml/QQmlApplicationEngine>
#include <QtGui/QFont>
#include <QtGui/QFontDatabase>
#include <QApplication>
#include <QDebug>
#include <QQmlComponent>
#include <QQuickView>
//#include <QtDeclarative/QDeclarativeView>

#include "pubnub_qt_gui_sample.h"
//#include "pubnubqml.h"

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

//    QQuickView view(QUrl::fromLocalFile("dashboard.qml"));
    qDebug() << "Created view";
//    QObject *item = view.rootObject();


//         view.show();
//         return app.exec();
//    QGuiApplication app(argc, argv);
    qDebug() << "Debug Message";

    QFontDatabase::addApplicationFont(":/fonts/DejaVuSans.ttf");
    app.setFont(QFont("DejaVu Sans"));

//    QQmlApplicationEngine engine(QUrl("qrc:/qml/dashboard.qml"));
//    QQmlComponent component(&engine, QUrl("qrc:/qml/dashboard.qml"));

//    QApplication app(argc, argv);
//    pubnub_qt_gui_sample sample;

//    sample.show();
//    PubNubQML sample;
//    sample.execute();
//    pubnub_qt_gui_sample sample;

    QQuickView view;
    view.setSource(QUrl::fromLocalFile("qrc:qml/dashboard.qml"));
//    view.show();
//    QObject *object = view.rootObject();

//    QQuickView *view = new QQuickView;
//    view->setSource(QUrl::fromLocalFile("dashboard.qml"));
//    view->show();
//    view.show();

//    QApplication app(argc, argv);

//    QDeclarativeView view;

//        ApplicationData data;
//        view.rootContext()->setContextProperty("applicationData", &data);

//    view.setSource(QUrl::fromLocalFile(":/qml/dashboard.qml"));
    view.show();

    return app.exec();

//    return app.exec();
}
