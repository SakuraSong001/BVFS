#pragma once
#include <stdio.h>
#include<vector>
#include<string>
#include<iostream>
#include "login.h"
#include "directory.h"
using namespace std;

int createFile(string fname);
int iNodeMalloc();

void touch(string fname)
{
	while(1)
	{
		//cout << "Please input the size of the file in Byte: ";
		//cin >> fsize;
		//if (fsize <0 * BLOCKSIZE || fsize >10 * BLOCKSIZE) {
			//cout << "Error! File size should be 0~10240 !" << endl;
		//}
		if (createFile(fname)) {
			cout << "Create " << fname << " sucessfully!" << endl;
			break;
		}
		else {
			cout << "Error! Failed to create file! " << endl;
        }
	}
}
int createFile(string fname)
{
	//fsize = (fsize%BLOCKSIZE == 0) ? (fsize / BLOCKSIZE) : (fsize / BLOCKSIZE + 1);
	int getINode = iNodeMalloc();
	if (getINode == -1)
	{
		printf("error: can't touch more files!\n");
        return 0;
	}

    int iNode = getINodeOfCurrentPath();
    for(int i=0;i<DIRECTORYITEMNUM;i++) {
        if(sfdTable[inode[iNode].diskAddress[0]].item[i].name == fname) {
            cout<<"error: this dir or file has existed!"<<endl;
            return 0;
        }
    }

    inode[getINode].id = getINode;
    inode[getINode].fileCount = 0;
    inode[getINode].size = 0;
    inode[getINode].fileMode = 1;
    inode[getINode].userId = loginUser.id;
    for(int i=0;i<DIRECTORYITEMNUM;i++) {
        if(i == loginUser.id) {
            inode[getINode].userRight[i] = 7;
        } else {
            inode[getINode].userRight[i] = 0;
        }
    }
    time_t t = time(0);
    strftime(inode[getINode].time.tdate,sizeof(inode[getINode].time.tdate),"%Y/%m/%d",localtime(&t));
    strftime(inode[getINode].time.ttime,sizeof(inode[getINode].time.ttime),"%X",localtime(&t));
    inode[iNode].fileCount +=1;
    inode[iNode].size+=inode[getINode].size;
    char namex[NAMESIZE];
	strcpy(namex, fname.c_str());
    if (sfdTable[inode[iNode].diskAddress[0]].add(namex, getINode) == -1)
    {
        cout<<"error: can't make more directories!";
        return 0;
    }
	writenIn();
    return 1;

	/*for (int i = 0; i < DIRECTORYITEMNUM; i++)//
	{
		//cout << sfdtable[i].id;
		if(loginUser.id == sfdTable[i].iNode)
		//if(userid == i)
		{
			char namex[NAMESIZE];
			strcpy(namex, fname.c_str());
			if (sfdTable[i].add(namex, saveid) == -1)
			{
                cout<<"error: can't touch more file!";
				return 0;
			}
			break;
		}
	}

	inode[saveid].userId = loginUser.id;
	inode[saveid].fileCount = 0;
	inode[saveid].fileMode = 2;
	inode[saveid].id = saveid;
	inode[loginUser.id].size++;
	for (int i = 0; i < DISKADDRESSNUM; i++)
	{
		if (inode[loginUser.id].diskAddress[i] == -1)
		{
			inode[loginUser.id].diskAddress[i] = saveid;
		}

	}
	writenIn();*/
	return 1;
}

void vim(string file) {

    int iNode = getINodeOfCurrentPath();
    bool flag = 0;
    for(int i=0;i<DIRECTORYITEMNUM;i++) {
        if(sfdTable[inode[iNode].diskAddress[0]].item[i].name == file) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        cout <<"error: not exist this file!"<<endl;
        return ;
    }

    //cout<<file<<endl;
    string content;
    getline(cin,content);
    int diskAddress[100];
    memset(diskAddress,-1,sizeof(diskAddress));
    groupblock(content,diskAddress);

    int fileINode;
    for(int i=0;i<DIRECTORYITEMNUM;i++) {
        if(sfdTable[inode[iNode].diskAddress[0]].item[i].name == file) {
            fileINode = sfdTable[inode[iNode].diskAddress[0]].item[i].iNode;
            break;
        }
    }

    int sum=0;
    for(int i=0;i<100;i++) {
        if(diskAddress[i]!=-1) {
            sum++;
        }
    }

    cout<<"sum:"<<sum<<endl;
    if(sum > DISKADDRESSNUM) {
        cout<<"error: this file is too large!"<<endl;
        return ;
    } else {
        for(int i=0;i<sum;i++) {
            inode[fileINode].diskAddress[i] = diskAddress[i];
        }
        writenIn();
    }
}

void renamef(string dir1,string dir2) {
    //cout<<dir1<<dir2<<endl;
    int iNode = getINodeOfCurrentPath();
    for(int i=0;i<DIRECTORYITEMNUM;i++) {
        //cout<<sfdTable[iNode].item[i].name<<endl;
        //cout<<strlen(sfdTable[iNode].item[i].name)<<endl;
        if(strcmp(sfdTable[inode[iNode].diskAddress[0]].item[i].name, dir1.c_str()) == 0) {
            strcpy(sfdTable[inode[iNode].diskAddress[0]].item[i].name, dir2.c_str());
            break;
        }
    }
    writenIn();
}

void cat(string file) {
    //cout<<file<<endl;
    int iNode = getINodeOfCurrentPath();

    int fileINode;
    for(int i=0;i<DIRECTORYITEMNUM;i++) {
        if(sfdTable[inode[iNode].diskAddress[0]].item[i].name == file) {
            fileINode = sfdTable[inode[iNode].diskAddress[0]].item[i].iNode;
            break;
        }
    }

    for(int i=0;i<DISKADDRESSNUM;i++) {
        if(inode[fileINode].diskAddress[i] != -1) {
            //cout<<inode[fileINode].diskAddress[i]<<endl;
            printf("%s",Z[inode[fileINode].diskAddress[i]].R);
            //puts(Z[inode[fileINode].diskAddress[i]].R);
        }

    }
    cout<<endl;
}
