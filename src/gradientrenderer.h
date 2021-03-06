/*
 * Phlipple
 * Copyright (C) Remigiusz Dybka 2011 <remigiusz.dybka@gmail.com>
 *
 Phlipple is free software: you can redistribute it and/or modify it
 under the terms of the GNU General Public License as published by the
 Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Phlipple is distributed in the hope that it will be useful, but
 WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 See the GNU General Public License for more details.

 You should have received a copy of the GNU General Public License along
 with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GRADIENTRENDERER_H_
#define GRADIENTRENDERER_H_

#ifdef _WIN32
#include <windows.h>
#endif

#include "GL/glew.h"
#include <GL/gl.h>

struct _GradientRenderer
{
	GLuint vbos[2];
};

typedef struct _GradientRenderer GradientRenderer;

GradientRenderer *gradient_renderer_create(float *, float *);
void gradient_renderer_destroy(GradientRenderer *);
void gradient_renderer_render(GradientRenderer *);

#endif /* GRADIENTRENDERER_H_ */
