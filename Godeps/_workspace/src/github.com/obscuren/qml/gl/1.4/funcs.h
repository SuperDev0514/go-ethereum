
// ** file automatically generated by glgen -- do not edit manually **

#ifndef __cplusplus
#include <inttypes.h>
#include <stddef.h>
typedef unsigned int	GLenum;
typedef unsigned char	GLboolean;
typedef unsigned int	GLbitfield;
typedef void		GLvoid;
typedef char            GLchar;
typedef signed char	GLbyte;		/* 1-byte signed */
typedef short		GLshort;	/* 2-byte signed */
typedef int		GLint;		/* 4-byte signed */
typedef unsigned char	GLubyte;	/* 1-byte unsigned */
typedef unsigned short	GLushort;	/* 2-byte unsigned */
typedef unsigned int	GLuint;		/* 4-byte unsigned */
typedef int		GLsizei;	/* 4-byte signed */
typedef float		GLfloat;	/* single precision float */
typedef float		GLclampf;	/* single precision float in [0,1] */
typedef double		GLdouble;	/* double precision float */
typedef double		GLclampd;	/* double precision float in [0,1] */
typedef int64_t         GLint64;
typedef uint64_t        GLuint64;
typedef ptrdiff_t       GLintptr;
typedef ptrdiff_t       GLsizeiptr;
typedef ptrdiff_t       GLintptrARB;
typedef ptrdiff_t       GLsizeiptrARB;
typedef struct __GLsync *GLsync;
#endif

