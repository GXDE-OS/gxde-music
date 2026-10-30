/*
 * Copyright (C) 2017 ~ 2018 Wuhan Deepin Technology Co., Ltd.
 *
 * Author:     Iceyer <me@iceyer.net>
 *
 * Maintainer: Iceyer <me@iceyer.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <QColor>
#include <QString>

#include <DThemeManager>

// 规则一：边框/阴影等颜色只能由前景色/背景色派生
// 规则二：同类元素尺寸统一，取值收敛到本文件
namespace UiToken {

inline bool isDarkTheme()
{
    return Dtk::Widget::DThemeManager::instance()->theme().contains("dark");
}

inline QColor foreground(qreal alpha = 1.0)
{
    return isDarkTheme() ? QColor(255, 255, 255, qRound(alpha * 255))
           : QColor(0, 0, 0, qRound(alpha * 255));
}

inline QColor background(qreal alpha = 1.0)
{
    return isDarkTheme() ? QColor(37, 38, 41, qRound(alpha * 255))
           : QColor(255, 255, 255, qRound(alpha * 255));
}

inline QString accentName()
{
    return QStringLiteral("#0082FA");
}

inline constexpr int Radius                   = 4;
inline constexpr int Spacing                  = 20;
inline constexpr int BodyFontSize             = 12;

inline constexpr int FooterHeight             = 60;
inline constexpr int FooterCoverSize          = 40;
inline constexpr int IconButtonSize           = 30;
inline constexpr int PlaylistPanelWidth       = 220;
inline constexpr int HintHeight               = 32;
inline constexpr int ActionBarHeight          = 40;

inline constexpr int SoundVolumeWidth         = 40;
inline constexpr int SoundVolumeHeight        = 106;
inline constexpr int SoundVolumeSliderHeight  = 90;

} // namespace UiToken
