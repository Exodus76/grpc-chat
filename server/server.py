from asyncio import streams
from collections import UserList
from concurrent import futures
from email.mime import message
from hashlib import new
from urllib.request import Request
from wsgiref.util import request_uri
from dataclasses import dataclass
import json
import logging
import grpc

import asyncio
import genericpath
import basic_pb2
import basic_pb2_grpc

_cleanup_coroutines = []
# NUMBER_OF_REPLY = 10

# class ConnectService(basic_pb2_grpc.ConnectServicer):
#     def SayHello(self, request_iterator, context):
#         for x in request_iterator:
#             yield basic_pb2.serverResponse(message=f"received {x} from")
message_db = {"first message", "second message", "third message"}
userlist = []
all_messages = []

class ConnectService(basic_pb2_grpc.ConnectServicer):
    #new user connects and get the messages and the user id added to userList
    # implement later
    # def GetUserList(self, request_iterator, context):
    #     userlist = [(1, "dude1"),(2, "dude2"),(3,"dude3")]
    #     for x in userlist:
    #         print(x[0], x[1])
    #         yield basic_pb2.UserList(user={'id': x[0], 'name': x[1]})

    def NewUserConnect(self, request, context):
        user_info = {
            'user' : {'id': request.user.id, 'name': request.user.name},
            'status' : request.isActive
        }

        userlist.append(user_info)
        print(userlist[0]['user'])
        
        for x in all_messages:
            yield basic_pb2.Message(id= x['id'], user={'id': x['user']['id'], 'name': x['user']['name']}, message=x['message'])

    def Broadcast(self, request, context):
            message = {
                'id': request.id,
                'user' : {'id': request.user.id, 'name': request.user.name},
                'message': request.message
            }

            all_messages.append(message)

            return basic_pb2.Close()
    
    # def Broadcast(self, request, context):



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
