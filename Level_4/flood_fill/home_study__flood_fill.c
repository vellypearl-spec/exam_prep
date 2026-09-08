typedef struct s_point
{
    int x;
    int y;
} t_point;

void walker(char **tab, t_point size, int x, int y, char target)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y)
		return;
	if (tab[y][x] != target)
		return;
	tab[y][x] = 'F';
	walker(tab, size, x + 1, y, target);
	walker(tab, size, x - 1, y, target);
	walker(tab, size, x, y + 1, target);
	walker(tab, size, x, y - 1, target);
}
void flood_fill(char **tab, t_point size, t_point begin)
{
    char target;

    target = tab[begin.y][begin.x];
    walker(tab, size, begin.x, begin.y, target);
}