#include "button_class.h"

Button_Class::Button_Class(QObject *parent)
    : QObject{parent}
{

}

bool Button_Class::base_Button_handeler() const
{
    return m_base_Button_handeler;
}

void Button_Class::setBase_Button_handeler(bool newBase_Button_handeler)
{
    if (m_base_Button_handeler == newBase_Button_handeler)
        return;
    m_base_Button_handeler = newBase_Button_handeler;
    emit base_Button_handelerChanged();
}

bool Button_Class::text_Button_handeler() const
{
    return m_text_Button_handeler;
}

void Button_Class::setText_Button_handeler(bool newText_Button_handeler)
{
    if (m_text_Button_handeler == newText_Button_handeler)
        return;
    m_text_Button_handeler = newText_Button_handeler;
    emit text_Button_handelerChanged();
}

bool Button_Class::image_Button_handler() const
{
    return m_image_Button_handler;
}

void Button_Class::setImage_Button_handler(bool newImage_Button_handler)
{
    if (m_image_Button_handler == newImage_Button_handler)
        return;
    m_image_Button_handler = newImage_Button_handler;
    emit image_Button_handlerChanged();
}

bool Button_Class::text_image_Buttom_handler() const
{
    return m_text_image_Buttom_handler;
}

void Button_Class::setText_image_Buttom_handler(bool newText_image_Buttom_handler)
{
    if (m_text_image_Buttom_handler == newText_image_Buttom_handler)
        return;
    m_text_image_Buttom_handler = newText_image_Buttom_handler;
    emit text_image_Buttom_handlerChanged();
}
