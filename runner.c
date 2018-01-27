/*
** EPITECH PROJECT, 2017
** bootstrap_initiation
** File description:
** bootstrap_initiation
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "include/my.h"
#include "include/struct.h"
#include <stdio.h>
#include <time.h>

int	main()
{
	window_ent window;
	event_ent event;
	candy_bg_ent candy;
	player_candy_ent playercandy;

	float		seconds;
	const char* kawai = "assets/sounds/kawai1.ogg";
	window.video_mode.width = 1920;
	window.video_mode.height = 1080;
	window.video_mode.bitsPerPixel = 32;
	event.rect.top = 0;
	event.rect.left = 0;
	event.rect.width = 416;
	event.rect.height = 454;
	candy.texture_bg_ground = sfTexture_createFromFile("assets/sprite/backgrounds/candyland/layer01_ground.png",NULL);
	candy.sprite_bg_ground = sfSprite_create();
	candy.sprite_bg_ground2 = sfSprite_create();
	candy.texture_bg_cake = sfTexture_createFromFile("assets/sprite/backgrounds/candyland/layer02_cake.png",NULL);
	candy.sprite_bg_cake = sfSprite_create();
	candy.sprite_bg_cake2 = sfSprite_create();
	candy.texture_bg_trees = sfTexture_createFromFile("assets/sprite/backgrounds/candyland/layer03_trees.png",NULL);
	candy.sprite_bg_trees = sfSprite_create();
	candy.sprite_bg_trees2 = sfSprite_create();
	candy.texture_bg_clouds = sfTexture_createFromFile("assets/sprite/backgrounds/candyland/layer04_clouds.png",NULL);
	candy.sprite_bg_clouds = sfSprite_create();
	candy.sprite_bg_clouds2 = sfSprite_create();
	candy.texture_bg_rocks = sfTexture_createFromFile("assets/sprite/backgrounds/candyland/layer05_rocks.png",NULL);
	candy.sprite_bg_rocks = sfSprite_create();
	candy.sprite_bg_rocks2 = sfSprite_create();
	candy.texture_bg_sky = sfTexture_createFromFile("assets/sprite/backgrounds/candyland/layer06_sky.png",NULL);
	candy.sprite_bg_sky = sfSprite_create();
	playercandy.texture_player = sfTexture_createFromFile("assets/sprite/characters/cute/run/run_spritesheet.png",NULL);
	playercandy.sprite_player = sfSprite_create();
	playercandy.position_player.y = 435;
	event.clock = sfClock_create();
	window.window = sfRenderWindow_create(window.video_mode,"MyWindow", sfResize | sfClose, NULL);
	candy.position_bg_clouds2.x = -1920;
	candy.position_bg_clouds.x = 0;
	candy.position_bg_ground2.x = -1920;
	candy.position_bg_ground.x = 0;
	candy.position_bg_rocks2.x = -1920;
	candy.position_bg_rocks.x = 0;
	candy.position_bg_cake2.x = -1920;
	candy.position_bg_cake.x = 0;
	candy.position_bg_trees2.x = -1920;
	candy.position_bg_trees.x = 0;
	sfRenderWindow_setVerticalSyncEnabled(window.window, sfTrue);
	while(sfRenderWindow_isOpen(window.window))
	{
		event.time = sfClock_getElapsedTime(event.clock);
		seconds = event.time.microseconds / 1000000.0;
		//sfRenderWindow_setFramerateLimit(window.window, 60);
		while (sfRenderWindow_pollEvent(window.window, &event.event)) {
			if (event.event.type == sfEvtClosed) {
				sfRenderWindow_close(window.window);
			}
	}
	if (candy.position_bg_clouds.x>= 0) {
		candy.position_bg_clouds2.x = candy.position_bg_clouds.x - 1920;
		candy.position_bg_clouds.x-=3;
		if (candy.position_bg_clouds.x <= 0){
			candy.position_bg_clouds.x = 1920;
		}
	}

	if (candy.position_bg_rocks.x>= 0) {
		candy.position_bg_rocks2.x = candy.position_bg_rocks.x - 1920;
		candy.position_bg_rocks.x-=0.60;
		if (candy.position_bg_rocks.x <= 0) {
			candy.position_bg_rocks.x = 1920;
		}
	}
		if (candy.position_bg_ground.x>= 0) {
			candy.position_bg_ground2.x = candy.position_bg_ground.x - 1920;
			candy.position_bg_ground.x-=4;
			if (candy.position_bg_ground.x <= 0) {
				candy.position_bg_ground.x = 1920;
			}
		}
		if (candy.position_bg_cake.x>= 0) {
			candy.position_bg_cake2.x = candy.position_bg_cake.x - 1920;
			candy.position_bg_cake.x-=2;
			if (candy.position_bg_cake.x <= 0) {
				candy.position_bg_cake.x = 1920;
			}
		}
		if (candy.position_bg_trees.x>= 0) {
			candy.position_bg_trees2.x = candy.position_bg_trees.x - 1920;
			candy.position_bg_trees.x-=2;
			if (candy.position_bg_trees.x <= 0) {
				candy.position_bg_trees.x = 1920;
			}
		}
	sfSprite_setPosition(candy.sprite_bg_clouds, candy.position_bg_clouds);
	sfSprite_setPosition(candy.sprite_bg_clouds2, candy.position_bg_clouds2);
	sfSprite_setPosition(candy.sprite_bg_rocks, candy.position_bg_rocks);
	sfSprite_setPosition(candy.sprite_bg_rocks2, candy.position_bg_rocks2);
	sfSprite_setPosition(candy.sprite_bg_ground, candy.position_bg_ground);
	sfSprite_setPosition(candy.sprite_bg_ground2, candy.position_bg_ground2);
	sfSprite_setPosition(candy.sprite_bg_cake, candy.position_bg_cake);
	sfSprite_setPosition(candy.sprite_bg_cake2, candy.position_bg_cake2);
	sfSprite_setPosition(candy.sprite_bg_trees, candy.position_bg_trees);
	sfSprite_setPosition(candy.sprite_bg_trees2, candy.position_bg_trees2);
	sfSprite_setPosition(playercandy.sprite_player, playercandy.position_player);
	sfSprite_setTexture(candy.sprite_bg_ground, candy.texture_bg_ground, sfTrue);
	sfSprite_setTexture(candy.sprite_bg_cake, candy.texture_bg_cake, sfTrue);
	sfSprite_setTexture(candy.sprite_bg_clouds, candy.texture_bg_clouds, sfTrue);
	sfSprite_setTexture(candy.sprite_bg_trees, candy.texture_bg_trees, sfTrue);
	sfSprite_setTexture(candy.sprite_bg_rocks, candy.texture_bg_rocks, sfTrue);
	sfSprite_setTexture(candy.sprite_bg_sky, candy.texture_bg_sky, sfTrue);
	sfSprite_setTexture(playercandy.sprite_player, playercandy.texture_player, sfTrue);
	if (seconds < 0.25 && event.rect.left < 8320)
	{
		event.rect.left += 416;
	}
	sfClock_restart(event.clock);
	if (event.rect.left >= 8320 ) {
		event.rect.left = 0;
	}
	sfSprite_setTextureRect(playercandy.sprite_player, event.rect);
	sfRenderWindow_drawSprite(window.window, playercandy.sprite_player, NULL);

	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_sky, NULL);
	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_rocks, NULL);
	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_rocks2, NULL);
	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_trees, NULL);
	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_trees2, NULL);
	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_cake, NULL);
	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_cake2, NULL);
	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_ground, NULL);
	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_ground2, NULL);
	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_clouds2, NULL);
	sfRenderWindow_drawSprite(window.window, candy.sprite_bg_clouds, NULL);
	sfRenderWindow_drawSprite(window.window, playercandy.sprite_player, NULL);
	candy.sprite_bg_clouds2 = sfSprite_copy(candy.sprite_bg_clouds);
	candy.sprite_bg_rocks2 = sfSprite_copy(candy.sprite_bg_rocks);
	candy.sprite_bg_ground2 = sfSprite_copy(candy.sprite_bg_ground);
	candy.sprite_bg_cake2 = sfSprite_copy(candy.sprite_bg_cake);
	candy.sprite_bg_trees2 = sfSprite_copy(candy.sprite_bg_trees);
	sfRenderWindow_display(window.window);
	}
	sfRenderWindow_destroy(window.window);
	sfSprite_destroy(playercandy.sprite_player);
	sfSprite_destroy(candy.sprite_bg_ground);
	sfSprite_destroy(candy.sprite_bg_cake);
	sfSprite_destroy(candy.sprite_bg_trees);
	sfSprite_destroy(candy.sprite_bg_clouds);
	sfSprite_destroy(candy.sprite_bg_rocks);
	sfSprite_destroy(candy.sprite_bg_sky);
	return(0);
}
