

<center> <font face="黑体" size=6 color=red>git命令速查</font></center>

> * git --version   查看git 版本

##### 1.1设置用户签名

> 说明：git首次安装必须设置用户签名，否则无法提交代码，这里的用户签名和将来登录GitHub没有任何关系
>
> git config --global user.name 用户名       设置用于签名
>
> git config --global user.email 邮箱            设置用户签名
>
> >  cat ~/.gitconfig                                        查看签名

##### 1.2初始化本地库

> git init                                                             初始化本地库
>
> > ll -a                                                              查看初始化的效果，会生成.git 文件

##### 1.3查看本地库状态

> git status														查看本地库状态
>
> > vim hellow.txt										   用vim编辑器创建文件

##### 1.4添加暂存区

> git add 文件名											  将工作区的文件添加到暂存区

##### 1.5提交本地库

> git commit -m "日志信息(如：添加了xxx文件)" 文件名										将暂存区的文件提交到本地库

