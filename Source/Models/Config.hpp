#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>

struct Config
{
	int FPS;
	int WINDOW_WIDTH;
	int WINDOW_HEIGHT;
	int ACTION_CONFIRM_KEY_CODE;
	int ACTION_QUIT_KEY_CODE;
	int ACTION_MOVE_UP_KEY_CODE;
	int ACTION_MOVE_DOWN_KEY_CODE;
	int MINIMUM_WIN_SCORE;
	int MINIMUM_SCORE_DIFFERENCE;
	int SCORED_WAIT_TIME_MS;
	bool IS_HOST;
	std::string IP_ADDRESS;
	int PORT;
	int PADDLE_GAP;
	int PADDLE_WIDTH;
	int PADDLE_HEIGHT;
	int PADDLE_SPEED;
	int BALL_DIAMETER;
	int BALL_INITIAL_SPEED_X;
	int MINIMUM_BALL_INITIAL_SPEED_Y;
	int MAXIMUM_BALL_INITIAL_SPEED_Y;
	int BALL_SPEED_X_BOUNCE_INCREMENT;
	float BALL_SPEED_Y_BOUNCE_FACTOR;
	int MAXIMUM_BALL_SPEED_X;
};

extern Config config;

#endif
