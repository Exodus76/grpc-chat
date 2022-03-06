from concurrent import futures
import logging
import grpc

import genericpath
import basic_pb2
import basic_pb2_grpc

class basicService(basic_pb2_grpc.ConnectServicer):

    def SayHello(self, request, context):
        return basic_pb2.HelloReply(message='Hello, %s!' % request.name)


# def serve():
#     server = grpc.server()
#     basic_pb2_grpc.add_ConnectServicer_to_server(basicService(), server)
#     server.add_insecure_port('localhost:42069')
#     server.start()
#     server.wait_for_termination()

def serve():
    server = grpc.aio.server()                                              #creates a server with which RPCs can be services
    basic_pb2_grpc.add_ConnectServicer_to_server(basicService(), server)    #
    server.add_insecure_port('localhost:42069')                             #opens up a port
    server.start()
    server.wait_for_termination()
    

if __name__ == '__main__':
    logging.basicConfig()
    serve()
