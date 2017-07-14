## BVFS
模拟macOS系统的文件管理，主要包含两个界面GUI，一个类似Finder的图形操作界面，方便熟悉Windows系统的用户使用本系统；CLI，一个类似Terminal的命令行操作界面，方便熟悉命令行，习惯unix系统的用户使用本系统。

## 任务分工
- 刘元兴（组长）
    - [x] 系统基本框架
    - [x] CLI命令行界面实现
      - [x] 所有命令的在CLI界面中发射的信号函数
      - [x] 所有命令的在主界面中接收的槽函数
      - [x] 所有命令的CLI界面与主界面信号槽连接
    - [x] GUI图形界面实现
      - [x] 右键新建文件／文件夹
      - [x] 新建按钮
      - [x] 重命名按钮
      - [x] 删除按钮
      - [x] 动态添加控件显示文件／文件夹
      - [x] 前进／后退
      - [x] 点击文件夹进入文件夹
      - [x] 点击文件编辑文件
      - [x] 显示当前路径
    - [x] 文件管理
      - [x] 新建文件
      - [x] 修改文件
      - [x] 删除文件
      - [x] 文件重命名
      - [x] 显示文件内容
- 周浩（核心成员）
    - [x] 目录管理
      - [x] 新建目录
      - [x] 进入目录
      - [x] 删除目录
      - [x] 目录重命名
      - [x] 显示当前目录路径
      - [x] 显示当前目录文件夹及文件 
    - [x] 用户管理
      - [x] 新建用户
      - [x] 用户登录login 
      - [x] 用户权限控制
    - [x] 成组链接法
    - [x] iNode表界面设计实现
    - [x] iNI表格数据显示
      - [x] i节点数据显示
      - [x] MFD数据显示
      - [x] SFD数据显示 
- 李志博
    - [x] 系统写回机制
    - [x] GUI界面设计
    - [x] CLI界面高亮
    - [x] CLI输入命令提取判断
    - [x] vim编辑框设计实现
- 宋寅瑜
    - [x] 系统初始化
      - [x] 系统格式化format()
      - [x] 系统装载load() 
      - [x] 管理员格式化sudoFormat()
    - [x] CLI界面设计
      - [x] 基本界面设计
      - [x] 窗口多开
      - [x] 窗口关闭
      - [x] 窗口切换
    - [x] help命令

## 预计完成功能
- 基本功能 (模拟UNIX（或LINUX，或FAT）系统的文件管理功能)
    - [x] 多用户[Loke]
    - [x] 多级目录[Loke]
    - [x] 具有login
    - [x] 系统初始化
    - [x] 文件的创建
    - [x] 文件的打开
    - [x] 文件的读
    - [x] 文件的写
    - [x] 文件关闭
    - [x] 删除文件
    - [x] 创建目录
    - [x] 改变目录
    - [x] 列出文件目录
    - [x] 退出
    - [x] 格式化

- 扩展功能 
    - 显示存储情况
    	- [ ] 显示成组链接法工作原理
	- [x] 显示各块存储内容
    - 图形界面
    	- [x] 前进
    	- [x] 后退
    	- [x] 图标显示
    	- [ ] 详细信息显示
    	- [x] 创建、删除、修改文件
    	- [x] 显示当前目录、当前文件夹
    	- [ ] 快速链接
    	- [x] 文本编辑器
    - 命令行界面
    	- [x] 操作窗口多开
	- [x] 操作窗口切换
	- [ ] 多用户同时在线操作

## 程序流程图

```flow
st=>start: 开始
e=>end: 结束
op=>operation: 选择界面
select=>condition: 图形界面？
g=>operation: 输入用户名密码登录
check=>condition: 用户名密码是否正确
login=>operation: 在命令行根据
提示进行login
check2=>condition: 判断login是否成功
并提示
o=>operation: 用户进行操作
o2=>operation: 输入命令
get=>operation: 通过槽函数和信号函数
对操作类型进行划分
send=>operation: 将参数和操作动作发送给主窗口
send2=>operation: 将参数和操作动作发送给主窗口
split=>operation: 提取命令中操作命令和目标文件夹
receive=>operation: 主窗口接受参数执行对应命令
receive2=>operation: 主窗口接受参数执行对应命令
rt=>operation: 返回执行命令结果
dis=>operation: 图形界面接收参数显示结果
rt2=>operation: 返回执行命令结果
dis2=>operation: 命令行界面接收参数显示结果
close=>condition: 没有关闭窗口
logout=>condition: 用户没有输入
logout命令
ex=>condition: 用户没有输入
exit命令


st->op->select
select(yes)->g
select(no)->login
login->check2
g->check
check(yes)->o
check(no)->g
check2(no)->login
check2(yes)->o2
get->send

o2->logout
logout(yes)->ex
logout(no)->login
ex(yes)->split->send2
ex(no)->e
send2->receive2
send->receive
receive->rt->dis->o
receive2->rt2->dis2->o2
o->close(yes)->get->send
close(no)->e
```

## i节点表结构

```c
struct node      //i结点信息
{
 int file_style;    //i结点 文件类型
 int file_length;   //i结点 文件长度
 int file_address[100];  //文件占用的物理块号。
 int limit;//打开读写权限，0表示能打开读写，1表示能打开读，2表示能打开写，3表示只能打开
 int file_UserId;
} i_node[640];
```

## 算法的总体思想
文件系统由每块1024字节的若干磁盘块组成。磁盘块由文件目录、磁盘i节点和超级块管理。采用成组链接法分配和回收block块。

