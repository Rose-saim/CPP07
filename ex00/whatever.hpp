#ifndef FUNCS_HPP
#define FUNCS_HPP

template <typename T>
void	swap(T &x, T &y)
{
	T save;

	save = y;
	y = x;
	x = save;
}

template <typename T>
T	min(T &x, T &y)
{
	if (x < y)
		return (y);
	return (x);
}

template <typename T>
T	max(T &x, T &y)
{
	if (x > y)
		return (y);
	return (x);
}
#endif