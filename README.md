# Handwritten-Digits-Recognition-PYNQ-Z2
2020年新工科联盟-Xilinx暑期学校（Summer School）项目

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

1. Sourcecode目录：

LeNet_wrapper：HLS项目的顶层文件与头文件；

hw_library：存放网络推理阶段使用的函数，包括卷积操作、Pooling操作、全连接操作等；

lenet_op.prj：存放HLS Project；



2020年新⼯科联盟-Xilinx暑期学校（Summer School）项⽬的介绍文件，应该包含项⽬概要，使
⽤的⼯具版本，⼩组成员列表（可选），板卡型号与外设列表，仓库⽬录介绍，作品照片等。
