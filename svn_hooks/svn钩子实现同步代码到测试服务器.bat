@echo off
REM 名称 post-commmit.bat， 在 hooks 下目录

setlocal enableDelayedExpansion

REM 本脚本实现将 svn 服务器 A（win环境）上提交代码，自动上传到（通过pscp）到测试环境的服务
REM 器 B （linux）上，如果 svn 在 linux 环境下，可以根据代码进行调整。

REM svn 服务器上版本库的地址
set reposLoc=%1
set REV=%2

REM ------------------------------------------------------------------ 配置开始
REM svn 服务器上 putty 的路径
set puttyPath="D:\Program File（x86）\PuTTY"
REM 测试环境 putty 登录的用户名
set username=root
REM 测试环境 putty 登录的密码
set password=password
REM 测试环境 IP
set host=10.1.1.1
REM 测试环境代码的根地址
set remotRootPath=/var/www/htdocs/test
REM ------------------------------------------------------------------ 配置结束

cd /d %puttyPath%

REM 遍历提交了的代码
for /f "tokens=2 delims=" %%i in ('svnlook changed %reposLoc%') do (
    set "var=%%i"
    svnlook cat !reposLoc! !var! > temp.txt
    REM 替换掉路径 trunk
    set newPath=!var:trunk=!
    REM 通过pscp提交到测试服务器
    echo y | pscp -1 !username! -pw !password! temp !host!:!remotRootPath!!newPath!
)
