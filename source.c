#include <Python.h>
#include <stdio.h>
#include <stdbool.h>

/* design function 
====================================== */ 
// test return str = "Hello World"
static PyObject* HelloWorld(PyObject* self, PyObject* args) 
{
    const char* sum_str = "Hello World ...";
    return Py_BuildValue("s", sum_str);
}
// test return bool = "true"
static PyObject* ButtonBuffer(PyObject* self, PyObject* args)
{
    PyObject* value = Py_False;
    value = Py_True;
    bool button_buffer = (value == Py_True);
    if (button_buffer) 
    {
        return Py_BuildValue("O", value); 
        
    } 
    else Py_RETURN_NONE; // => [ Py_INCREF(Py_None); return Py_None; ]
}
// test return int = "123456789"
static PyObject* SimpleInt(PyObject* self, PyObject* args)
{
    int value = 123456789;
    return Py_BuildValue("i", value);
}
// test return double = "3.14159"
static PyObject* SimpleDouble(PyObject* self, PyObject* args)
{
    double value = 3.14159;
    return Py_BuildValue("d", value);
}

/* set function
====================================== */ 
static PyMethodDef SetModule[] = 
{
    {"testStr", HelloWorld, METH_VARARGS, "return simple test string = Hello World"},
    {"testBool", ButtonBuffer, METH_VARARGS, "return simple test bool = false"},
    {"testInt", SimpleInt, METH_VARARGS, "return simple test bool = false"},
    {"testDouble", SimpleDouble, METH_VARARGS, "return simple test bool = false"},
    {NULL, NULL, 0, NULL}
};

/* get functions, set module block
====================================== */ 
static struct PyModuleDef GetModule = {
    PyModuleDef_HEAD_INIT,
    "moduleName", // < module_name >
    "get python value, set value accelerate computing algorithm, return output give to python",
    -1,
    SetModule
};

/* init module block( PyInit_< module_name > )
====================================== */
PyMODINIT_FUNC PyInit_moduleName(void) {
    return PyModule_Create(&GetModule);
}
