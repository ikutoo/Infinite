#version 430 core

#define MAX_CHANNEL_NUM 4

uniform float iTime;
uniform float iTimeDelta;

uniform int iFrame;

uniform vec3 iChannelResolution[MAX_CHANNEL_NUM];
uniform vec2 iResolution;
uniform vec4 iDate;
uniform vec4 iMouse;

uniform sampler2D iChannel0;
uniform sampler2D iChannel1;
uniform sampler2D iChannel2;
uniform sampler2D iChannel3;

in vec2 _TexCoords;

out vec4 _outFragColor;

void mainImage(out vec4 fragColor, in vec2 fragCoord);


void main()
{
	vec2 fragCoord = _TexCoords * iResolution;
	mainImage(_outFragColor, fragCoord);
}