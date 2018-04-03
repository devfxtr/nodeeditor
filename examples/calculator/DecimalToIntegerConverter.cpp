#include "DecimalToIntegerConverter.hpp"

#include <QtGui/QDoubleValidator>

#include "DecimalData.hpp"
#include "IntegerData.hpp"


std::shared_ptr<NodeData>
DecimalToIntegerConverter::
operator()(std::shared_ptr<NodeData> data)
{
  auto numberData =
    std::dynamic_pointer_cast<DecimalData>(data);

  std::shared_ptr<NodeData> integer;

  if (numberData)
    integer = std::make_shared<IntegerData>(numberData->number());

  return integer;
}