## 初始化模块
#### 功能
该模块实现的功能有系统初始化和载入。系统初始化是指将已定义好的磁盘结构写入磁盘，包括用户信息、初始用户目录、超级块信息以及磁盘i位图和block块位图初始状态。系统安装是指将上次保存的文件系统重新读取出来。
#### 数据结构
该模块主要的数据结构包括磁盘块结构、i结点结构、超级块结构和目录项结构。

```c
/*磁盘块结构*/
struct block//一个块占1KB
{
 int n;      //存放空闲盘快的个数
 int free[50];    //存放空闲盘快的地址
 int a;      //盘快是否被占用标志
 char content[1000];//快上每个字节存放的符号
}memory[20449];

/*超级块结构*/
struct block_super
{
 int n;      //空闲的盘快的个数
 int free[50];    //存放进入栈中的空闲块
}super_block;

/*i结点结构*/
struct node      //i结点信息
{
 int file_style;    //i结点 文件类型
 int file_length;   //i结点 文件长度
 int file_address[100];  //文件占用的物理块号。
 int limit;//打开读写权限，0表示能打开读写，1表示能打开读，2表示能打开写，3表示只能打开
 int file_UserId;
} i_node[640];

/*目录项结构*/
struct dir      //目录项信息
{
 char file_name[10];   //文件名
 int  i_num;     //文件的结点号
 char dir_name[10];   //目录名或者说文件所在目录
}root[640];
```

## 多用户管理模块
#### 功能
该模块包括用户登录和注销。用户通过正确的用户名和密码，即可登录系统。用户可以创建文件或目录，但是只能管理自己创建的文件或目录。
#### 数据结构
本系统中用户信息包括用户id、用户名、密码。具体定义如下所示。

```c
string UserName[8] = {"user0", "user1", "user2", "user3", "user4", "user5","user6", "user7"};
string PassWord[8] = {"12345","12345","12345","12345","12345","12345","12345","12345"};
```

UserName数组下标即用户ID。
## 空闲区域管理模块
#### 功能
该模块包括i节点和block块的分配。本系统采用成组链接法对block块进行分配和回收。
#### 数据结构
该模块的主要数据结构用到磁盘块结构和超级快结构。

```c
/*磁盘块结构*/
struct block//一个块占1KB
{
 int n;      //存放空闲盘快的个数
 int free[50];    //存放空闲盘快的地址
 int a;      //盘快是否被占用标志
 char content[1000];//快上每个字节存放的符号
}memory[20449];

/*超级块结构*/
struct block_super
{
 int n;      //空闲的盘快的个数
 int free[50];    //存放进入栈中的空闲块
}super_block;
```

#### 算法
该模块采用成组链接法管理block块。将空闲块分成若干组，每50个空闲块为一组，每组的第一空闲块登记了下一组空闲块的物理盘块号和空闲块总数。如果一个组的第二个空闲块号等于0，则有特殊的含义，意味着该组是最后一组，即无下一个空闲块。将第一组放入超级快中。
分配空闲块的时候，从前往后分配，先从第一组开始分配，第一组空闲的50块分完了，才进入第二组。
释放空闲块的时候正好相反，从后往前分配，先将释放的空闲块放到第一组，第一组满了，在第一组前再开辟一组，之前的第一组变成第二组。
## 文件管理模块
#### 功能
该模块包括文件的创建、文件的打开与关闭、文件的读、文件的写、文件的删除等功能。用户可以创建不重名的文件，如果发现重名文件，则系统不允许创建。文件的读命令将文件内容显示在屏幕上。文件的写命令能添加文件内容。文件的删除命令将文件删除。
#### 数据结构
该模块主要的数据结构包括磁盘块结构、i结点结构、超级块结构和目录项结构。

```c
/*磁盘块结构*/
struct block//一个块占1KB
{
 int n;      //存放空闲盘快的个数
 int free[50];    //存放空闲盘快的地址
 int a;      //盘快是否被占用标志
 char content[1000];//快上每个字节存放的符号
}memory[20449];

/*超级块结构*/
struct block_super
{
 int n;      //空闲的盘快的个数
 int free[50];    //存放进入栈中的空闲块
}super_block;

/*i结点结构*/
struct node      //i结点信息
{
 int file_style;    //i结点 文件类型
 int file_length;   //i结点 文件长度
 int file_address[100];  //文件占用的物理块号。
 int limit;//打开读写权限，0表示能打开读写，1表示能打开读，2表示能打开写，3表示只能打开
 int file_UserId;
} i_node[640];

/*目录项结构*/
struct dir      //目录项信息
{
 char file_name[10];   //文件名
 int  i_num;     //文件的结点号
 char dir_name[10];   //目录名或者说文件所在目录
}root[640];
```

## 目录管理模块
#### 功能
该模块包括列出目录下文件、创建目录、打开目录、删除目录等功能。用户可以创建不重名的目录，如果发现重名目录，则系统不允许创建。列出文件目录命令将当前所在目录下的所有子目录及文件。打开目录命令能切换当前目录。删除目录时首先会判断所要删除的目录下是否有文件，如果有，则不允许删除，否则可将目录删除。
#### 数据结构
```c
/*目录项结构*/
struct dir      //目录项信息
{
 char file_name[10];   //文件名
 int  i_num;     //文件的结点号
 char dir_name[10];   //目录名或者说文件所在目录
}root[640];

/*i结点结构*/
struct node      //i结点信息
{
 int file_style;    //i结点 文件类型
 int file_length;   //i结点 文件长度
 int file_address[100];  //文件占用的物理块号。
 int limit;//打开读写权限，0表示能打开读写，1表示能打开读，2表示能打开写，3表示只能打开
 int file_UserId;
} i_node[640];
I节点中的文件类型为0时代表该文件是目录文件，可以进行相关目录操作。
```


