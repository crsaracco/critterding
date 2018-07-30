#ifndef SC_GRAPHICS_H_INCLUDED
#define SC_GRAPHICS_H_INCLUDED

#include "be_graphics_system.h"
#include "filesystem/be_filesystem.h"
#include "common/be_model_system.h"

class ScGraphics
{
public:
	ScGraphics( std::shared_ptr<BeGraphicsSystem> graphicsSystem, BeFilesystem& filesystem);
	~ScGraphics();

	void resetBrightTexture( const int w, const int h );

	std::shared_ptr<BeGraphicsSystem> m_graphicsSystem;

	//Default Shader

	std::shared_ptr<BeGraphicsEffect> m_effect;
	std::shared_ptr<BeGraphicsEffect> m_critter_effect;
	GLint m_v_inv;
	GLint m_tex2Loc;
// 	std::shared_ptr<BeGraphicsEffect> m_glsl_effect;

	//DOF Shaders

	std::shared_ptr<BeGraphicsEffect> m_dofSceneEffect;
	std::shared_ptr<BeGraphicsEffect> m_dofSkyboxEffect;
	std::shared_ptr<BeGraphicsEffect> m_dofDownsampleEffect;
	std::shared_ptr<BeGraphicsEffect> m_dofFilterXEffect;
	std::shared_ptr<BeGraphicsEffect> m_dofFilterYEffect;
	std::shared_ptr<BeGraphicsEffect> m_dofFinalEffect;

	std::shared_ptr<BeTexture2D> m_dofSceneTexture;
	std::shared_ptr<BeTexture2D> m_dofDownsampleTexture[3];
	std::shared_ptr<BeFramebuffer> m_dofSceneFramebuffer;
	std::shared_ptr<BeFramebuffer> m_dofDownsampleFramebuffer[3];


	//HDR Shaders

	std::shared_ptr<BeGraphicsEffect> m_luminanceEffect2;
	std::shared_ptr<BeGraphicsEffect> m_luminanceEffect3;
	std::shared_ptr<BeGraphicsEffect> m_brightEffect;
	std::shared_ptr<BeGraphicsEffect> m_gaussianBlurHorizonalEffect;
	std::shared_ptr<BeGraphicsEffect> m_gaussianBlurVerticalEffect;
	std::shared_ptr<BeGraphicsEffect> m_tonemapEffect;
	std::shared_ptr<BeGraphicsEffect> m_addRgbEffect;


	std::shared_ptr<BeTexture2D> m_sceneTexture;
	std::shared_ptr<BeRenderbuffer> m_sceneRenderbuffer;
	std::shared_ptr<BeFramebuffer> m_sceneFramebuffer;


	std::shared_ptr<BeFramebuffer> m_brightFramebuffer;
	std::shared_ptr<BeFramebuffer> m_tonemapFramebuffer;
	std::shared_ptr<BeFramebuffer> m_gaussianFramebuffer[2];

	std::shared_ptr<BeFramebuffer> m_luminanceFramebuffer2;

	std::shared_ptr<BeFramebuffer> m_luminanceFramebuffer3[32];


	std::shared_ptr<BeTexture2D> m_brightTexture;
	std::shared_ptr<BeTexture2D> m_tonemapTexture;
	std::shared_ptr<BeTexture2D> m_gaussianTexture[2];

	std::shared_ptr<BeTexture2D> m_luminanceTexture2;

	std::shared_ptr<BeTexture2D> m_luminanceTexture3[32];

private:
	int width_prev;
	int height_prev;



};

#endif