#ifndef CONFIG_H
#define CONFIG_H
#include <QString>
#include <QRect>
class QSettings;
class Config
{
public:
    Config(QString path = "");
    ~Config();
    QRect getGeometry() const;
private:
    QSettings *_settings;
};

#endif // CONFIG_H
