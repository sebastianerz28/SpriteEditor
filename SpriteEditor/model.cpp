#include "model.h"
#include "canvas.h"

Model::Model(QObject *parent)
    : QObject{parent}
{
    panel.fill(Qt::red);
}
