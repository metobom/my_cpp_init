# Açıklama
CPP projeleri için template.

vscode include path:
/home/m3/meto_ws/c_cpp_libs/libtorch/include
/home/m3/meto_ws/c_cpp_libs/libtorch/include/torch/csrc/api/include
/usr/local/include/opencv4

# Kullanım
1 -``` build/CMakeLists.txt```'yi kendi projene göre düzenle.
 

2 - ``` cd build && cmake -DCMAKE_PREFIX_PATH=/home/m3/meto_ws/c_cpp_libs/libtorch . ``` ile Makefile oluştur.
 

3 -  ``` build``` dizininde ```make``` yap.


4 - Executable dosyalar ```bin``` klasöründe olacak.



# Dosya Açıklamaları
 - bin: Executable dosyaların bulunacağı dizin.
 
 
 - build: CMake ile build yapılacak olan dizin.


- data: Source kodların kullandığı resim vs. dosyaların bulunduğu dizin.


- sources: Kaynak kodlarının bulunacağı dizin. (abc.cpp, abc.c vs.)
