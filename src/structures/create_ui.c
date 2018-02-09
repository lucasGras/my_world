/*
** EPITECH PROJECT, 2018
** create ui
** File description:
** world
*/

#include "my_world.h"

sfVector2f get_position_by_percent(window_t window,
		int perc_x, int perc_y)
{
	sfVector2f position;

	position.x = (perc_x * window.size.x) / 100;
	position.y = (perc_y * window.size.y) / 100;
	return position;
}

button_t *create_translate_buttons(window_t window)
{
	sfVector2f button_left = get_position_by_percent(window, 0, 25);
	sfVector2f button_right = get_position_by_percent(window, 6, 25);
	sfVector2f button_down = get_position_by_percent(window, 3, 30);
	sfVector2f button_top = get_position_by_percent(window, 3, 20);
	button_t *translate = malloc(sizeof(button_t) * 4);

	translate[0] = create_button(button_left, "left");
	translate[1] = create_button(button_right, "right");
	translate[2] = create_button(button_down, "down");
	translate[3] = create_button(button_top, "up");
	return translate;
}

button_t *create_application_buttons(window_t window)
{
	sfVector2f button_load = get_position_by_percent(window, 87, 1);
	sfVector2f button_save = get_position_by_percent(window, 87, 7);
	sfVector2f button_quit = get_position_by_percent(window, 94, 1);
	sfVector2f button_selection = get_position_by_percent(window, 80, 1);
	button_t *application = malloc(sizeof(button_t) * 4);

	application[0] = create_button(button_load, "load");
	application[1] = create_button(button_quit, "quit");
	application[2] = create_button(button_selection, "corner");
	application[3] = create_button(button_save, "save");
	return application;
}

button_t *create_tools_button(window_t window)
{
	sfVector2f button_elevate = get_position_by_percent(window, 1, 1);
	sfVector2f button_dig = get_position_by_percent(window, 7, 1);
	button_t *tools = malloc(sizeof(button_t) * 2);

	tools[0] = create_button(button_elevate, "elevate");
	tools[1] = create_button(button_dig, "dig");
	return tools;
}

ui_t create_ui(window_t window)
{
	ui_t ui;

	ui.button_translate = create_translate_buttons(window);
	ui.button_application = create_application_buttons(window);
	ui.button_tools = create_tools_button(window);
	ui.tools_state.elevate = sfFalse;
	ui.tools_state.dig = sfFalse;
	return ui;
}
