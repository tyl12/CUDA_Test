LDFLAGS+=`pkg-config --libs opencv`
COMMON+=`pkg-config --cflags opencv`
all:
	nvcc $(COMMON) $(LDFLAGS) -std=c++11 *.cu *.cpp done/*.cpp done/*.cu -I/home/tony/work/cuda/bookd1/CUDA_Test/demo/CUDA_Test -I/home/tony/work/cuda/bookd1/CUDA_Test/demo/CUDA_Test/done
	#nvcc $(COMMON) $(LDFLAGS) -std=c++11 CUDA_Test.cpp funset.cpp device_info.cu

