# Torch-Cv2
- Compiles Pytorch and OpenCV2 
- Sets a tensor to device and opens an image using open cv

## Jetson Nano 
- If using Jetson Nano, you must swap the cmake files. Just copy the command below to do so.

```bash
mv CMakeLists.txt default-cmake.txt
mv jetson-cmake.txt CMakeLists.txt
```


## Steps to follow
```bash
$ mkdir -p buld && cd build
$ cnake ..
$ make 
$ ./main
```


