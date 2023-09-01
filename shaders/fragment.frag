#version 330 core
out vec4 FragColor;

in vec3 vPos;
in vec2 vTex;
in vec3 vertexColor;

uniform sampler2D aTexture;
uniform sampler2D aTexture2;

void main(){
	FragColor =  mix(texture(aTexture, vTex), texture(aTexture2, vec2(vTex)), 0.2);
}
