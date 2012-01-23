/* qirc - Qt based IRC client
 * Copyright (C) 2012 Jacob Dawid (jacob.dawid@googlemail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef IRCCHANNELVIEW_H
#define IRCCHANNELVIEW_H

#include <QWidget>
#include <QScrollBar>
#include "IRCChannelProxyImpl.h"

namespace Ui {
    class IRCChannelView;
}

class IRCChannelView : public QWidget
{
    Q_OBJECT

public:
    explicit IRCChannelView(IRCChannelProxyInterface *ircChannelProxy, QWidget *parent = 0);
    ~IRCChannelView();

    void scrollToBottom();

    IRCChannelProxyInterface *ircChannelProxy();
private:
    Ui::IRCChannelView *ui;
    IRCChannelProxyInterface *m_ircChannelProxy;
};

#endif // IRCCHANNELVIEW_H
