#pragma once

#include <QtCore/QObject>
#include <QtWidgets/QLineEdit>

#include <nodes/NodeDataModel>

#include <iostream>

using QtNodes::PortType;
using QtNodes::PortIndex;
using QtNodes::NodeData;
using QtNodes::NodeDataType;
using QtNodes::NodeDataModel;

class DecimalData;
class IntegerData;


class DecimalToIntegerConverter
{

public:

  std::shared_ptr<NodeData>
  operator()(std::shared_ptr<NodeData> data);
};
