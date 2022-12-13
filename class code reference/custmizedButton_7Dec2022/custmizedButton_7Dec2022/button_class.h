#ifndef BUTTON_CLASS_H
#define BUTTON_CLASS_H

#include <QObject>

class Button_Class : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool base_Button_handeler READ base_Button_handeler WRITE setBase_Button_handeler NOTIFY base_Button_handelerChanged)
    Q_PROPERTY(bool text_Button_handeler READ text_Button_handeler WRITE setText_Button_handeler NOTIFY text_Button_handelerChanged)
    Q_PROPERTY(bool image_Button_handler READ image_Button_handler WRITE setImage_Button_handler NOTIFY image_Button_handlerChanged)
    Q_PROPERTY(bool text_image_Buttom_handler READ text_image_Button_handler WRITE setText_image_Buttom_handler NOTIFY text_image_Buttom_handlerChanged)
public:
    explicit Button_Class(QObject *parent = nullptr);

    bool base_Button_handeler() const;
    void setBase_Button_handeler(bool newBase_Button_handeler);

    bool text_Button_handeler() const;
    void setText_Button_handeler(bool newText_Button_handeler);

    bool image_Button_handler() const;
    void setImage_Button_handler(bool newImage_Button_handler);

    bool text_image_Buttom_handler() const;
    void setText_image_Buttom_handler(bool newText_image_Button_handler);

    bool text_image_Button_handler() const;

signals:

    void base_Button_handelerChanged();
    void text_Button_handelerChanged();

    void image_Button_handlerChanged();

    void text_image_Buttom_handlerChanged();

private:
    bool m_base_Button_handeler=true;
    bool m_text_Button_handeler=true;
    bool m_image_Button_handler=true;
    bool m_text_image_Buttom_handler=true;
};

#endif // BUTTON_CLASS_H
