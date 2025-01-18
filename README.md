### 1. Development Tools
(1) vscode

(2) miniconda

### 2. Installing Dependencies
(1) vscode following extensions
  - Python
  - Pylance
  - Python Debugger
  - C/C++
  - C/C++ Extension Pack
  - C/C++ Themes
    
(2) miniconda pip install
  - python 3.13.1
  - setuptools 75.1.0
  - wheel 0.44.0

### 3. Settings C-Code Editing Configuration
  - Click on the Win32 position at the bottom-right of source.c to edit the configuration JSON.

  ![螢幕擷取畫面 2025-01-19 003249](https://github.com/user-attachments/assets/7a0a9a53-028b-491c-8a79-20ffc7b48794)

  - Add the c header file's includePath location.

  ![螢幕擷取畫面 2025-01-19 004017](https://github.com/user-attachments/assets/eebe61ed-b24e-4e23-a077-834a81fa0e05)

### 4. Simple Build the Install Module
  - This is origin folder

  ![螢幕擷取畫面 2025-01-19 005746](https://github.com/user-attachments/assets/de4bdcf9-0d11-44ad-9528-9bbc543c4914)
  - cmd execute build module commands : 【python setup.py build】, This is build folder

  ![螢幕擷取畫面 2025-01-19 005923](https://github.com/user-attachments/assets/06f16686-1e84-469a-8bb7-60d1d1e8356f)
  ![螢幕擷取畫面 2025-01-19 010051](https://github.com/user-attachments/assets/5ff1d5c7-789d-4908-8085-4d3f1eb9c326)

  - cmd execute install module commands : 【python setup.py install】, This is install folder

  ![螢幕擷取畫面 2025-01-19 010220](https://github.com/user-attachments/assets/69548608-20df-49cc-9921-2ac030c687f2)

### 4. Excute project.py
  - Test if the C extension module functions can be called and print the default values of string, bool, int, and double.

  ![螢幕擷取畫面 2025-01-19 010332](https://github.com/user-attachments/assets/199f4486-1089-4f97-981f-665972577ac9)


