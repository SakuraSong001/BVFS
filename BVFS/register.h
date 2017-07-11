#pragma once
#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include "login.h"
#include "filesystem.h"
using namespace std;

int addUser(char *name, char *psw);
void userRegister();

/*
*  when register a user, we must alloc a dir
*/
void testAndRegister() {
    if(strcmp(loginUser.username, "root") != 0) {
        cout<<"error: you don't have this right!"<<endl;
        return ;
    }
//    userRegister();
}
bool userRegister(string n,string p) {
	char name[NAMESIZE];
	char psw[NAMESIZE];
    int i;
    for( i=0;i<n.length();i++)
        name[i] = n[i];
    name[i] = '\0';
    for( i=0;i<p.length();i++)
        psw[i] = p[i];
    psw[i] = '\0';
//    printf("%s\n",p);
//    name=n.c_str();
//    psw=p.c_str();
//	cout << "new username(integer or character): ";
//	cin >> name;
//	cout << "set password(integer or character): ";
//	cin >> psw;
	if (addUser(name, psw) != -1) {
		cout << "Register Successfully!" << endl;
//        char tmp[2];
//		gets(tmp);
        return true;
	}
	else {
		cout << "error: " << endl;
        return false;
	}
}
/*
* addUser()
* add this user to MFD
*/
int addUser(char *name, char *psw) {
	int i;
	for (i = 0; i < DIRECTORYITEMNUM; i++)
	{
		if (MFD.item[i].iNode == -1) break;
	}
	if (i >= DIRECTORYITEMNUM) return -1;
	else
	{

		strcpy(MFD.item[i].name, name);
		strcpy(MFD.item[i].psw, psw);
		MFD.item[i].iNode = iNodeMalloc();//表示目录
		//写节点
		inode[MFD.item[i].iNode].id = MFD.item[i].iNode;
		inode[MFD.item[i].iNode].fileCount = 0;
		inode[MFD.item[i].iNode].size = 0;
		inode[MFD.item[i].iNode].fileMode = 1;//目录
		inode[MFD.item[i].iNode].userId = loginUser.id;

		//对父节点进行操作
		inode[1].fileCount++;
		for (int i = 0; i < DISKADDRESSNUM; i++)
		{
			if (inode[1].diskAddress[i] == -1)
			{
				inode[1].diskAddress[i] = MFD.item[i].iNode;
				break;
			}

		}
		//对其分配一个sfd
		int sfd = sfdMalloc(MFD.item[i].iNode);
		sfdTable[sfd].iNode = MFD.item[i].iNode;
	}
	writenIn();
}



