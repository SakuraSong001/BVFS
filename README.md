## BVFS
模拟实现UNIX的文件系统

## 分工
- Leeeeo
 - [ ] 系统基本框架
 - [ ] CLI界面实现
 - [ ] iNode表界面设计实现
 - [ ] 文件管理
- Loke
 - [ ] 目录管理
 - [ ] 用户管理
 - [ ] 成组链接法
- Leon
 - [ ] 系统写回机制
 - [ ] GUI界面设计
- Sakura
 - [ ] 系统初始化
 - [ ] CLI界面设计

## 预计完成功能
- 基本功能 (模拟UNIX（或LINUX，或FAT）系统的文件管理功能)
	- [x] 多用户[Loke]
	- [x] 多级目录[Loke]
	- [x] 具有login
	- [ ] 系统初始化
	- [x] 文件的创建
	- [x] 文件的打开
	- [x] 文件的读
	- [x] 文件的写
	- [x] 文件关闭
	- [ ] 删除文件
	- [ ] 创建目录
	- [ ] 改变目录
	- [ ] 列出文件目录
	- [ ] 退出
	- [ ] 格式化

- 扩展功能
 
    - 显示存储情况
    	- [ ] 显示成组链接法工作原理
    	- [x] 显示各块存储内容
    - 图形界面
    	- [ ] 前进
    	- [ ] 后退
    	- [ ] 图标显示
    	- [ ] 详细信息显示
    	- [ ] 创建、删除、修改文件
    	- [ ] 显示当前目录、当前文件夹
    	- [ ] 快速链接
    	- [ ] 文本编辑器
    - 命令行界面
    	- [x] 操作窗口多开
	   - [x] 操作窗口切换
	   - [ ] 多用户同时在线操作[??]

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


