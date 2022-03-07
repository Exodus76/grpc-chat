from asyncio import streams
from concurrent import futures
from email.mime import message
import logging
from urllib.request import Request
from wsgiref.util import request_uri
import grpc

import asyncio
import genericpath
import basic_pb2
import basic_pb2_grpc

_cleanup_coroutines = []
# NUMBER_OF_REPLY = 10

class ConnectService(basic_pb2_grpc.ConnectServicer):
    def SayHello(self, request_iterator, context):
        for x in request_iterator:
            yield basic_pb2.serverResponse(message=f"received {x} from")

def serve():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    basic_pb2_grpc.add_ConnectServicer_to_server(ConnectService(), server)
    server.add_insecure_port('localhost:42069')
    server.start()
    server.wait_for_termination()

if __name__ == '__main__':
    logging.basicConfig(level=logging.INFO)
    serve()


#the async way
# async def serve():
#     server = grpc.aio.server()                                                  #creates a server with which RPCs can be services
#     basic_pb2_grpc.add_ConnectServicer_to_server(ConnectService(), server)   #
#     server.add_insecure_port('localhost:42069')                                 #port to work on
#     await server.start()
#     await server.wait_for_termination()

#     async def server_graceful_shutdown():
#         logging.info("Starting graceful shutdown...")
#         # Shuts down the server with 0 seconds of grace period. During the
#         # grace period, the server won't accept new connections and allow
#         # existing RPCs to continue within the grace period.
#         await server.stop(5)

#     _cleanup_coroutines.append(server_graceful_shutdown())
#     await server.wait_for_termination()

    

# if __name__ == '__main__':
#     logging.basicConfig(level=logging.INFO)
#     loop = asyncio.get_event_loop()
#     try:
#         loop.run_until_complete(serve())
#     finally:
#         loop.run_until_complete(*_cleanup_coroutines)
#         loop.close()
#     # asyncio.run(serve())
