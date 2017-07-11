#pragma once

#include <iostream>
#include <string>
using namespace std;
string orderItem(string order, string exp) {
    string orderR="";
    orderR+="	-" ;
    orderR+=order;
    orderR+=" : ";
    orderR+=exp;
    orderR+="\n";
    cout << "	-" <<order << " : " << exp << endl;
    return orderR;
}
string help()
{
    string helpReturn="";
    helpReturn+="system:";
    cout<<"system:"<<endl;
    helpReturn+=orderItem("login", "login in as a user");
    helpReturn+=orderItem("logout", "logout and save the status");
    helpReturn+=orderItem("register", "register a new user");
    helpReturn+=orderItem("format", "format the disk fast");
    helpReturn+=orderItem("help", "show order list");

    helpReturn+="folder:";
    cout<<"folder:"<<endl;
    helpReturn+=orderItem("ls", "list the files and folders in the current folder");
    helpReturn+=orderItem("ll", "show the details of the files and folders in the current folder");
    helpReturn+=orderItem("cd", "open a folder");
    helpReturn+=orderItem("mkdir", "new a folder");
    helpReturn+=orderItem("rename", "change oldname to a newname");
    helpReturn+=orderItem("rmf", "delete a file or a folder");
    helpReturn+=orderItem("pwd", "show current path ");

    helpReturn+="file:";
    cout<<"file:"<<endl;
    helpReturn+=orderItem("touch", "new a file");
    helpReturn+=orderItem("cat", "show the content of this file");
    helpReturn+=orderItem("vim", "modify a file");
    helpReturn+=orderItem("renamef", "change oldname to a newname");
    helpReturn+=orderItem("rm", "delete a file or a folder");

    helpReturn+=orderItem("link", "create a link to a file or a folder");
    helpReturn+=orderItem("write", "write a file");
    return helpReturn;
}
