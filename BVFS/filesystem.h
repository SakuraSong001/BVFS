#ifndef FILESYSTEM_H
#define FILESYSTEM_H
/*
*  define some const and struct
*/
#pragma once
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

/*
*   sfd num: 1024
*       size: 1M
*/

#define BLOCKSIZE 32			//块大小
#define BLOCKNUMBER 199     //块个数
#define INODEFREESTACKNUM 32    //i节点空闲栈
#define DATABLOCKFREESTACKNUM 10	//数据空闲栈
#define DISKADDRESSNUM 10        //每个i节点最多指向10块，addr[0]~addr[9]
#define DIRECTORYITEMLENGTH 20      //the length of filename or username
#define DIRECTORYITEMSIZE 16		//大小
#define NAMESIZE 8   //名字长度
#define DIRECTORYITEMNUM 10 // SFD大小
#define DIRECTORYNUM 1024
#define INODENUM 32  //
#define STARTBLOCKNUM 4////
#define TRUE 1
#define FALSE 0
//#define null ((void *)0)
#define CMDSIZE 20

/*
*  block
*  size: 1024B
*  sumSize: 990KB
*/
struct block {
	int id;
	char R[BLOCKSIZE];
};

/*
*  superBlock
*  size: 1024B
*/
struct superBlock {
	int id;
	int iNodeTotalNum;
	int iNodeFreeNum;
	//0-32
	int dataBlockTotalNum;
	int dataBlockFreeNum;

	int iNodeFreeStack[INODEFREESTACKNUM];
	int dataBlockFreeStack[DATABLOCKFREESTACKNUM];
	//int superBlockFlag;

};

/*
*  iNode
*  size: 32B
*  sumSize: 32KB
*/
struct tTime {
    char tdate[64];
    char ttime[64];
};
struct iNode {//i节点
	int id;//节点号
	int fileCount;//引用计数,表示有几个目录引用这个文件
	int size;
	//文件的大小,如果这是一个文件 这里表示文件所占的物理块个数，
	//如果是一个目录，表示该目录下已经有的文件个数,用于判断是不是超过10个了
	int fileMode;//文件类型,区分该i节点是文件(2)还是目录(1)还是用户, 1 means file, 0 means dir
	int userId;   //使用者ID
	int userRight[DIRECTORYITEMNUM];//使用者权限
	tTime time;
	int diskAddress[DISKADDRESSNUM];
	//如果这个i结点是一个文件，Addr数组表示文件各个物理块位置编号
	//如果是一个目录，表示目录的各个文件or文件夹的SFD的下标,所以一个目录下最大有NADDR个文件/目录
	//如果是NADDR，那么Inode[0]存放的是用户，addr存放的是NADDR个用户的主文件夹的i结点的下标???????
};

/*
*  directoryItem
*  size: 16B
*/
struct directoryItem {
	char name[DIRECTORYITEMLENGTH];
	int inode;
};
struct dictory {
	struct directoryItem item[BLOCKSIZE / DIRECTORYITEMSIZE];
};

struct mainFileDirectoryItem {
    char name[DIRECTORYITEMLENGTH];	//文件名字
	int iNode;			//i结点的编号,-1表示没有
	char psw[20];
	mainFileDirectoryItem() {}
	mainFileDirectoryItem(char *n, int i) {
		strcpy(name, n);
		iNode = i;
		strcpy(name, "/");
	}
};
struct mainFileDirectory {
    int iNode;
    mainFileDirectoryItem item[DIRECTORYITEMNUM];
    int sz;

    mainFileDirectory() {
        iNode = -1;
		sz = DIRECTORYITEMNUM;
		for (int i = 0; i<DIRECTORYITEMNUM; i++) {
			item[i].iNode = -1;
			strcpy(item[i].name,"/" );
			strcpy(item[i].psw,"/" );
		}
	}
	int size() {
		return sz;
	}
	void set(int id, mainFileDirectoryItem t) {
		item[id] = t;
	}
	void init() {
        iNode = -1;
		sz = DIRECTORYITEMNUM;
		for (int i = 0; i<DIRECTORYITEMNUM; i++) {
			item[i].iNode = -1;
			strcpy(item[i].name,"/" );
			strcpy(item[i].psw,"/" );
		}
	}
	mainFileDirectoryItem get(int i) {
		return item[i];
	}
	int add(char *name, int id) { //name为name的i结点id
		for (int i = 0; i<DIRECTORYITEMNUM; i++) {
			if (item[i].iNode == -1) {
				item[i].iNode = id;
				strcpy(item[i].name, name);
				//cout << "分配的SFD ID是" << i << endl;
				return i; // 返回的是SFD的位置
			}
		}
		return -1;
	}
	void drop(int i) {
		item[i].iNode = -1;
	}
};

struct symbolFileDirectoryItem {
    char name[DIRECTORYITEMLENGTH];	//文件名字
	int iNode;			//i结点的编号,-1表示没有
	symbolFileDirectoryItem() {}
	symbolFileDirectoryItem(char *n, int i) {
		strcpy(name, n);
		iNode = i;
		strcpy(name, "/");
	}
};
struct symbolFileDirectory {
    int iNode;
    symbolFileDirectoryItem item[DIRECTORYITEMNUM];
    int sz;
    int right;

    symbolFileDirectory() {
        iNode = -1;
		sz = DIRECTORYITEMNUM;
		for (int i = 0; i<DIRECTORYITEMNUM; i++) {
			item[i].iNode = -1;
			strcpy(item[i].name,"/" );
		}
	}
	int size() {
		return sz;
	}
	void set(int id, symbolFileDirectoryItem t) {
		item[id] = t;
	}
	void init() {
        iNode = -1;
		sz = DIRECTORYITEMNUM;
		for (int i = 0; i<DIRECTORYITEMNUM; i++) {
			item[i].iNode = -1;
			strcpy(item[i].name,"/" );
		}
	}
	symbolFileDirectoryItem get(int i) {
		return item[i];
	}
	int add(char *name, int id) {//name为name的i结点id
		for (int i = 0; i<DIRECTORYITEMNUM; i++) {
			if (item[i].iNode== -1) {
				item[i].iNode = id;
				strcpy(item[i].name, name);
				//cout << "分配的SFD ID是" << i << endl;
				return i; // 返回的是SFD的位置
			}
		}
		return -1;
	}
	void drop(int i) {
		item[i].iNode = -1;
	}
};

struct User {        //20+4 B
    int id;
	char username[10];
	char password[10];
};
struct i_node{
    int ID;
    int num;
}B[50];

const char SYSTEM[10] = "data.txt";	// 文件系统名称
int username;
FILE * fp;
superBlock super_block;
mainFileDirectory MFD;
symbolFileDirectory SFD;
iNode inode[INODENUM];
symbolFileDirectory sfdTable[DIRECTORYNUM];
User users[10];
User loginUser;
block Z[BLOCKNUMBER-STARTBLOCKNUM];//ont  group
struct zu{
i_node B[50];
}A[20];// free all
vector<string>PWD;

extern void login();

#endif
