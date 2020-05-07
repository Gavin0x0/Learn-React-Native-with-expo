#include <iostream>
#include <stdlib.h>
using namespace std;

#define INFINITY INT.MAX  //���ֵ ����
#define MAX_VERTEX_NUM 20 //��󶥵����
typedef char VertexType;  //ͼ�Ķ��������
typedef enum
{
    DG,
    DN,
    UDG,
    UDN
} GraphKind;                  //{����ͼ��������������ͼ��������}
bool visited[MAX_VERTEX_NUM]; //�����㷨ʹ�õ�����
typedef struct
{                                             // ͼ�Ķ���
    VertexType vexs[MAX_VERTEX_NUM];          // ������Ϣ
    int arcs[MAX_VERTEX_NUM][MAX_VERTEX_NUM]; // ������Ϣ
    int vexnum, arcnum;                       // ������������
    GraphKind kind;                           // ͼ�������־
} MGraph;

// ��ͼG�Ķ��������в��Ҷ���V�����ض�����±�
int LocateVex(MGraph G, VertexType v)
{
}
//�����ڽӾ����ʾ��������������G��
bool CreateUDN(MGraph &G)
{
}

//��ʾͼG���ڽӾ���,�������������ά����
void Display(MGraph G)
{
}

//�󶥵�v��ͼG�еĵ�һ���ڽӵ�
int FirstAdjVex(MGraph G, int v)
{
}
//�󶥵�v��ͼG���ڽӵ�w����һ���ڽӵ�
int NextAdjVex(MGraph G, int v, int w)
{
}

// ��ͼG����������ȱ���
void DFSTraverse(MGraph G)
{
}
//��v���������ͼG����������ȱ����ĵݹ��㷨
void DFS(MGraph G, int v)
{
}

//��ͼG���й�����ȱ���
void BFSTraverse(MGraph G)
{
}

int main(void)
{
    MGraph G;
    int c = 0;
    while (c != 5)
    {
        cout << endl
             << "1. �������������ڽӾ���";
        cout << endl
             << "2. ��ʾ�ڽӾ���";
        cout << endl
             << "3. ������ȱ�������";
        cout << endl
             << "4. ������ȱ�������";
        cout << endl
             << "5. �˳�";
        cout << endl
             << "ѡ����(1~5):";
        cin >> c;
        switch (c)
        {
        case 1:
            CreateUDN(G);
            break;
        case 2:
            Display(G);
            break;
        case 3:
            DFSTraverse(G);
            break;
        case 4:
            BFSTraverse(G);
            break;
        case 5:
            cout << "��������" << endl;
            break;
        }
    }
}