<center> <font face="黑体" size=6 color=red>git命令速查</font></center>

> * git --version   查看git 版本

#### 1基本指令

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
>
> git add 文件名                                              将工作区的所有文件添加到暂存区

##### 1.5提交本地库

> git commit -m "日志信息(如：添加了xxx文件)" 文件名										将暂存区的文件提交到本地库

##### 1.6历史版本

>###### 1.6.1查看历史版本
>
>> git reflog                                      查看版本信息，最前面的为版本 id
>
>> git log                                           查看版本详细信息

> ###### 1.6.2版本穿梭
>
> > git reset -hard 版本号                   切换到某个版本(底层移动的是HEAD指针)
> >

#### 2分支操作

##### 2.1查看分支

> git branch -v                                          查看分支

##### 2.2创建分支

> git branch 分支名                                  创建分支(创建的时候会复制主分支的内容,本质是多创建一个指针)

##### 2.3切换分支

> git checkout 分支名                                切换到某个分支(本质是移动HEAD指针)

##### 2.4合并分支

> git merge 分支名                                     合并分支
>
> > <b><u>产生冲突</u></b>：后面状态为(master|MERGING)，原因是两个分支在同一个文件的同一个位置有两套完全不同的修改，git 无法决定使用哪一个进行替换，需人为决定新代码内容。
> >
> > <b><u>解决冲突：</u></b> 编辑有冲突的文件，删除特殊符号，决定要使用的内容<font color=red><<<<<HEAD </font> 当前分支的代码<font color=red>===========</font> 合并过来的代码<font color=red>>>>>>>hot_dev</font>。并将修改后的文件添加到暂存区后执行提交(<u>此时git commit 不能带文件名</u>)

#### 3Github操作

##### 3.1创建远程仓库别名

> git remote -v                                          查看当前所有远程地址别名

