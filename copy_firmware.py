Import("env")
import os
from shutil import copy2

# copy firmware to compiled folder
def after_build(source,target,env):
    print("post build script")
    print('getcwd:',os.getcwd())
    source=os.getcwd()+"\\.pio\\build\\"+env['PIOENV']+"\\"+env['PROGNAME']+".bin"
    target="C:\\Users\\Lenovo\\Documents\\GitHub\\Marlin\\firmware\\"+env['PROGNAME']+".bin"
    copy2(source,target)
    print('source:',source)
    print('target:',target)

env.AddPostAction("buildprog", after_build)

