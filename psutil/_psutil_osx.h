/*
 * $Id$
 *
 * OS X platform-specific module methods for _psutil_osx
 */

#include <Python.h>


static PyObject* get_pid_list(PyObject* self, PyObject* args);
static PyObject* get_process_info(PyObject* self, PyObject* args);
static PyObject* get_num_cpus(PyObject* self, PyObject* args);
static PyObject* get_system_uptime(PyObject* self, PyObject* args);
static int pid_exists(long pid);

