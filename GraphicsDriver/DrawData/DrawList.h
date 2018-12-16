#pragma once
#include <vector>
#include <array>
using std::vector;
using std::array;

typedef float Float;
typedef array<Float, 4> vector4;
typedef array<Float, 3> vector3;
typedef array<Float, 2> vector2;

typedef vector<int> DrawIdx;


class Vertex
{
	vector3  pos;
	vector2  uv;
	int   color;
};
typedef vector<Vertex> DrawVert;

class Cmd {
	int ElementSize;
	void * TextureID;
};
typedef vector<Cmd> DrawCmd;

class DrawList
{
public:
	DrawList();
	virtual ~DrawList();

public:
	DrawIdx  IdxBuffer;
	DrawVert VtxBuffer;
	DrawCmd  CmdBuffer;
};

