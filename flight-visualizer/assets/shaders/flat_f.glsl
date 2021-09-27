#version 330 core
//#version 300 es
precision highp float;

in vec2 uv;
in vec3 n;
out vec4 color;

uniform sampler2D tex;

void main()
{
    //color = vec4(0.4, 0.4, 0.4, 1.0);
    color = texture(tex, uv);
}

