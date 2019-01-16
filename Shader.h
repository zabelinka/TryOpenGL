#ifndef OPENGLPARTICLES_SHADER_H
#define OPENGLPARTICLES_SHADER_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <GL/glew.h> // Подключаем glew для того, чтобы получить все необходимые заголовочные файлы OpenGL



class Shader {
public:
    // Конструктор считывает и собирает шейдер
    Shader(const GLchar* vertexShaderPath, const GLchar* fragmentShaderPath);

    // Использование программы
    void Use();

    GLuint getProgram();

private:
    // Идентификатор программы
    GLuint Program;
};


#endif //OPENGLPARTICLES_SHADER_H
