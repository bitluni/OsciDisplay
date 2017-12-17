#pragma once
#include "Matrix.h"

template<class Graphics>
class Mesh
{
  public:
  int vertexCount;
  int triangleCount;
  int edgeCount;
  const float (*vertices)[3];
  short (*tvertices)[2];
  const unsigned short (*triangles)[3];
  const unsigned short (*edges)[2];
  
  Mesh(int vertCount, const float verts[][3], int edgeCount_ = 0, const unsigned short edges_[][2] = 0, int triCount = 0, const unsigned short tris[][3] = 0)
    :vertexCount(vertCount),
    vertices(verts),
    edgeCount(edgeCount_),
    edges(edges_),
    triangleCount(triCount),
    triangles(tris)
  {
    tvertices = (short(*)[2]) malloc(sizeof(short) * 2 * vertexCount);
  }

  ~Mesh()
  {
    delete(tvertices);
  }

  void drawTriangles(Graphics &g)
  {
    for(int i = 0; i < triangleCount; i++)
    {
      g.line(tvertices[triangles[i][0]][0], tvertices[triangles[i][0]][1], tvertices[triangles[i][1]][0], tvertices[triangles[i][1]][1]);
      g.line(tvertices[triangles[i][1]][0], tvertices[triangles[i][1]][1], tvertices[triangles[i][2]][0], tvertices[triangles[i][2]][1]);
      g.line(tvertices[triangles[i][2]][0], tvertices[triangles[i][2]][1], tvertices[triangles[i][0]][0], tvertices[triangles[i][0]][1]);
    }
  }

  void drawEdges(Graphics &g)
  {
    for(int i = 0; i < edgeCount; i++)
    {
      g.line(tvertices[edges[i][0]][0], tvertices[edges[i][0]][1], tvertices[edges[i][1]][0], tvertices[edges[i][1]][1]);
    }
  }
    
  void drawVertices(Graphics &g)
  {
    for(int i = 0; i < vertexCount; i++)
      g.dot(tvertices[i][0], tvertices[i][1]);
  }

  void transform(Matrix m)
  {
    for(int i = 0; i < vertexCount; i++)
    {
      Vector v = m * Vector(vertices[i][0], vertices[i][1], vertices[i][2]);
      tvertices[i][0] = v[0] / v[3];
      tvertices[i][1] = v[1] / v[3];
    }
  }
};

