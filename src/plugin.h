#ifndef PRESAGE_PLUGIN_H
#define PRESAGE_PLUGIN_H

#include <QQmlExtensionPlugin>

class PresagePredictorPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // PRESAGE_PLUGIN_H
