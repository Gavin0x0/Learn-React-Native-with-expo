#include <iostream>
#include <stdlib.h>
#include <limits.h>
using namespace std;

//#define INFINITY INT.MAX  //���ֵ ����
#define INFINITY INT_MAX  //���ֵ ����
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
    int i;
    for (i = 0; i < G.vexnum; i++)
    {
        if (G.vexs[i] == v)
            return i;
    }
    return -1;
}
//�����ڽӾ����ʾ��������������G��
bool CreateUDN(MGraph &G)
{
    int i, j, k;
    VertexType v1, v2;
    int w;
    printf("���붥����:");
    scanf("%d", &G.vexnum);
    printf("�������:");
    scanf("%d", &G.arcnum);
    //���춥��

    for (i = 0; i < G.vexnum; i++)
    {

        if (i == 0)
        {
            printf("���붥������:");
        }
        else
        {
            printf("������һ����������:");
        }

        scanf("%s", &G.vexs[i]);
    }
    //��ʼ���ڽӾ���
    for (i = 0; i < G.vexnum; i++)
    {
        for (j = 0; j < G.vexnum; j++)
        {
            G.arcs[i][j] = INFINITY;
        }
    }
    printf("�����ʼ�����");
    printf("\n\n");
    //�����ڽӾ���
    for (k = 0; k < G.arcnum; k++)
    {
        printf("����ߵ����,�յ��Ȩֵ[��', '����]");
        scanf("%s,%s,%d", &v1, &v2, &w);
        i = LocateVex(G, v1);
        j = LocateVex(G, v2);
        if (i != -1 && j != -1)
        {
            G.arcs[i][j] = w;
            G.arcs[j][i] = G.arcs[i][j];
        }
        else
        {
            printf("���ݴ���!");
        }
    }
    return true;
}

//��ʾͼG���ڽӾ���,�������������ά����
void Display(MGraph G)
{
    int i, j;
    printf("%4c", "");
    for (i = 0; i < G.vexnum; i++)
    {
        printf("%4c", G.vexs[i]);
        printf("\n");
    }
    for (i = 0; i < G.vexnum + 1; i++)
    {
        printf("%4c", "-");
        printf("\n");
    }
    for (i = 0; i < G.vexnum; i++)
    {
        printf("%s", G.vexs[i]);
        printf("%2c", "|");
        for (j = 0; j < G.vexnum; j++)
        {
            if (G.arcs[i][j] != INFINITY)
                printf("%4d", G.arcs[i][j]);
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
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