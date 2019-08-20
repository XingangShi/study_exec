#!usr/bin/bash

# 更新子模块

# 删除原有的子模块
rm -rf git_gits markdown_note
git rm git_gits markdown_note


# 更新子模块
git submodule add --force https://github.com/xingangshi/git_gits.git git_gits
git submodule add --force https://github.com/xingangshi/markdown_note.git markdown_note
