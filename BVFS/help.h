#pragma once

#include <iostream>
#include <string>
using namespace std;
void orderItem(string order, string exp) {
	cout << "	-" <<order << " : " << exp << endl;
}
void help()
{
    cout<<"system:"<<endl;
    orderItem("login", "login in as a user");
    orderItem("logout", "logout and save the status");
    orderItem("register", "register a new user");
    orderItem("format", "format the disk fast");
    orderItem("help", "show order list");

    cout<<"folder:"<<endl;
    orderItem("ls", "list the files and folders in the current folder");
    orderItem("ll", "show the details of the files and folders in the current folder");
    orderItem("cd", "open a folder");
    orderItem("mkdir", "new a folder");
    orderItem("rename", "change oldname to a newname");
    orderItem("rmf", "delete a file or a folder");
    orderItem("pwd", "show current path ");

    cout<<"file:"<<endl;
    orderItem("touch", "new a file");
    orderItem("cat", "show the content of this file");
    orderItem("vim", "modify a file");
    orderItem("renamef", "change oldname to a newname");
    orderItem("rm", "delete a file or a folder");

    orderItem("link", "create a link to a file or a folder");
    orderItem("write", "write a file");
}
