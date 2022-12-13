#include "button_base.h"

void button_base::base_Button_Change()
{
setBase_Button_enabler(!base_Button_enabler());//toogling the base_button enable

}

void button_base::text_Button_Change()
{
    setText_Button_enabler(!text_Button_enabler());//toogling the text_Button_enable
}

void button_base::icon_Button_Change()
{
    setIocn_Button_enabler(!iocn_Button_enabler());//toogling the icon_Button_enable
}

void button_base::icon_Text_Button_Change()
{

    setText_Icon_Button_enabler(!text_Icon_Button_enabler());//toogling the text_icon_Button_enable
}

button_base::button_base(QObject *parent)
    : QObject{parent}
{

}

bool button_base::base_Button_enabler() const
{
    return m_base_Button_enabler;
}

void button_base::setBase_Button_enabler(bool newBase_Button_enabler)
{
    if (m_base_Button_enabler == newBase_Button_enabler)
        return;
    m_base_Button_enabler = newBase_Button_enabler;
    emit base_Button_enablerChanged();
}

bool button_base::text_Button_enabler() const
{
    return m_text_Button_enabler;
}

void button_base::setText_Button_enabler(bool newText_Button_enabler)
{
    if (m_text_Button_enabler == newText_Button_enabler)
        return;
    m_text_Button_enabler = newText_Button_enabler;
    emit text_Button_enablerChanged();
}

bool button_base::iocn_Button_enabler() const
{
    return m_iocn_Button_enabler;
}

void button_base::setIocn_Button_enabler(bool newIocn_Button_enabler)
{
    if (m_iocn_Button_enabler == newIocn_Button_enabler)
        return;
    m_iocn_Button_enabler = newIocn_Button_enabler;
    emit iocn_Button_enablerChanged();
}

bool button_base::text_Icon_Button_enabler() const
{
    return m_text_Icon_Button_enabler;
}

void button_base::setText_Icon_Button_enabler(bool newText_Icon_Button_enabler)
{
    if (m_text_Icon_Button_enabler == newText_Icon_Button_enabler)
        return;
    m_text_Icon_Button_enabler = newText_Icon_Button_enabler;
    emit text_Icon_Button_enablerChanged();
}
