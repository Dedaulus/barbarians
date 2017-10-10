#ifndef GL_I_GL_GAME_STATE_ARENA
#define GL_I_GL_GAME_STATE_ARENA
#include "i_gl_game_state.h"
#include "gl_light.h"
#include "gl_render_target.h"
#include "gl_model.h"
#include "gl_character.h"
class IGlGameStateArena: public IGlGameState
{
public:
    IGlGameStateArena(std::map<std::string,GLuint> &shader_map,
        std::map<std::string,std::shared_ptr<glRenderTarget>> * render_target_map,
        std::map<std::string,std::shared_ptr<IGlModel>> * models_map,
        size_t screen_width,
        size_t screen_height);
    ~IGlGameStateArena(){}
    void Draw();
    void Process();
private:
    std::vector <std::shared_ptr<glModel> > Models;
    std::vector <std::shared_ptr<Animation> > Animations;
    std::map<std::string,std::shared_ptr<glRenderTarget>> * m_render_target_map;
};

#endif