#include "Python.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_python_list_info - A function that prints information about a
 * python list object
 * @p: The pointer to generic PyObject which is of PyListObject type
 * Return: Nothing.
 */
void print_python_list_info(PyObject *p)
{
	long int size, i;
	PyListObject *list;
	PyObject *item;

	size = Py_SIZE(p);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (i = 0; i < size; i++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
	}
}
