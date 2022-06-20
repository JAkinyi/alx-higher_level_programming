#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
	"""Print x elememts of a list.
	Args:
	my list(list): List to print element from
	x (int): The number of elements of my_list to print.

	Returns:
	The number of elements printed.

	"""
	count = 0
	for i in range(x):
		try:
			print("{}".format(my_list[i]), end="")
			count += 1
		except IndexError:
			break
	print("")
	return (count)
