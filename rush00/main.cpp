/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 16:26:26 by esterna           #+#    #+#             */
/*   Updated: 2018/01/14 21:19:14 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_env.class.hpp"
#include <ncurses.h>
#include <unistd.h>
#include <ctime>

#define	FRAMES_PER_SECOND  60
#define SKIP_TICKS  (CLOCKS_PER_SEC / FRAMES_PER_SECOND)


int				main( void )
{
	game_env 		tmp;
	game_env & 		player1_start = tmp;
	int				ch;
	clock_t			next_game_tick;
	clock_t			start = clock();
	clock_t static	last_sec = 0;
	int				frames = 0;

	initscr(); // Initialize the window
	noecho(); // Don't echo any keypresses
	cbreak();//Line buffering disabled, pass everything to me
	curs_set(FALSE); // Don't display a cursor
	nodelay(stdscr, TRUE); //getch() won't wait until a key is hit, will work in a non-blocking manner

	while ((ch = getch()) == ERR || ch != KEY_END)
	{
		frames++;
		next_game_tick = clock();
		if (next_game_tick / CLOCKS_PER_SEC != last_sec / CLOCKS_PER_SEC)
		{
			clear(); // Clear the screen of all previously-printed characters
			mvprintw(0, 0, "Asteroids: SPACE to fire Lazer, Arrows for movement, END to exit.\t\t\t%d\t%d", frames, (clock() - start) / CLOCKS_PER_SEC);
			frames = 0;
			last_sec = next_game_tick;
		}

		switch (ch)//Movement
		{
			case KEY_END :
				break ;
			case KEY_UP :
				player1_start.player->set_diry( -1 );
			case KEY_DOWN :
				player1_start.player->set_diry( 1 );
			case KEY_RIGHT :
				player1_start.player->set_dirx( 1 );
			case KEY_LEFT :
				player1_start.player->set_dirx( -1 );
			case ' ' :
				if (player1_start.nbLazers != MAX_LAZERS)
				{
					player1_start.lazers[player1_start.nbLazers] = *player1_start.player->fire_lazer(player1_start.player->get_x(), player1_start.player->get_y());
					player1_start.nbLazers++;
				}
		}
		
		mvaddch(player1_start.player->get_y(), player1_start.player->get_x(), player1_start.player->get_symbol());
		player1_start.player->move();
	/*	for (stars = player1_start._nbStars; stars > 0; stars--)
		{
			mvaddch(player1_start.stars[stars].get_y(), player1_start.stars[stars].get_x(), player1_start.stars[stars].get_symbol());
			player1_start.stars[stars].move();
		}*/
		for (int curr = player1_start.nbLazers - 1; curr > -1; curr--)
		{
			mvaddch(player1_start.lazers[curr].get_y(), player1_start.lazers[curr].get_x(), player1_start.lazers[curr].get_symbol());
			player1_start.lazers[curr].move();
		}
		for (int obj = player1_start.nbasteroid - 1; obj > -1; obj--)
		{
			mvaddch(player1_start.obstacles[obj].get_y(), player1_start.obstacles[obj].get_x(), player1_start.obstacles[obj].get_symbol());
			player1_start.obstacles[obj].move();
		}
		refresh();
		
		while ( clock() / SKIP_TICKS == next_game_tick / SKIP_TICKS) {}
	}

	return 0;
}
