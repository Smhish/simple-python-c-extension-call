from setuptools import setup, Extension
import os

# Is attachment file the folder path
build_folder_path = os.path.join(os.path.dirname(__file__), "c_build") 
egginfo_folder_path = os.path.join(build_folder_path, "egg_info") 
dist_folder_path = os.path.join(build_folder_path, "dist") 

# create folder
os.makedirs(build_folder_path, exist_ok=True)
os.makedirs(egginfo_folder_path, exist_ok=True)
os.makedirs(dist_folder_path, exist_ok=True)


# C Expand Program Code the source file
source_module = Extension(
    "moduleName", # < module_name >
    sources=["source.c"] 
)

# 設置模組
setup(
    name="moduleName", # < module_name >
    version="1.0",
    description="setup c extension function, give to python used to.",
    ext_modules=[source_module],
    options= {
        "build": {
            "build_lib": os.path.join(build_folder_path, "lib"),
            "build_temp": os.path.join(build_folder_path, "temp"),
        },
        "egg_info": {
            "egg_base": egginfo_folder_path,
        },
        "bdist_wheel": {
            "bdist_dir": dist_folder_path,
        },
    },
)

