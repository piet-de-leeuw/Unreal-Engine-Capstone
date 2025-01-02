# Unreal-Engine-Capstone
In this project I present the game that I made as Capstone Project for the C++ and Unreale Engine Course from [The Tech Academy](https://www.learncodinganywhere.com/) Game Developer Boot Camp.
The Project was setup to stimulate a real job project as much as possible. Therefor I was given tasks in the form of user storys.

- [User-Story 1](url)
- [User-Story 2](url)
- [User-Story 3](url)
- [User-Story 4](url)
- [User-Story 5](url)

## User-Story 1
STORY: User would like a basic level with structures added for the player to navigate.

To achieve this I used UE5’s CubeGrid feature to quickly block out a level. After that I added materials and foliage to make the level look nicer.



## User-Story 2
STORY: User would like a player in the level with a basic HUD.

I started with creating the C++ Classes MyGameMode (Type: GameMode), GameHUD (Type: UserWidget) and MyPlayer (Type: Pawn). Then I created Blueprints derived from those classes (Prefixed with BP_).
After that I set up the BP_MyGameMode to use the BP_Player pawn as default and to display the GameHUD. Then in the Project settings I set the gamemode to use BP_MyGameMode.


Next I created a simple UI in the gameHUD:


After that I started working on MyPlayer class. I Added Colliders, a mesh and CameraComponents. I went for a simple cube as body because I wanted the game to feel simple and with cube like shapes. (Like the level design.)


Then I started to set up the Enhanced Input System. I’m using the Enhanced Input System so it is easy to add more inputs for different action in the rest of the project. 
I set up InputActions and InputMapping in the engine:

I Implemented the Enhanced Input System and added Action Bindings in the MyPlayer class: 



And Implemented the functions that are called by the different InputActions.
For Move the user uses A, S, W, D or the arrow keys to move the player for/backwards and sideways without rotation:

For rotation I wanted the player and camera to automatically rotate 90° if they press E (clockwise) or Q (counterclockwise) rotating smoothly from the startpoint to the endpoint.
UpdateRotation is called in Tick. The IsRotating bool makes sure rotation is only happening when it should.


Those two functions activate the UpdateRotation function and set the rotate direction:


After that I implemented Jump. For that I setup an extra UboxComponent that listens for Hit-Actions and placed it at the feet of the player so it triggers if it hits the floor, so I can stop the player from jumping while in the air:


So now the player has a playable player with a basic HUD that can walk and jump to navigate the game world.



