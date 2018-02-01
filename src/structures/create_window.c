/*
** EPITECH PROJECT, 2018
** create
** File description:
** window
*/

#include "my_world.h"

window_t create_window(int m_x, int m_y)
{
	window_t window;
	sfVideoMode mode_tmp = {m_x, m_y, 32};
	sfVector2u m_size;

	window.m_window = sfRenderWindow_create(mode_tmp,
			"My_World", sfClose | sfResize, NULL);
	sfRenderWindow_setFramerateLimit(window.m_window, 60);
	m_size = sfRenderWindow_getSize(window.m_window);
	window.size.x = m_size.x / 2;
	window.size.y = m_size.y / 2;
	window.window_ui = create_ui();;
	return window;
}
