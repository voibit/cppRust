#include "qmlrustitem.h"
#include <QDebug>
#include "rust_bridge/lib.h"

QmlRustItem::QmlRustItem()
{

}

void QmlRustItem::test()
{
    qDebug() << "test invoked" << rust_function();
    qDebug() << rust_string("hello").c_str();
}

void QmlRustItem::testArray(std::vector<double> array)
{
    qDebug() << array << "sum from rust:" << rust_array(array);

}
