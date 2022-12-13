#ifndef BUTTON_BASE_H
#define BUTTON_BASE_H

#include <QObject>

class button_base : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool base_Button_enabler READ base_Button_enabler WRITE setBase_Button_enabler NOTIFY base_Button_enablerChanged)
    Q_PROPERTY(bool text_Button_enabler READ text_Button_enabler WRITE setText_Button_enabler NOTIFY text_Button_enablerChanged)
    Q_PROPERTY(bool iocn_Button_enabler READ iocn_Button_enabler WRITE setIocn_Button_enabler NOTIFY iocn_Button_enablerChanged)
    Q_PROPERTY(bool text_Icon_Button_enabler READ text_Icon_Button_enabler WRITE setText_Icon_Button_enabler NOTIFY text_Icon_Button_enablerChanged)
public slots:
    void base_Button_Change();
    void text_Button_Change();
    void icon_Button_Change();
    void icon_Text_Button_Change();
public:
    explicit button_base(QObject *parent = nullptr);

    bool base_Button_enabler() const;
    void setBase_Button_enabler(bool newBase_Button_enabler);

    bool text_Button_enabler() const;
    void setText_Button_enabler(bool newText_Button_enabler);

    bool iocn_Button_enabler() const;
    void setIocn_Button_enabler(bool newIocn_Button_enabler);

    bool text_Icon_Button_enabler() const;
    void setText_Icon_Button_enabler(bool newText_Icon_Button_enabler);

signals:

    void base_Button_enablerChanged();
    void text_Button_enablerChanged();

    void iocn_Button_enablerChanged();

    void text_Icon_Button_enablerChanged();

private:
    bool m_base_Button_enabler=true;
    bool m_text_Button_enabler=true;
    bool m_iocn_Button_enabler=false;
    bool m_text_Icon_Button_enabler=false;
};

#endif // BUTTON_BASE_H
