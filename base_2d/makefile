CC=g++
CFLAGS=-c  -I".\includes" -I".\glm"  -std=gnu++11
ifeq ($(OS),Windows_NT)
	LDFLAGS=  -lglew32 -lSOIL -lglfw3 -lopengl32 -static-libgcc -static-libstdc++  -l:libgdi32.a -L".\gl"
else
	LDFLAGS=  -lGLEW -lSOIL -lGL `pkg-config --cflags glfw3` `pkg-config --static --libs glfw3`
endif
SOURCES= main.cpp glresourses.cpp gl_texture_atlas.cpp gl_game_state_spinners.cpp gl_render_target.cpp glscene.cpp gl_spinner.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=game

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC)  $(OBJECTS) -o $@ $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
