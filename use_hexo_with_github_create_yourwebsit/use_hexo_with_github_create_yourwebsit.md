使用 hexo 和 Github 搭建属于你自己网站（自建网站）

### 1. 系统信息
```
Windows 版本：Windows 7 企业版，系统类型：64 位操作系统。
```

### 2. 必备软件安装和检查：
#### 2.1 安装 Node.js 并配置好 Node.js 环境
* Node.js 安装和配置此处不做赘述，检查安装，打开 cmd.exe，键入 `node -v` 和 `npm -v`，显示如下表示安装成功：
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas
$ node -v
v8.11.3
geekpanshi@geek2945 MINGW64 /e/selfDatas
$ npm -v
5.6.0
```

#### 2.2 安装 Git 并配置 Git 环境
* 安装好了 Git，桌面会出现 ![Git Bash图标](./images/j7YbHRg.png "Git Bash 图标")，**鼠标右键** 菜单会出现 `Git GUI Here` 和 `Gui Bash Here` 选项。

* 此时，Git 相关的操作在 `Git Bash Here` 中进行，假如要在 Windows Cmd.exe 中进行，需要在安装时选择作如下选择
![Git 安装选择`use Git from the Windows Command Prompt`](./images/UPINOS7.png "use Git from the Windows Command Prompt")

* 检查安装，打开 cmd.exe，键入 `git -v` ，显示如下表示安装成功：
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas
$ git --version
git version 2.5.1.windows.1
```

### 3. 创建 [Github](https://github.com/) 账号后登录并新建项目

#### 3.1 创建项目名规定（必须遵守）
* 项目名**必须**为 <font face="黑体" color="#FF0000" size=3>账户名称.github.io</font>（否则会出现很多不必要的麻烦），同时勾选可选选项 `Initialize this repository with a README`，如所示
![创建项目页面展示](./images/xXSjCKZ.png "创建项目示例")

#### 3.2 检查项目创建是否正常
* 创建成功后，在项目所在主页打开 `Settings` 页面，下拉可看到项目的 网址 和发布状态，如下图：
![查看项目网址信息](./images/2lo63hc.png "查看项目网址信息")

### 4. 安装 [Hexo](https://hexo.io/zh-cn/)

#### 4.1 安装 hexo
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas
$npm install hexo -g
npm WARN deprecated titlecase@1.1.2: no longer maintained
npm WARN deprecated postinstall-build@5.0.3: postinstall-build's behavior is now
 built into npm! You should migrate off of postinstall-build and use the new `pr
epare` lifecycle script with npm 5.0.0 or greater.
C:\Users\geekpanshi\AppData\Roaming\npm\hexo -* C:\Users\geekpanshi\AppData\Roaming\npm\no
de_modules\hexo\bin\hexo
npm WARN optional SKIPPING OPTIONAL DEPENDENCY: fsevents@1.2.4 (node_modules\hex
o\node_modules\fsevents):
npm WARN notsup SKIPPING OPTIONAL DEPENDENCY: Unsupported platform for fsevents@
1.2.4: wanted {"os":"darwin","arch":"any"} (current: {"os":"win32","arch":"x64"}
)

+ hexo@3.7.1
updated 2 packages in 12.315s

geekpanshi@geek2945 MINGW64 /e/selfDatas
$
```

#### 4.3 检查 hexo 安装
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas
$ hexo -v
hexo-cli: 1.1.0
os: Windows_NT 6.1.7601 win32 x64
http_parser: 2.8.0
node: 8.11.3
v8: 6.2.414.54
uv: 1.19.1
zlib: 1.2.11
ares: 1.10.1-DEV
modules: 57
nghttp2: 1.32.0
napi: 3
openssl: 1.0.2o
icu: 60.1
unicode: 10.0
cldr: 32.0
tz: 2017c
geekpanshi@geek2945 MINGW64 /e/selfDatas
$

```

