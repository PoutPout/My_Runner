/*
** EPITECH PROJECT, 2017
** struc_game
** File description:
** struc_game
*/
struct candy_bg_ent
{
        sfTexture	*texture_bg_ground;
        sfSprite	*sprite_bg_ground;
        sfVector2f      position_bg_ground;
        sfSprite	*sprite_bg_ground2;
        sfVector2f      position_bg_ground2;

        sfTexture	*texture_bg_cake;
        sfSprite	*sprite_bg_cake;
        sfVector2f      position_bg_cake;
        sfSprite	*sprite_bg_cake2;
        sfVector2f      position_bg_cake2;

        sfTexture	*texture_bg_trees;
        sfSprite	*sprite_bg_trees;
        sfVector2f      position_bg_trees;
        sfSprite	*sprite_bg_trees2;
        sfVector2f      position_bg_trees2;

        sfTexture	*texture_bg_clouds;
	sfSprite	*sprite_bg_clouds;
        sfVector2f      position_bg_clouds;
        sfSprite	*sprite_bg_clouds2;
        sfVector2f      position_bg_clouds2;

        sfTexture	*texture_bg_rocks;
        sfSprite	*sprite_bg_rocks;
        sfVector2f      position_bg_rocks;
        sfTexture      *texture_bg_rocks2;
        sfSprite	*sprite_bg_rocks2;
        sfVector2f      position_bg_rocks2;

        sfTexture	*texture_bg_sky;
        sfSprite	*sprite_bg_sky;
        sfVector2f      position_bg_sky;

};
typedef struct candy_bg_ent candy_bg_ent;

struct player_candy_ent
{
        sfTexture	*texture_player;
        sfSprite	*sprite_player;
        sfVector2f      position_player;
        sfTime          time_saut;
        sfClock         *clock_saut;

};
typedef struct player_candy_ent player_candy_ent;

struct desert_bg_ent
{
        sfTexture	*texture_bg_1;
        sfSprite	*sprite_bg_1;
        sfVector2f      position_bg_1;
        sfSprite	*sprite_bg_1_2;
        sfVector2f      position_bg_1_2;

        sfTexture	*texture_bg_2;
        sfSprite	*sprite_bg_2;
        sfVector2f      position_bg_2;
        sfSprite	*sprite_bg_2_2;
        sfVector2f      position_bg_2_2;

        sfTexture	*texture_bg_3;
        sfSprite	*sprite_bg_3;
        sfVector2f      position_bg_3;
        sfSprite	*sprite_bg_3_2;
        sfVector2f      position_bg_3_2;

        sfTexture	*texture_bg_4;
	sfSprite	*sprite_bg_4;
        sfVector2f      position_bg_4;
        sfSprite	*sprite_bg_4_2;
        sfVector2f      position_bg_4_2;

        sfTexture	*texture_bg_5;
	sfSprite	*sprite_bg_5;
        sfVector2f      position_bg_5;
        sfSprite	*sprite_bg_5_2;
        sfVector2f      position_bg_5_2;

        sfTexture	*texture_bg_6;
	sfSprite	*sprite_bg_6;
        sfVector2f      position_bg_6;
        sfSprite	*sprite_bg_6_2;
        sfVector2f      position_bg_6_2;

        sfTexture	*texture_bg_7;
	sfSprite	*sprite_bg_7;
        sfVector2f      position_bg_7;
        sfSprite	*sprite_bg_7_2;
        sfVector2f      position_bg_7_2;

        sfTexture	*texture_bg_8;
	sfSprite	*sprite_bg_8;
        sfVector2f      position_bg_8;
        sfSprite	*sprite_bg_8_2;
        sfVector2f      position_bg_8_2;

        sfTexture	*texture_bg_9;
	sfSprite	*sprite_bg_9;
        sfVector2f      position_bg_9;
        sfSprite	*sprite_bg_9_2;
        sfVector2f      position_bg_9_2;

};
typedef struct desert_bg_ent desert_bg_ent;


struct window_ent
{
        sfRenderWindow	*window;
        sfVideoMode	video_mode;
        sfBool          bool;
};
typedef struct window_ent window_ent;

struct event_ent
{
        sfEvent		event;
        sfClock		*clock;
        sfTime		time;
        sfIntRect	rect;
};
typedef struct event_ent event_ent;
