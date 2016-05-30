# Q4 - Git Workflow（10分）

## 背景 / Background
大家都知道 Git 是一个协同编程的工具。事实上 Git 能做的不仅仅是编程，从共同编辑一个文件到写一本书，就看你的想象力了。

开源项目中，经常需要把英文的信息翻译成各种语言，但是怎么协同完成这个工作呢？

下面我们就尝试通过 GitHub 来完成一个视频字幕的翻译工作。

## 文件说明
+ `README.md` 本说明
+ `How I- Use a common code repo to pivot quickly.srt` 一个视频的字幕文件
+ `[assign.md](assign.md)` 分工分配信息

## 字幕文件格式说明
字幕文件由多个时间轴组成，每一个时间轴类似下面格式：
```
	1
	00:00:00,000 --> 00:00:04,950
	[MUSIC PLAYING]  STEFAN RITTER: Hi guys.
```
* 第一行为时间轴编号
* 第二行为时间轴对应视频的时间段，也就是说视频放到某个时间的时候显示相应的字幕
* 第三行开始为字幕，这个就是显示的内容，同时也是**需要翻译的内容**。如果有多行则同时显示，通常为多语言字幕同时显示需要。
* 每个时间轴之间都有一个空行分隔开

## 翻译要求
每个根据assign.txt分配文件找到自己对应的时间轴，翻译其中的英文字幕，并把中文字幕放在英文字幕的下面一行。

下面是对第1个时间轴翻译后的结果：
```
	1
	00:00:00,000 --> 00:00:04,950
	[MUSIC PLAYING]  STEFAN RITTER: Hi guys.
	[看不懂]  STEFAN RITTER: 不会翻译.

```

**时间轴之间的空行必须要保留，不要因为翻译而把空行删掉**

## 答题要求
通过 GitHub 工作流，协同完成字幕的翻译工作

3. 查看自己所分配的时间轴
4. 新建分支，分支名为`Q4-学号-时间轴号`
4. 根据翻译要求翻译自己所属的时间轴
5. 提交翻译，如果一次提交没有完成翻译工作，可以分成多次提交
6. 把分支 push回仓库
7. 通过PR（pull request的简写术语）把翻译工作送回==原始的（老师的）==Linux101仓库
8. **PR的注释中必须填写学号、姓名信息**，否则无法给分
8. 对于正确的PR，老师会同意并合并翻译内容，完成翻译工作，也完成本试题。

## 评分标准
* 新建分支进行工作 2分
  * 新建分支，且分支名正确 1分
  * 干净分支（没有其它不相关的修改） 1分
* commit 2分
* push 分支 2分
* PR 分支 4分