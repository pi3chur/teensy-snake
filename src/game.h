/** @file game.h
 *  @brief Snake game engine.
 *
 *  Function process() need to be called periodically to 
 *  process internal logic. Function input() is async.
 *
 *  @author Szymon (SP)
 *  @bug -
 *  @todo -
 */

#ifndef GAME_H
#define GAME_H

typedef int (*rand_clbk)(int, int);
typedef unsigned long (*get_ms_clbk)(void);

enum game_input_key
{
    GAME_INPUT_NO_KEY = 0,
    GAME_INPUT_KEY_UP,
    GAME_INPUT_KEY_DOWN,
    GAME_INPUT_KEY_LEFT,
    GAME_INPUT_KEY_RIGHT,
    GAME_INPUT_KEY_ENTER,
};

struct game_ctx;

struct game_ctx *game_init(rand_clbk rand, get_ms_clbk get_ms);

bool game_process(struct game_ctx *game);

bool game_input(struct game_ctx *game, enum game_input_key key);

#endif /* GAME_H */