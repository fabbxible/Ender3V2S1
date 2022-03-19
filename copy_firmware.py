Import("env")
import os
from shutil import copy2

#print("post build script")

# copy firmware to compiled folder
def after_build(source,target,env):
    #print("after_build")

    source = "C:\\Users\\Lenovo\\Documents\\GitHub\\Marlin_Ender3v2\\.pio\\build\\" + env['PIOENV'] + "\\" + env['PROGNAME'] + ".bin"
    destination = "C:\\Users\\Lenovo\\Documents\\GitHub\\Marlin\\firmware\\" + env['PROGNAME'] + ".bin"
    copy2(source, destination)

env.AddPostAction("buildprog", after_build)

