# Handwritten-Digits-Recognition-PYNQ-Z2
2020年新工科联盟-Xilinx暑期学校（Summer School）项目

**Team mates:**

Zeyuan Yang, Beijing University of Posts and Telecommunications (BUPT)

Shuo Wang, Beijing University of Posts and Telecommunications (BUPT)

Jiajun Yan, Southwest University of Science and Technology

Hao Zhou, Beijing University of Posts and Telecommunications (BUPT)

# Project Overview
本实验利用PYNQ-Z2开发板，实现基于Lenet-5神经网络结构的手写数字识别。

主要开发流程包括：Lenet-5训练、Lenet-5网络参数读取、Lenet-5推理阶段网络前传过程的HLS C程序、Vivado HLS工具生成硬件描述语言的IP核、Vivado工具使用IP核生成bit stream文件。

# Development Tools Version
使用的工具版本如下：
1. PYQN-Z2开发板；
2. PYQN-Z2系统文件：pynq_z2_v2.3；
3. Vivado HLS与Vivado：2018.3版本；
4. TensorFlow：1.12版本；

# Repository Content

## *Sourcecode* 文件夹：

1. LeNet_wrapper：HLS项目的顶层文件与头文件；

2. hw_library：存放网络推理阶段使用的函数，包括卷积操作、Pooling操作、全连接操作等；

3. lenet_op.prj：存放HLS Project；

## *ExecutableFiles* 文件夹：

1. lenet.bit：实现lenet推理的bit流文件；
2. lenet.tcl：tcl脚本文件；
3. lenet.ipynb：使用Python作为控制语言的调用程序（To be completed）；

## How to use

将*ExecutableFiles*文件夹拷贝到PYNQ-Z2开发板中，打开lenet.ipynb脚本文件运行。

