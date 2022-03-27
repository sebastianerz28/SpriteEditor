#include "model.h"
#include "canvas.h"

Model::Model(QObject *parent, Canvas *canvas)
    : QObject{parent}, canvas(canvas)
{

}
