Experimental Identification of Physically Feasible Dynamic Parameters of General Robot using LMI–SDP Techniques
=======================================================================================================================

**参考文献**

**Cristóvão D. Sousa and Rui Cortesão, "Physical feasibility of robot base inertial parameter identification: A linear matrix inequality approach," The International Journal of Robotics Research, vol. 33, no. 6, pp. 931–944, May. 2014, doi: [10.1177/0278364913514870](http://dx.doi.org/10.1177/0278364913514870)**

------------------------


论文作者
-------

- Cristóvão D. Sousa, [crisjss@gmail.com](mailto:crisjss@gmail.com)
- Rui Cortesão, [cortesao@isr.uc.pt](mailto:cortesao@isr.uc.pt)

环境配置与运行
-------------------

1. 安装Anaconda，并根据**environment.yaml**文件创建环境
2. 打开一个终端，激活上述创建的虚拟环境: conda activate sousa
3. 在第2步中激活虚拟环境的终端中，cd到third_party_library目录，解压pyOpt-1.2.0.zip和SymPyBotics-master.zip，然后先后进去解压后的目录，运行 python setup.py install 安装这两个库
4. cd到third_party_library目录，解压csdp6.2.0linuxx86_64.zip和DSDP5.8P4.zip，然后先后进入解压后的两个目录，进到bin目录下，运行sudo cp * /usr/bin
5. 在虚拟环境中运行jupyter-notebook
6. 注意阅读**General Robot Dynamic Parameter Identification.ipynb**文件注释，修改机器人DH参数等，以及修改优化激励轨迹起始位置等
7. 运行过程中缺少什么库就激活虚拟环境pip安装什么库

------------------------


许可
-------

Copyright (c) 2013, Cristóvão Duarte Sousa, Rui Cortesão

All rights reserved.

[![Creative Commons License](http://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png)](http://creativecommons.org/licenses/by-nc-sa/4.0/)
This work is licensed under a [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License](http://creativecommons.org/licenses/by-nc-sa/4.0/)
