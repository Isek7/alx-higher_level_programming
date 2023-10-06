#include <stdio.h>

/*
* Author: Isek7
* Email: bengabrielisek@gmail.com
* Date: October 6, 2023
* Module: listinfo
* Purpose: Prints some basic info about Python lists
*/

#define PY_SSIZE_T_CLEAN
#include <python.h>
#include <stdlib.h>

/**
* print_python_list_info - prints python list info
*
* @p: PyObject
* Return: no return
*/
void print_python_list_info(PyObject *p)
{
long int size, i;
PyListObject *list;
PyObject *item;

size = Py_SIZE(p);
printf("[*] Size of the Python List = %ld\n", size);

list = (PyListObject *)p;
printf("[*] Allocated = %ld\n", list->allocated);

for (i = 0; i < size; i++)
{
item = PyList_Get_ITEM(p, i);
printf("Element %ld: ", i);
printf("%s\n", Py_TYPE(item)->tp_name);
}
}
