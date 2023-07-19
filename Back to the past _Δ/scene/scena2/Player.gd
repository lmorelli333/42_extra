extends CharacterBody2D

var gravity = ProjectSettings.get_setting("physics/2d/default_gravity")
var acceleration = 0

func _physics_process(delta):
	velocity.x = 0
	velocity.y += gravity * delta * acceleration
	move_and_slide()

func _on_timer_timeout():
	if acceleration == 0:
		acceleration = 20
	else:
		acceleration = 0

func _on_area_2d_body_entered(body):
	if body.name == "player":
		get_tree().change_scene_to_file("res://scene/scena2/lvl_1.tscn")
