#include "Builder.hpp"

#include "Object.hpp"

Builder::~Builder()
{
    if (m_object) delete m_object;
}

Object& Builder::getObject()
{
    return *m_object;
}