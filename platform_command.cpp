struct Buttom_State {
	bool is_down;
	bool changed;
};

enum {
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_W,
	BUTTON_S,


	BUTTON_COUNT, // Should be the last item
};

struct Input {
	Buttom_State buttons[BUTTON_COUNT];
};