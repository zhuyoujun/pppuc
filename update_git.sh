#!/bin/sh

#Author:zhuyoujun
#Date:2015/07/23
#Email:zhuyoujun0513@163.com
#Function: automatic update files to git remote repository.

###pull
echo "------update files------"
git pull origin master

###add files
echo "------add all changeing files------"
git add -A

###commit
echo "------commit------"
git commit -m " update"

###push
echo "------push to remote repository------"
git push origin master
echo "------end------"

###############################################
# 1.new machine
#	> install
#	> git config  --global user.name "GIT Admin"
#	> git config  --global user.emal obugs.net@gmail.com
#	> genernate key:
#	  > cd ~/.ssh
#	  > ssh-keygen -t rsa -C "your_email@example.com"
#	  > cat id_rsa.pub
#	> add key in your git account at website:settings->SSH keys->Add SSH key.
# 2. git clone a project. 
#	> git clone git@github.com:zhuyoujun/mitos.git
#
# 3. init a new repository
#	> git init
#	> git add -A   #add all files 
#	> git add file.type
#	> git commit -m "first commit"
#	> git remote add origin git@github.com:xxx/xxx.git
#	> git push -u origin master // first push add -u
#
###############################################
