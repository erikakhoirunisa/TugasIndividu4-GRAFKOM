#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint depthmapShader, shadowmapShader, cubeVBO, cubeVAO, cubeEBO, cube_texture, cubeVBO2, cubeVAO2, cubeEBO2, cube_texture2, cubeVBO3, cubeVAO3, cubeEBO3, cube_texture3, planeVBO, planeVAO, planeEBO, plane_texture, stexture, stexture2, stexture3, stexture4, depthMapFBO, depthMap;
	const unsigned int SHADOW_WIDTH = 1024, SHADOW_HEIGHT = 1024;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);

	void BuildKiri();
	void BuildKanan();
	void BuildAtas();
	void DrawKiri(GLuint shader);
	void DrawKanan(GLuint shader);
	void DrawAtas(GLuint shader);
	void BuildTexturedPlane();
	void DrawTexturedPlane(GLuint shader);

	void BuildDepthMap();
	void BuildShaders();
};

