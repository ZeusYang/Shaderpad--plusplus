#version 330 core
layout (location = 0) in vec3 position;
layout (location = 1) in vec2 texcoord;
layout (location = 2) in vec3 normal;

out vec2 Texcoord;
out vec3 Normal;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;
uniform mat4 normalMatrix;

void main(){
	gl_Position = projection * view * model *vec4(position,1.0f);
	Texcoord = texcoord;
	vec4 tmp = normalMatrix*vec4(normal,1.0f);
	Normal = tmp.xyz;
}