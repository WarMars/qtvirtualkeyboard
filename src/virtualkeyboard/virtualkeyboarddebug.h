/******************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the Qt Virtual Keyboard module.
**
** $QT_BEGIN_LICENSE:COMM$
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** $QT_END_LICENSE$
**
******************************************************************************/

#ifndef VIRTUALKEYBOARDDEBUG_H
#define VIRTUALKEYBOARDDEBUG_H

#include <QDebug>

// See config.pri for SENSITIVE_DEBUG.

//#define QT_VIRTUALKEYBOARD_DEBUG
#ifdef QT_VIRTUALKEYBOARD_DEBUG
#  define VIRTUALKEYBOARD_DEBUG qDebug
#else
#  define VIRTUALKEYBOARD_DEBUG if (false) qDebug
#endif

#endif // VIRTUALKEYBOARDDEBUG_H