#### 4.1 选择并创建项目所在目录
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas
$ pwd
/e/selfDatas
geekpanshi@geek2945 MINGW64 /e/selfDatas
$ mkdir -p demo/geekpanshi && cd demo/geekpanshi
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```

#### 4.4 在刚才创建的目录初始化 Hexo 项目（耐心等候……）
* `$ hexo init`，[Hexo 命令文档](https://hexo.io/zh-cn/docs/commands.html "Hexo 命令文档")。
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ hexo init
INFO  Cloning hexo-starter to E:\selfDatas\demo\geekpanshi
Cloning into 'E:\selfDatas\demo\geekpanshi'...
remote: Enumerating objects: 68, done.
remote: Total 68 (delta 0), reused 0 (delta 0), pack-reused 68
Unpacking objects: 100% (68/68), done.
Checking connectivity... done.
Submodule 'themes/landscape' (https://github.com/hexojs/hexo-theme-landscape.git) registered for path 'themes/landscape'
Cloning into 'themes/landscape'...
remote: Enumerating objects: 2, done.
remote: Counting objects: 100% (2/2), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 843 (delta 0), reused 0 (delta 0), pack-reused 841
Receiving objects: 100% (843/843), 2.55 MiB | 585.00 KiB/s, done.
Resolving deltas: 100% (445/445), done.
Checking connectivity... done.
Submodule path 'themes/landscape': checked out '73a23c51f8487cfcd7c6deec96ccc7543960d350'
INFO  Install dependencies
npm WARN deprecated titlecase@1.1.2: no longer maintained
npm WARN deprecated postinstall-build@5.0.3: postinstall-build's behavior is now built into npm! You should migrate off of postinstall-build and use the new `prepare` lifecycle script with npm 5                                                      .0.0 or greater.

* nunjucks@3.1.3 postinstall E:\selfDatas\demo\geekpanshi\node_modules\nunjucks
* node postinstall-build.js src

npm notice created a lockfile as package-lock.json. You should commit this file.
npm WARN optional SKIPPING OPTIONAL DEPENDENCY: fsevents@1.2.4 (node_modules\fsevents):
npm WARN notsup SKIPPING OPTIONAL DEPENDENCY: Unsupported platform for fsevents@1.2.4: wanted {"os":"darwin","arch":"any"} (current: {"os":"win32","arch":"x64"})

added 420 packages in 31.918s
INFO  Start blogging with Hexo!

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```

#### 4.5 安装相关组件
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ npm install
npm WARN optional SKIPPING OPTIONAL DEPENDENCY: fsevents@1.2.4 (node_modules\fsevents):
npm WARN notsup SKIPPING OPTIONAL DEPENDENCY: Unsupported platform for fsevents@1.2.4: wanted {"os":"darwin","arch":"any"} (current: {"os":"win32","arch":"x64"})

up to date in 5.82s

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```

### 5. 单机体验 Hexo

#### 5.1 生成静态文件
* `$ hexo generate` 或 简写的 `$ hexo g`
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ hexo generate
INFO  Start processing
INFO  Files loaded in 192 ms
INFO  Generated: index.html
INFO  Generated: archives/index.html
INFO  Generated: fancybox/jquery.fancybox.pack.js
INFO  Generated: fancybox/blank.gif
INFO  Generated: fancybox/jquery.fancybox.css
INFO  Generated: fancybox/fancybox_sprite.png
INFO  Generated: fancybox/fancybox_sprite@2x.png
INFO  Generated: fancybox/fancybox_overlay.png
INFO  Generated: fancybox/fancybox_loading@2x.gif
INFO  Generated: archives/2018/index.html
INFO  Generated: fancybox/fancybox_loading.gif
INFO  Generated: archives/2018/10/index.html
INFO  Generated: fancybox/jquery.fancybox.js
INFO  Generated: css/fonts/FontAwesome.otf
INFO  Generated: js/script.js
INFO  Generated: fancybox/helpers/jquery.fancybox-buttons.css
INFO  Generated: fancybox/helpers/jquery.fancybox-thumbs.js
INFO  Generated: fancybox/helpers/jquery.fancybox-thumbs.css
INFO  Generated: fancybox/helpers/jquery.fancybox-media.js
INFO  Generated: fancybox/helpers/jquery.fancybox-buttons.js
INFO  Generated: css/fonts/fontawesome-webfont.eot
INFO  Generated: css/style.css
INFO  Generated: fancybox/helpers/fancybox_buttons.png
INFO  Generated: css/fonts/fontawesome-webfont.ttf
INFO  Generated: css/fonts/fontawesome-webfont.svg
INFO  Generated: css/images/banner.jpg
INFO  Generated: css/fonts/fontawesome-webfont.woff
INFO  Generated: 2018/10/17/hello-world/index.html
INFO  28 files generated in 483 ms

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```

