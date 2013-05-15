#pragma once

#include <glow/Program.h>
#include <glow/Texture.h>
#include <glow/VertexArrayObject.h>

struct Vertex
{
	Vertex();
	Vertex(const glm::vec3& pos, const glm::vec2& texCoord);

	glm::vec3 position;
	glm::vec2 texCoord0;
};

class Window
{
public:
	Window();
	~Window();

	void initializeGL(const std::string& applicationPath);
	void resizeGL(int width, int height);
	void paintGL();
protected:
	void initializeShaders(const std::string& applicationPath);

	glow::Texture* texture;
	glow::Program* shaderProgram;
	glow::VertexArrayObject* vertexArrayObject;
	glm::mat4 projection;
	glm::mat4 modelView;
};