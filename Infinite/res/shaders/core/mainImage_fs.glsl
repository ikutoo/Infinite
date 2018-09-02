#version 430 core

uniform vec2 iResolution = vec2(1.0);
uniform float iTime;
uniform vec4 iDate;

in vec2 _TexCoords;

out vec4 _outFragColor;

void mainImage(out vec4 fragColor, in vec2 fragCoord);

void main()
{
	vec2 fragCoord = _TexCoords * iResolution;
	mainImage(_outFragColor, fragCoord);
}