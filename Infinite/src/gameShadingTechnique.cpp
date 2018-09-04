#include "gameShadingTechnique.h"
#include <boost/format.hpp>
#include "gameConfig.h"

CGameShadingTechnique::CGameShadingTechnique()
{
}

CGameShadingTechnique::~CGameShadingTechnique()
{
}

//*********************************************************************************
//FUNCTION:
void CGameShadingTechnique::initTechniqueV()
{
	CShadingTechnique::initTechniqueV();

	auto pTextureCopyPass = new CProgram;
	pTextureCopyPass->addShader("res/shaders/core/drawQuad_vs.glsl", VERTEX_SHADER);
	pTextureCopyPass->addShader("res/shaders/core/textureCopy_fs.glsl", FRAGMENT_SHADER);
	this->addProgram("textureCopyPass", pTextureCopyPass);
}