#### 5.2 启动服务器
* `$ hexo server` 或 简写的 `$ hexo s` 开启服务器，默认端口号 `4000`，可用参数 `-p number` 指定端口号。
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ hexo server -p 5000
INFO  Start processing
INFO  Hexo is running at http://localhost:5000 . Press Ctrl+C to stop.
```
#### 5.3 测试访问本地
* 打开浏览器，输入 `http://localhost:5000/` 访问本地刚开启的服务器，能够打开，说明安装正常。
![测试访问本地服务器](./images/BfTysU4.png "测试访问本地服务器")


### 6. 设置 Git 和生成本地秘钥对

#### 6.1 设置 Git 的用户和邮箱信息
* 配置属于自己的用户名和邮箱，下面所示代码中 `geekpasnhi` 和 `geekpasnhi@example.com` 替换成自己的。
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ git config --global user.name "geekpasnhi"

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ git config --global user.email "geekpasnhi@example.com"

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```

#### 6.2 生成秘钥对
* 进入 `.ssh` 目录，`cd ~/.ssh`， **假如没有**请自行创建目录并进入目录 `mkdir -p ~/.ssh && cd ~/.ssh`。
* 查看是否有秘钥 id_rsa 和 id_rsa.pub， `ls -al`（假设没有）。
* 生成秘钥(输入 `ssh-keygen -t rsa -C “geekpasnhi@example.com”`， 邮箱替换成自己的，连续回车 3 次，生成秘钥，并查看秘钥，秘钥路径 `~/.ssh`)
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ ssh-keygen -t rsa -C “geekpasnhi@example.com”
Generating public/private rsa key pair.
Enter file in which to save the key (/c/Users/S1635/.ssh/id_rsa):
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /c/Users/S1635/.ssh/id_rsa.
Your public key has been saved in /c/Users/S1635/.ssh/id_rsa.pub.
The key fingerprint is:
SHA256:xWwCGEF+Sz1FxQlzbudCb35r4Z/NfZygyyEODku3DpE “geekpasnhi@example.com”
The key's randomart image is:
+---[RSA 2048]----+
|   .++.  .=+o.   |
|   ..  o + +o    |
|    . o + = + .  |
|     o.. = o +   |
|     E. S   . +  |
|      .      = . |
|     + o . .. +.+|
|    . * + o..  *B|
|     ..+ . o. .oB|
+----[SHA256]-----+

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ ls -al ~/.ssh/
total 39
drwxr-xr-x 1 geekpanshi Domain Users    0 十月 17 06:08 ./
drwxr-xr-x 1 geekpanshi Domain Users    0 十月 17 05:58 ../
-rw-r--r-- 1 geekpanshi Domain Users  180 九月  8  2016 config
-rw-r--r-- 1 geekpanshi Domain Users 1675 十月 17 06:08 id_rsa
-rw-r--r-- 1 geekpanshi Domain Users  410 十月 17 06:08 id_rsa.pub

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```

#### 6.3 添加秘钥和 key 到 ssh-agent
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ eval "$(ssh-agent -s)"
Agent pid 24932

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ ssh-add ~/.ssh/id_rsa
Identity added: /c/Users/geekpanshi/.ssh/id_rsa (/c/Users/geekpanshi/.ssh/id_rsa)

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```

### 7. 登录 Github，绑定生成的秘钥，并验证绑定

#### 7.1 登录 Github，添加 SSH key
* 登录 Github，点击头像下的 `Settings`，选择 `SSH and GPG keys`，点击 `New SSH key`，把 `id_ras.pub` 的内容添加 ssh。如下图
![Github 添加 ssh key](./images/oc1ynC7.png "Github 添加 ssh key")

#### 7.2 验证是否添加绑定成功
```
geekpanshi@geek2945  MINGW64 /e/selfDatas/demo/geekpanshi
$ ssh -T git@github.com
Hi GeekPanshi! You've successfully authenticated, but GitHub does not provide shell access.

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```

#### 7.3 绑定失败处理
* 清除所有的绑定关系
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ ssh-add -D
All identities removed.

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```
* 删除 Github，上面绑定的 Public-key 。
* 删除目录 `~/.ssh` 下面的 id_rsa 和 id_rsa.pub，`rm -rf ~/.ssh/id_rsa ~/.ssh/id_ras.pub`。
* 重新执行 6.2、6.3、7.1、7.2 步骤。

