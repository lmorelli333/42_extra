extends Node

@export var fullscreen_flag = false
@export var previous_window = DisplayServer.window_get_mode()
@export var current_window = DisplayServer.window_get_mode()
var player_health = 100
var energy = 5
var lv_counter = 0
var pause = false
var pong_player = 0
var pong_enemy = 0
var pong_time = 120

# Called when the node enters the scene tree for the first time.
func fullscreen_pressed():
		current_window = DisplayServer.window_get_mode()
		if current_window != 4:
			previous_window = current_window
			fullscreen_flag = true
			DisplayServer.window_set_mode(4)
		else:
			if previous_window == 4:
				previous_window = 2
			fullscreen_flag = false
			DisplayServer.window_set_mode(previous_window)