#ifdef __cplusplus
extern "C" {
#endif

void *gl1_4_funcs();

void gl1_4_glViewport(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_4_glDepthRange(void *_glfuncs, GLdouble nearVal, GLdouble farVal);
GLboolean gl1_4_glIsEnabled(void *_glfuncs, GLenum cap);
void gl1_4_glGetTexLevelParameteriv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLint* params);
void gl1_4_glGetTexLevelParameterfv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLfloat* params);
void gl1_4_glGetTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_4_glGetTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_4_glGetTexImage(void *_glfuncs, GLenum target, GLint level, GLenum format, GLenum gltype, GLvoid* pixels);
void gl1_4_glGetIntegerv(void *_glfuncs, GLenum pname, GLint* params);
void gl1_4_glGetFloatv(void *_glfuncs, GLenum pname, GLfloat* params);
GLenum gl1_4_glGetError(void *_glfuncs);
void gl1_4_glGetDoublev(void *_glfuncs, GLenum pname, GLdouble* params);
void gl1_4_glGetBooleanv(void *_glfuncs, GLenum pname, GLboolean* params);
void gl1_4_glReadPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum gltype, GLvoid* pixels);
void gl1_4_glReadBuffer(void *_glfuncs, GLenum mode);
void gl1_4_glPixelStorei(void *_glfuncs, GLenum pname, GLint param);
void gl1_4_glPixelStoref(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_4_glDepthFunc(void *_glfuncs, GLenum glfunc);
void gl1_4_glStencilOp(void *_glfuncs, GLenum fail, GLenum zfail, GLenum zpass);
void gl1_4_glStencilFunc(void *_glfuncs, GLenum glfunc, GLint ref, GLuint mask);
void gl1_4_glLogicOp(void *_glfuncs, GLenum opcode);
void gl1_4_glBlendFunc(void *_glfuncs, GLenum sfactor, GLenum dfactor);
void gl1_4_glFlush(void *_glfuncs);
void gl1_4_glFinish(void *_glfuncs);
void gl1_4_glEnable(void *_glfuncs, GLenum cap);
void gl1_4_glDisable(void *_glfuncs, GLenum cap);
void gl1_4_glDepthMask(void *_glfuncs, GLboolean flag);
void gl1_4_glColorMask(void *_glfuncs, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void gl1_4_glStencilMask(void *_glfuncs, GLuint mask);
void gl1_4_glClearDepth(void *_glfuncs, GLdouble depth);
void gl1_4_glClearStencil(void *_glfuncs, GLint s);
void gl1_4_glClearColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_4_glClear(void *_glfuncs, GLbitfield mask);
void gl1_4_glDrawBuffer(void *_glfuncs, GLenum mode);
void gl1_4_glTexImage2D(void *_glfuncs, GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_4_glTexImage1D(void *_glfuncs, GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_4_glTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_4_glTexParameteri(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gl1_4_glTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_4_glTexParameterf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gl1_4_glScissor(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_4_glPolygonMode(void *_glfuncs, GLenum face, GLenum mode);
void gl1_4_glPointSize(void *_glfuncs, GLfloat size);
void gl1_4_glLineWidth(void *_glfuncs, GLfloat width);
void gl1_4_glHint(void *_glfuncs, GLenum target, GLenum mode);
void gl1_4_glFrontFace(void *_glfuncs, GLenum mode);
void gl1_4_glCullFace(void *_glfuncs, GLenum mode);
void gl1_4_glIndexubv(void *_glfuncs, const GLubyte* c);
void gl1_4_glIndexub(void *_glfuncs, GLubyte c);
GLboolean gl1_4_glIsTexture(void *_glfuncs, GLuint texture);
void gl1_4_glGenTextures(void *_glfuncs, GLsizei n, GLuint* textures);
void gl1_4_glDeleteTextures(void *_glfuncs, GLsizei n, const GLuint* textures);
void gl1_4_glBindTexture(void *_glfuncs, GLenum target, GLuint texture);
void gl1_4_glTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_4_glTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_4_glCopyTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_4_glCopyTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void gl1_4_glCopyTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void gl1_4_glCopyTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
void gl1_4_glPolygonOffset(void *_glfuncs, GLfloat factor, GLfloat units);
void gl1_4_glDrawElements(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl1_4_glDrawArrays(void *_glfuncs, GLenum mode, GLint first, GLsizei count);
void gl1_4_glCopyTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_4_glTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_4_glTexImage3D(void *_glfuncs, GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_4_glDrawRangeElements(void *_glfuncs, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl1_4_glBlendEquation(void *_glfuncs, GLenum mode);
void gl1_4_glBlendColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_4_glGetCompressedTexImage(void *_glfuncs, GLenum target, GLint level, GLvoid* img);
void gl1_4_glCompressedTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl1_4_glCompressedTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl1_4_glCompressedTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl1_4_glCompressedTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data);
void gl1_4_glCompressedTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
void gl1_4_glCompressedTexImage3D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
void gl1_4_glSampleCoverage(void *_glfuncs, GLfloat value, GLboolean invert);
void gl1_4_glActiveTexture(void *_glfuncs, GLenum texture);
void gl1_4_glPointParameteriv(void *_glfuncs, GLenum pname, const GLint* params);
void gl1_4_glPointParameteri(void *_glfuncs, GLenum pname, GLint param);
void gl1_4_glPointParameterfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl1_4_glPointParameterf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_4_glMultiDrawArrays(void *_glfuncs, GLenum mode, const GLint* first, const GLsizei* count, GLsizei drawcount);
void gl1_4_glBlendFuncSeparate(void *_glfuncs, GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
void gl1_4_glTranslatef(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_4_glTranslated(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_4_glScalef(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_4_glScaled(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_4_glRotatef(void *_glfuncs, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void gl1_4_glRotated(void *_glfuncs, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
void gl1_4_glPushMatrix(void *_glfuncs);
void gl1_4_glPopMatrix(void *_glfuncs);
void gl1_4_glOrtho(void *_glfuncs, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
void gl1_4_glMultMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_4_glMultMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_4_glMatrixMode(void *_glfuncs, GLenum mode);
void gl1_4_glLoadMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_4_glLoadMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_4_glLoadIdentity(void *_glfuncs);
void gl1_4_glFrustum(void *_glfuncs, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GLboolean gl1_4_glIsList(void *_glfuncs, GLuint list);
void gl1_4_glGetTexGeniv(void *_glfuncs, GLenum coord, GLenum pname, GLint* params);
void gl1_4_glGetTexGenfv(void *_glfuncs, GLenum coord, GLenum pname, GLfloat* params);
void gl1_4_glGetTexGendv(void *_glfuncs, GLenum coord, GLenum pname, GLdouble* params);
void gl1_4_glGetTexEnviv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_4_glGetTexEnvfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_4_glGetPolygonStipple(void *_glfuncs, GLubyte* mask);
void gl1_4_glGetPixelMapusv(void *_glfuncs, GLenum glmap, GLushort* values);
void gl1_4_glGetPixelMapuiv(void *_glfuncs, GLenum glmap, GLuint* values);
void gl1_4_glGetPixelMapfv(void *_glfuncs, GLenum glmap, GLfloat* values);
void gl1_4_glGetMaterialiv(void *_glfuncs, GLenum face, GLenum pname, GLint* params);
void gl1_4_glGetMaterialfv(void *_glfuncs, GLenum face, GLenum pname, GLfloat* params);
void gl1_4_glGetMapiv(void *_glfuncs, GLenum target, GLenum query, GLint* v);
void gl1_4_glGetMapfv(void *_glfuncs, GLenum target, GLenum query, GLfloat* v);
void gl1_4_glGetMapdv(void *_glfuncs, GLenum target, GLenum query, GLdouble* v);
void gl1_4_glGetLightiv(void *_glfuncs, GLenum light, GLenum pname, GLint* params);
void gl1_4_glGetLightfv(void *_glfuncs, GLenum light, GLenum pname, GLfloat* params);
void gl1_4_glGetClipPlane(void *_glfuncs, GLenum plane, GLdouble* equation);
void gl1_4_glDrawPixels(void *_glfuncs, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_4_glCopyPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum gltype);
void gl1_4_glPixelMapusv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLushort* values);
void gl1_4_glPixelMapuiv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLuint* values);
void gl1_4_glPixelMapfv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLfloat* values);
void gl1_4_glPixelTransferi(void *_glfuncs, GLenum pname, GLint param);
void gl1_4_glPixelTransferf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_4_glPixelZoom(void *_glfuncs, GLfloat xfactor, GLfloat yfactor);
void gl1_4_glAlphaFunc(void *_glfuncs, GLenum glfunc, GLfloat ref);
void gl1_4_glEvalPoint2(void *_glfuncs, GLint i, GLint j);
void gl1_4_glEvalMesh2(void *_glfuncs, GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
void gl1_4_glEvalPoint1(void *_glfuncs, GLint i);
void gl1_4_glEvalMesh1(void *_glfuncs, GLenum mode, GLint i1, GLint i2);
void gl1_4_glEvalCoord2fv(void *_glfuncs, const GLfloat* u);
void gl1_4_glEvalCoord2f(void *_glfuncs, GLfloat u, GLfloat v);
void gl1_4_glEvalCoord2dv(void *_glfuncs, const GLdouble* u);
void gl1_4_glEvalCoord2d(void *_glfuncs, GLdouble u, GLdouble v);
void gl1_4_glEvalCoord1fv(void *_glfuncs, const GLfloat* u);
void gl1_4_glEvalCoord1f(void *_glfuncs, GLfloat u);
void gl1_4_glEvalCoord1dv(void *_glfuncs, const GLdouble* u);
void gl1_4_glEvalCoord1d(void *_glfuncs, GLdouble u);
void gl1_4_glMapGrid2f(void *_glfuncs, GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
void gl1_4_glMapGrid2d(void *_glfuncs, GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
void gl1_4_glMapGrid1f(void *_glfuncs, GLint un, GLfloat u1, GLfloat u2);
void gl1_4_glMapGrid1d(void *_glfuncs, GLint un, GLdouble u1, GLdouble u2);
void gl1_4_glMap2f(void *_glfuncs, GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points);
void gl1_4_glMap2d(void *_glfuncs, GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points);
void gl1_4_glMap1f(void *_glfuncs, GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points);
void gl1_4_glMap1d(void *_glfuncs, GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points);
void gl1_4_glPushAttrib(void *_glfuncs, GLbitfield mask);
void gl1_4_glPopAttrib(void *_glfuncs);
void gl1_4_glAccum(void *_glfuncs, GLenum op, GLfloat value);
void gl1_4_glIndexMask(void *_glfuncs, GLuint mask);
void gl1_4_glClearIndex(void *_glfuncs, GLfloat c);
void gl1_4_glClearAccum(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_4_glPushName(void *_glfuncs, GLuint name);
void gl1_4_glPopName(void *_glfuncs);
void gl1_4_glPassThrough(void *_glfuncs, GLfloat token);
void gl1_4_glLoadName(void *_glfuncs, GLuint name);
void gl1_4_glInitNames(void *_glfuncs);
GLint gl1_4_glRenderMode(void *_glfuncs, GLenum mode);
void gl1_4_glSelectBuffer(void *_glfuncs, GLsizei size, GLuint* buffer);
void gl1_4_glFeedbackBuffer(void *_glfuncs, GLsizei size, GLenum gltype, GLfloat* buffer);
void gl1_4_glTexGeniv(void *_glfuncs, GLenum coord, GLenum pname, const GLint* params);
void gl1_4_glTexGeni(void *_glfuncs, GLenum coord, GLenum pname, GLint param);
void gl1_4_glTexGenfv(void *_glfuncs, GLenum coord, GLenum pname, const GLfloat* params);
void gl1_4_glTexGenf(void *_glfuncs, GLenum coord, GLenum pname, GLfloat param);
void gl1_4_glTexGendv(void *_glfuncs, GLenum coord, GLenum pname, const GLdouble* params);
void gl1_4_glTexGend(void *_glfuncs, GLenum coord, GLenum pname, GLdouble param);
void gl1_4_glTexEnviv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_4_glTexEnvi(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gl1_4_glTexEnvfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_4_glTexEnvf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gl1_4_glShadeModel(void *_glfuncs, GLenum mode);
void gl1_4_glPolygonStipple(void *_glfuncs, const GLubyte* mask);
void gl1_4_glMaterialiv(void *_glfuncs, GLenum face, GLenum pname, const GLint* params);
void gl1_4_glMateriali(void *_glfuncs, GLenum face, GLenum pname, GLint param);
void gl1_4_glMaterialfv(void *_glfuncs, GLenum face, GLenum pname, const GLfloat* params);
void gl1_4_glMaterialf(void *_glfuncs, GLenum face, GLenum pname, GLfloat param);
void gl1_4_glLineStipple(void *_glfuncs, GLint factor, GLushort pattern);
void gl1_4_glLightModeliv(void *_glfuncs, GLenum pname, const GLint* params);
void gl1_4_glLightModeli(void *_glfuncs, GLenum pname, GLint param);
void gl1_4_glLightModelfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl1_4_glLightModelf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_4_glLightiv(void *_glfuncs, GLenum light, GLenum pname, const GLint* params);
void gl1_4_glLighti(void *_glfuncs, GLenum light, GLenum pname, GLint param);
void gl1_4_glLightfv(void *_glfuncs, GLenum light, GLenum pname, const GLfloat* params);
void gl1_4_glLightf(void *_glfuncs, GLenum light, GLenum pname, GLfloat param);
void gl1_4_glFogiv(void *_glfuncs, GLenum pname, const GLint* params);
void gl1_4_glFogi(void *_glfuncs, GLenum pname, GLint param);
void gl1_4_glFogfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl1_4_glFogf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_4_glColorMaterial(void *_glfuncs, GLenum face, GLenum mode);
void gl1_4_glClipPlane(void *_glfuncs, GLenum plane, const GLdouble* equation);
void gl1_4_glVertex4sv(void *_glfuncs, const GLshort* v);
void gl1_4_glVertex4s(void *_glfuncs, GLshort x, GLshort y, GLshort z, GLshort w);
void gl1_4_glVertex4iv(void *_glfuncs, const GLint* v);
void gl1_4_glVertex4i(void *_glfuncs, GLint x, GLint y, GLint z, GLint w);
void gl1_4_glVertex4fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glVertex4f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void gl1_4_glVertex4dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glVertex4d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void gl1_4_glVertex3sv(void *_glfuncs, const GLshort* v);
void gl1_4_glVertex3s(void *_glfuncs, GLshort x, GLshort y, GLshort z);
void gl1_4_glVertex3iv(void *_glfuncs, const GLint* v);
void gl1_4_glVertex3i(void *_glfuncs, GLint x, GLint y, GLint z);
void gl1_4_glVertex3fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glVertex3f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_4_glVertex3dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glVertex3d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_4_glVertex2sv(void *_glfuncs, const GLshort* v);
void gl1_4_glVertex2s(void *_glfuncs, GLshort x, GLshort y);
void gl1_4_glVertex2iv(void *_glfuncs, const GLint* v);
void gl1_4_glVertex2i(void *_glfuncs, GLint x, GLint y);
void gl1_4_glVertex2fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glVertex2f(void *_glfuncs, GLfloat x, GLfloat y);
void gl1_4_glVertex2dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glVertex2d(void *_glfuncs, GLdouble x, GLdouble y);
void gl1_4_glTexCoord4sv(void *_glfuncs, const GLshort* v);
void gl1_4_glTexCoord4s(void *_glfuncs, GLshort s, GLshort t, GLshort r, GLshort q);
void gl1_4_glTexCoord4iv(void *_glfuncs, const GLint* v);
void gl1_4_glTexCoord4i(void *_glfuncs, GLint s, GLint t, GLint r, GLint q);
void gl1_4_glTexCoord4fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glTexCoord4f(void *_glfuncs, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void gl1_4_glTexCoord4dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glTexCoord4d(void *_glfuncs, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void gl1_4_glTexCoord3sv(void *_glfuncs, const GLshort* v);
void gl1_4_glTexCoord3s(void *_glfuncs, GLshort s, GLshort t, GLshort r);
void gl1_4_glTexCoord3iv(void *_glfuncs, const GLint* v);
void gl1_4_glTexCoord3i(void *_glfuncs, GLint s, GLint t, GLint r);
void gl1_4_glTexCoord3fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glTexCoord3f(void *_glfuncs, GLfloat s, GLfloat t, GLfloat r);
void gl1_4_glTexCoord3dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glTexCoord3d(void *_glfuncs, GLdouble s, GLdouble t, GLdouble r);
void gl1_4_glTexCoord2sv(void *_glfuncs, const GLshort* v);
void gl1_4_glTexCoord2s(void *_glfuncs, GLshort s, GLshort t);
void gl1_4_glTexCoord2iv(void *_glfuncs, const GLint* v);
void gl1_4_glTexCoord2i(void *_glfuncs, GLint s, GLint t);
void gl1_4_glTexCoord2fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glTexCoord2f(void *_glfuncs, GLfloat s, GLfloat t);
void gl1_4_glTexCoord2dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glTexCoord2d(void *_glfuncs, GLdouble s, GLdouble t);
void gl1_4_glTexCoord1sv(void *_glfuncs, const GLshort* v);
void gl1_4_glTexCoord1s(void *_glfuncs, GLshort s);
void gl1_4_glTexCoord1iv(void *_glfuncs, const GLint* v);
void gl1_4_glTexCoord1i(void *_glfuncs, GLint s);
void gl1_4_glTexCoord1fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glTexCoord1f(void *_glfuncs, GLfloat s);
void gl1_4_glTexCoord1dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glTexCoord1d(void *_glfuncs, GLdouble s);
void gl1_4_glRectsv(void *_glfuncs, const GLshort* v1, const GLshort* v2);
void gl1_4_glRects(void *_glfuncs, GLshort x1, GLshort y1, GLshort x2, GLshort y2);
void gl1_4_glRectiv(void *_glfuncs, const GLint* v1, const GLint* v2);
void gl1_4_glRecti(void *_glfuncs, GLint x1, GLint y1, GLint x2, GLint y2);
void gl1_4_glRectfv(void *_glfuncs, const GLfloat* v1, const GLfloat* v2);
void gl1_4_glRectf(void *_glfuncs, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
void gl1_4_glRectdv(void *_glfuncs, const GLdouble* v1, const GLdouble* v2);
void gl1_4_glRectd(void *_glfuncs, GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
void gl1_4_glRasterPos4sv(void *_glfuncs, const GLshort* v);
void gl1_4_glRasterPos4s(void *_glfuncs, GLshort x, GLshort y, GLshort z, GLshort w);
void gl1_4_glRasterPos4iv(void *_glfuncs, const GLint* v);
void gl1_4_glRasterPos4i(void *_glfuncs, GLint x, GLint y, GLint z, GLint w);
void gl1_4_glRasterPos4fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glRasterPos4f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void gl1_4_glRasterPos4dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glRasterPos4d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void gl1_4_glRasterPos3sv(void *_glfuncs, const GLshort* v);
void gl1_4_glRasterPos3s(void *_glfuncs, GLshort x, GLshort y, GLshort z);
void gl1_4_glRasterPos3iv(void *_glfuncs, const GLint* v);
void gl1_4_glRasterPos3i(void *_glfuncs, GLint x, GLint y, GLint z);
void gl1_4_glRasterPos3fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glRasterPos3f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_4_glRasterPos3dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glRasterPos3d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_4_glRasterPos2sv(void *_glfuncs, const GLshort* v);
void gl1_4_glRasterPos2s(void *_glfuncs, GLshort x, GLshort y);
void gl1_4_glRasterPos2iv(void *_glfuncs, const GLint* v);
void gl1_4_glRasterPos2i(void *_glfuncs, GLint x, GLint y);
void gl1_4_glRasterPos2fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glRasterPos2f(void *_glfuncs, GLfloat x, GLfloat y);
void gl1_4_glRasterPos2dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glRasterPos2d(void *_glfuncs, GLdouble x, GLdouble y);
void gl1_4_glNormal3sv(void *_glfuncs, const GLshort* v);
void gl1_4_glNormal3s(void *_glfuncs, GLshort nx, GLshort ny, GLshort nz);
void gl1_4_glNormal3iv(void *_glfuncs, const GLint* v);
void gl1_4_glNormal3i(void *_glfuncs, GLint nx, GLint ny, GLint nz);
void gl1_4_glNormal3fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glNormal3f(void *_glfuncs, GLfloat nx, GLfloat ny, GLfloat nz);
void gl1_4_glNormal3dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glNormal3d(void *_glfuncs, GLdouble nx, GLdouble ny, GLdouble nz);
void gl1_4_glNormal3bv(void *_glfuncs, const GLbyte* v);
void gl1_4_glNormal3b(void *_glfuncs, GLbyte nx, GLbyte ny, GLbyte nz);
void gl1_4_glIndexsv(void *_glfuncs, const GLshort* c);
void gl1_4_glIndexs(void *_glfuncs, GLshort c);
void gl1_4_glIndexiv(void *_glfuncs, const GLint* c);
void gl1_4_glIndexi(void *_glfuncs, GLint c);
void gl1_4_glIndexfv(void *_glfuncs, const GLfloat* c);
void gl1_4_glIndexf(void *_glfuncs, GLfloat c);
void gl1_4_glIndexdv(void *_glfuncs, const GLdouble* c);
void gl1_4_glIndexd(void *_glfuncs, GLdouble c);
void gl1_4_glEnd(void *_glfuncs);
void gl1_4_glEdgeFlagv(void *_glfuncs, const GLboolean* flag);
void gl1_4_glEdgeFlag(void *_glfuncs, GLboolean flag);
void gl1_4_glColor4usv(void *_glfuncs, const GLushort* v);
void gl1_4_glColor4us(void *_glfuncs, GLushort red, GLushort green, GLushort blue, GLushort alpha);
void gl1_4_glColor4uiv(void *_glfuncs, const GLuint* v);
void gl1_4_glColor4ui(void *_glfuncs, GLuint red, GLuint green, GLuint blue, GLuint alpha);
void gl1_4_glColor4ubv(void *_glfuncs, const GLubyte* v);
void gl1_4_glColor4ub(void *_glfuncs, GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
void gl1_4_glColor4sv(void *_glfuncs, const GLshort* v);
void gl1_4_glColor4s(void *_glfuncs, GLshort red, GLshort green, GLshort blue, GLshort alpha);
void gl1_4_glColor4iv(void *_glfuncs, const GLint* v);
void gl1_4_glColor4i(void *_glfuncs, GLint red, GLint green, GLint blue, GLint alpha);
void gl1_4_glColor4fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glColor4f(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_4_glColor4dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glColor4d(void *_glfuncs, GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
void gl1_4_glColor4bv(void *_glfuncs, const GLbyte* v);
void gl1_4_glColor4b(void *_glfuncs, GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
void gl1_4_glColor3usv(void *_glfuncs, const GLushort* v);
void gl1_4_glColor3us(void *_glfuncs, GLushort red, GLushort green, GLushort blue);
void gl1_4_glColor3uiv(void *_glfuncs, const GLuint* v);
void gl1_4_glColor3ui(void *_glfuncs, GLuint red, GLuint green, GLuint blue);
void gl1_4_glColor3ubv(void *_glfuncs, const GLubyte* v);
void gl1_4_glColor3ub(void *_glfuncs, GLubyte red, GLubyte green, GLubyte blue);
void gl1_4_glColor3sv(void *_glfuncs, const GLshort* v);
void gl1_4_glColor3s(void *_glfuncs, GLshort red, GLshort green, GLshort blue);
void gl1_4_glColor3iv(void *_glfuncs, const GLint* v);
void gl1_4_glColor3i(void *_glfuncs, GLint red, GLint green, GLint blue);
void gl1_4_glColor3fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glColor3f(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue);
void gl1_4_glColor3dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glColor3d(void *_glfuncs, GLdouble red, GLdouble green, GLdouble blue);
void gl1_4_glColor3bv(void *_glfuncs, const GLbyte* v);
void gl1_4_glColor3b(void *_glfuncs, GLbyte red, GLbyte green, GLbyte blue);
void gl1_4_glBitmap(void *_glfuncs, GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte* bitmap);
void gl1_4_glBegin(void *_glfuncs, GLenum mode);
void gl1_4_glListBase(void *_glfuncs, GLuint base);
GLuint gl1_4_glGenLists(void *_glfuncs, GLsizei range_);
void gl1_4_glDeleteLists(void *_glfuncs, GLuint list, GLsizei range_);
void gl1_4_glCallLists(void *_glfuncs, GLsizei n, GLenum gltype, const GLvoid* lists);
void gl1_4_glCallList(void *_glfuncs, GLuint list);
void gl1_4_glEndList(void *_glfuncs);
void gl1_4_glNewList(void *_glfuncs, GLuint list, GLenum mode);
void gl1_4_glPushClientAttrib(void *_glfuncs, GLbitfield mask);
void gl1_4_glPopClientAttrib(void *_glfuncs);
void gl1_4_glPrioritizeTextures(void *_glfuncs, GLsizei n, const GLuint* textures, const GLfloat* priorities);
GLboolean gl1_4_glAreTexturesResident(void *_glfuncs, GLsizei n, const GLuint* textures, GLboolean* residences);
void gl1_4_glVertexPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_4_glTexCoordPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_4_glNormalPointer(void *_glfuncs, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_4_glInterleavedArrays(void *_glfuncs, GLenum format, GLsizei stride, const GLvoid* pointer);
void gl1_4_glIndexPointer(void *_glfuncs, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_4_glEnableClientState(void *_glfuncs, GLenum array);
void gl1_4_glEdgeFlagPointer(void *_glfuncs, GLsizei stride, const GLvoid* pointer);
void gl1_4_glDisableClientState(void *_glfuncs, GLenum array);
void gl1_4_glColorPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_4_glArrayElement(void *_glfuncs, GLint i);
void gl1_4_glResetMinmax(void *_glfuncs, GLenum target);
void gl1_4_glResetHistogram(void *_glfuncs, GLenum target);
void gl1_4_glMinmax(void *_glfuncs, GLenum target, GLenum internalFormat, GLboolean sink);
void gl1_4_glHistogram(void *_glfuncs, GLenum target, GLsizei width, GLenum internalFormat, GLboolean sink);
void gl1_4_glGetMinmaxParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_4_glGetMinmaxParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_4_glGetMinmax(void *_glfuncs, GLenum target, GLboolean reset, GLenum format, GLenum gltype, GLvoid* values);
void gl1_4_glGetHistogramParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_4_glGetHistogramParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_4_glGetHistogram(void *_glfuncs, GLenum target, GLboolean reset, GLenum format, GLenum gltype, GLvoid* values);
void gl1_4_glSeparableFilter2D(void *_glfuncs, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* row, const GLvoid* column);
void gl1_4_glGetSeparableFilter(void *_glfuncs, GLenum target, GLenum format, GLenum gltype, GLvoid* row, GLvoid* column, GLvoid* span);
void gl1_4_glGetConvolutionParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_4_glGetConvolutionParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_4_glGetConvolutionFilter(void *_glfuncs, GLenum target, GLenum format, GLenum gltype, GLvoid* image);
void gl1_4_glCopyConvolutionFilter2D(void *_glfuncs, GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_4_glCopyConvolutionFilter1D(void *_glfuncs, GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width);
void gl1_4_glConvolutionParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_4_glConvolutionParameteri(void *_glfuncs, GLenum target, GLenum pname, GLint params);
void gl1_4_glConvolutionParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_4_glConvolutionParameterf(void *_glfuncs, GLenum target, GLenum pname, GLfloat params);
void gl1_4_glConvolutionFilter2D(void *_glfuncs, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* image);
void gl1_4_glConvolutionFilter1D(void *_glfuncs, GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum gltype, const GLvoid* image);
void gl1_4_glCopyColorSubTable(void *_glfuncs, GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
void gl1_4_glColorSubTable(void *_glfuncs, GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum gltype, const GLvoid* data);
void gl1_4_glGetColorTableParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_4_glGetColorTableParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_4_glGetColorTable(void *_glfuncs, GLenum target, GLenum format, GLenum gltype, GLvoid* table);
void gl1_4_glCopyColorTable(void *_glfuncs, GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width);
void gl1_4_glColorTableParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_4_glColorTableParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_4_glColorTable(void *_glfuncs, GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum gltype, const GLvoid* table);
void gl1_4_glMultTransposeMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_4_glMultTransposeMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_4_glLoadTransposeMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_4_glLoadTransposeMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_4_glMultiTexCoord4sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_4_glMultiTexCoord4s(void *_glfuncs, GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
void gl1_4_glMultiTexCoord4iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_4_glMultiTexCoord4i(void *_glfuncs, GLenum target, GLint s, GLint t, GLint r, GLint q);
void gl1_4_glMultiTexCoord4fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_4_glMultiTexCoord4f(void *_glfuncs, GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void gl1_4_glMultiTexCoord4dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_4_glMultiTexCoord4d(void *_glfuncs, GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void gl1_4_glMultiTexCoord3sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_4_glMultiTexCoord3s(void *_glfuncs, GLenum target, GLshort s, GLshort t, GLshort r);
void gl1_4_glMultiTexCoord3iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_4_glMultiTexCoord3i(void *_glfuncs, GLenum target, GLint s, GLint t, GLint r);
void gl1_4_glMultiTexCoord3fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_4_glMultiTexCoord3f(void *_glfuncs, GLenum target, GLfloat s, GLfloat t, GLfloat r);
void gl1_4_glMultiTexCoord3dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_4_glMultiTexCoord3d(void *_glfuncs, GLenum target, GLdouble s, GLdouble t, GLdouble r);
void gl1_4_glMultiTexCoord2sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_4_glMultiTexCoord2s(void *_glfuncs, GLenum target, GLshort s, GLshort t);
void gl1_4_glMultiTexCoord2iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_4_glMultiTexCoord2i(void *_glfuncs, GLenum target, GLint s, GLint t);
void gl1_4_glMultiTexCoord2fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_4_glMultiTexCoord2f(void *_glfuncs, GLenum target, GLfloat s, GLfloat t);
void gl1_4_glMultiTexCoord2dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_4_glMultiTexCoord2d(void *_glfuncs, GLenum target, GLdouble s, GLdouble t);
void gl1_4_glMultiTexCoord1sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_4_glMultiTexCoord1s(void *_glfuncs, GLenum target, GLshort s);
void gl1_4_glMultiTexCoord1iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_4_glMultiTexCoord1i(void *_glfuncs, GLenum target, GLint s);
void gl1_4_glMultiTexCoord1fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_4_glMultiTexCoord1f(void *_glfuncs, GLenum target, GLfloat s);
void gl1_4_glMultiTexCoord1dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_4_glMultiTexCoord1d(void *_glfuncs, GLenum target, GLdouble s);
void gl1_4_glClientActiveTexture(void *_glfuncs, GLenum texture);
void gl1_4_glWindowPos3sv(void *_glfuncs, const GLshort* v);
void gl1_4_glWindowPos3s(void *_glfuncs, GLshort x, GLshort y, GLshort z);
void gl1_4_glWindowPos3iv(void *_glfuncs, const GLint* v);
void gl1_4_glWindowPos3i(void *_glfuncs, GLint x, GLint y, GLint z);
void gl1_4_glWindowPos3fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glWindowPos3f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_4_glWindowPos3dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glWindowPos3d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_4_glWindowPos2sv(void *_glfuncs, const GLshort* v);
void gl1_4_glWindowPos2s(void *_glfuncs, GLshort x, GLshort y);
void gl1_4_glWindowPos2iv(void *_glfuncs, const GLint* v);
void gl1_4_glWindowPos2i(void *_glfuncs, GLint x, GLint y);
void gl1_4_glWindowPos2fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glWindowPos2f(void *_glfuncs, GLfloat x, GLfloat y);
void gl1_4_glWindowPos2dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glWindowPos2d(void *_glfuncs, GLdouble x, GLdouble y);
void gl1_4_glSecondaryColorPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_4_glSecondaryColor3usv(void *_glfuncs, const GLushort* v);
void gl1_4_glSecondaryColor3us(void *_glfuncs, GLushort red, GLushort green, GLushort blue);
void gl1_4_glSecondaryColor3uiv(void *_glfuncs, const GLuint* v);
void gl1_4_glSecondaryColor3ui(void *_glfuncs, GLuint red, GLuint green, GLuint blue);
void gl1_4_glSecondaryColor3ubv(void *_glfuncs, const GLubyte* v);
void gl1_4_glSecondaryColor3ub(void *_glfuncs, GLubyte red, GLubyte green, GLubyte blue);
void gl1_4_glSecondaryColor3sv(void *_glfuncs, const GLshort* v);
void gl1_4_glSecondaryColor3s(void *_glfuncs, GLshort red, GLshort green, GLshort blue);
void gl1_4_glSecondaryColor3iv(void *_glfuncs, const GLint* v);
void gl1_4_glSecondaryColor3i(void *_glfuncs, GLint red, GLint green, GLint blue);
void gl1_4_glSecondaryColor3fv(void *_glfuncs, const GLfloat* v);
void gl1_4_glSecondaryColor3f(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue);
void gl1_4_glSecondaryColor3dv(void *_glfuncs, const GLdouble* v);
void gl1_4_glSecondaryColor3d(void *_glfuncs, GLdouble red, GLdouble green, GLdouble blue);
void gl1_4_glSecondaryColor3bv(void *_glfuncs, const GLbyte* v);
void gl1_4_glSecondaryColor3b(void *_glfuncs, GLbyte red, GLbyte green, GLbyte blue);
void gl1_4_glFogCoordPointer(void *_glfuncs, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_4_glFogCoorddv(void *_glfuncs, const GLdouble* coord);
void gl1_4_glFogCoordd(void *_glfuncs, GLdouble coord);
void gl1_4_glFogCoordfv(void *_glfuncs, const GLfloat* coord);
void gl1_4_glFogCoordf(void *_glfuncs, GLfloat coord);


#ifdef __cplusplus
} // extern "C"
#endif
