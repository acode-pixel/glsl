#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <cstdio>
#include <debug.h>

void shaderCompilationCheck(unsigned int shader){
	int success;
	char infoLog[512];
	glGetShaderiv(shader, GL_COMPILE_STATUS, &success);

	if (!success){
		glGetShaderInfoLog(shader, 512, NULL, infoLog);
		printf(infoLog);
	}

}

int programLinkCheck(unsigned int program){
	int success;
	char infoLog[512];
	glGetProgramiv(program, GL_LINK_STATUS, &success);

	if (!success){
		glGetProgramInfoLog(program, 512, NULL, infoLog);
		printf(infoLog);
	}
	return success;
}