### 8. 配置 Hexo，创建新博客，测试

#### 8.1 查看 Github 中项目的地址。
* 如下图，复制你的项目的地址，我的是 `git@github.com:geekpanshi/geekpanshi.github.io.git`。
![查看自己的 Github 项目地址](./images/UjFKeSF.png "查看自己的 Github 项目地址")

#### 8.2 配置本地初始化 Hexo 的项目 geekpanshi
* 打开根目录文件 ``， 如下代码所示配置，我的文件路径 `/e/selfDatas/demo/geekpanshi/_config.yml`
```C++
# Deployment
## Docs: https://hexo.io/docs/deployment.html
deploy:
  type: git
  repository: git@github.com:geekpanshi/geekpanshi.github.io.git
  branch: master
```

#### 8.3 新建一篇博客，"my first blob with hexo"。
* 新建一篇博客，在 cmd 执行命令：`hexo new post "博客名"`
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ hexo new post "my first blob with hexo"
INFO  Created: E:\selfDatas\demo\geekpanshi\source\_posts\my-first-blob-with-hexo.md

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```
* **创建的文件路径** 为 `E:\selfDatas\demo\geekpanshi\source\_posts\my-first-blob-with-hexo.md`。

#### 8.4 安装部署文章必备插件 hexo-deployer
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$ npm install hexo-deployer-git --save
npm WARN deprecated swig@1.4.2: This package is no longer maintained
npm WARN optional SKIPPING OPTIONAL DEPENDENCY: fsevents@1.2.4 (node_modules\fsevents):
npm WARN notsup SKIPPING OPTIONAL DEPENDENCY: Unsupported platform for fsevents@1.2.4: wanted {"os":"darwin","arch":"any"} (current: {"os":"win32","arch":"x64"})

+ hexo-deployer-git@0.3.1
added 31 packages in 13.722s

geekpanshi@geek2945 MINGW64 /e/selfDatas/demo/geekpanshi
$
```

#### 8.5 使用编辑器编辑文件
* 编辑好 `my-first-blob-with-hexo.md` 文件。文件是 `Markdown` 格式，[Markdown](https://baike.baidu.com/item/markdown/3245829?fr=aladdin)。

#### 8.6 更新文章并部署到 Github
* `$ hexo deploy -generate` 或 简写的 `$ hexo d -g`
```C++
geekpanshi@geek2945 MINGW64 /e/selfDatas/geekpanshi
$ hexo deploy -generate
INFO  Start processing
INFO  Files loaded in 103 ms
INFO  0 files generated in 164 ms
INFO  Deploying: git
INFO  Clearing .deploy_git folder...
INFO  Copying files from public folder...
INFO  Copying files from extend dirs...
On branch master
nothing to commit, working directory clean
Branch master set up to track remote branch master from git@github.com:geekpanshi/geekpanshi.github.io.git.
Everything up-to-date
INFO  Deploy done: git

geekpanshi@geek2945 MINGW64 /e/selfDatas/geekpanshi
$
```

#### 8.7 查看更新后的网站
* 部署成功后，浏览器打开你的网站，`http://用户名.github.io`, 那么将看到生成的文章，我的是 [https://geekpanshi.github.io/](https://geekpanshi.github.io/)。
* 打开成功的话，如下所示
![geekpanshi](./images/VD5kgTD.png "geekpanshi.github.io")

### 9. 结束语
* 结果上面的一系列的操作，通过 Hexo 和 Github 我们就完成了自己的第一个网站。
* 由于 Hexo 的文章，都是通过 Markdown 编辑的，所以大家还是要去学一学相关的 Markdown 的语法。

