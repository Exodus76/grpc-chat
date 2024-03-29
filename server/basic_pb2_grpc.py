# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

import basic_pb2 as basic__pb2


class ConnectStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.NewUserConnect = channel.unary_stream(
                '/chat.Connect/NewUserConnect',
                request_serializer=basic__pb2.FirstConnect.SerializeToString,
                response_deserializer=basic__pb2.Message.FromString,
                )
        self.GetUserList = channel.unary_stream(
                '/chat.Connect/GetUserList',
                request_serializer=basic__pb2.Close.SerializeToString,
                response_deserializer=basic__pb2.UserList.FromString,
                )
        self.Broadcast = channel.unary_unary(
                '/chat.Connect/Broadcast',
                request_serializer=basic__pb2.Message.SerializeToString,
                response_deserializer=basic__pb2.Close.FromString,
                )


class ConnectServicer(object):
    """Missing associated documentation comment in .proto file."""

    def NewUserConnect(self, request, context):
        """Sends a greeting
        rpc SayHello (HelloRequest) returns (HelloReply) {}
        to send all the messages to the new client
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def GetUserList(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def Broadcast(self, request, context):
        """broadcast the new messages
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_ConnectServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'NewUserConnect': grpc.unary_stream_rpc_method_handler(
                    servicer.NewUserConnect,
                    request_deserializer=basic__pb2.FirstConnect.FromString,
                    response_serializer=basic__pb2.Message.SerializeToString,
            ),
            'GetUserList': grpc.unary_stream_rpc_method_handler(
                    servicer.GetUserList,
                    request_deserializer=basic__pb2.Close.FromString,
                    response_serializer=basic__pb2.UserList.SerializeToString,
            ),
            'Broadcast': grpc.unary_unary_rpc_method_handler(
                    servicer.Broadcast,
                    request_deserializer=basic__pb2.Message.FromString,
                    response_serializer=basic__pb2.Close.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'chat.Connect', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class Connect(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def NewUserConnect(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_stream(request, target, '/chat.Connect/NewUserConnect',
            basic__pb2.FirstConnect.SerializeToString,
            basic__pb2.Message.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def GetUserList(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_stream(request, target, '/chat.Connect/GetUserList',
            basic__pb2.Close.SerializeToString,
            basic__pb2.UserList.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def Broadcast(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/chat.Connect/Broadcast',
            basic__pb2.Message.SerializeToString,
            basic__pb2.Close.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
