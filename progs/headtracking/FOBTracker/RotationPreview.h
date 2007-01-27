/* 
 * Copyright (c) 2006  Michael Duerig  
 * Bern University of Applied Sciences
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 */

#ifndef ROTATIONPREVIEW_H
#define ROTATIONPREVIEW_H

#include <QPaintEvent>
#include <QWidget>

#include "common.h"

class CRotationPreview:  public QWidget {
private:
  Matrix3 _rot;

public:
  void setRotation(const Matrix3 &rot);

protected:
  virtual void paintEvent(QPaintEvent *event);
};

#endif
