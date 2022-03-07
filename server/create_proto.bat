echo "creating cpp grpc stub"
start protoc -I=. --grpc_out=. --plugin=protoc-gen-grpc=C:\Users\subaru\Desktop\clone\vcpkg\installed\x64-windows\tools\grpc\grpc_cpp_plugin.exe basic.proto
echo "creating cpp general stub"
start protoc -I=. --cpp_out=. basic.proto
echo "creating python stub"
start python -m grpc_tools.protoc -I. --python_out=. --grpc_python_out=. basic.proto
@REM pause asks for input before end