#include "config.h"
#include <QString>
#include <QSettings>
#include <QDebug>
Config::Config(QString path)
{
    if(path.isEmpty())
        path = "./config.ini";
    _settings = new QSettings(path,QSettings::IniFormat);

}
Config::~Config()
{
    if(_settings != NULL)
        delete _settings;
}
QRect Config::getGeometry() const
{
    if(_settings->value("Rect/x").isNull())
        _settings->setValue("Rect/x", QVariant(1150));
    if(_settings->value("Rect/y").isNull())
        _settings->setValue("Rect/y", QVariant(800));
    if(_settings->value("Rect/w").isNull())
        _settings->setValue("Rect/w", QVariant(300));
    if(_settings->value("Rect/h").isNull())
        _settings->setValue("Rect/h", QVariant(70));

    return QRect(_settings->value("Rect/x").toInt(),
                 _settings->value("Rect/y").toInt(),
                 _settings->value("Rect/w").toInt(),
                 _settings->value("Rect/h").toInt());
}
