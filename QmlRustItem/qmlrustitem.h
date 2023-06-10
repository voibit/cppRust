#ifndef QMLRUSTITEM_H
#define QMLRUSTITEM_H

#include <QQuickItem>

class QmlRustItem : public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT
public:
    QmlRustItem();
    Q_INVOKABLE void test();
    Q_INVOKABLE void testArray(std::vector<double> array);

signals:

};

#endif // QMLRUSTITEM_H
