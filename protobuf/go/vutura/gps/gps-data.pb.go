// Code generated by protoc-gen-go. DO NOT EDIT.
// source: gps/gps-data.proto

package gps

import (
	context "context"
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

type GPSFix_Status int32

const (
	GPSFix_notSeen GPSFix_Status = 0
	GPSFix_noFix   GPSFix_Status = 1
	GPSFix_fix2D   GPSFix_Status = 3
	GPSFix_fix3D   GPSFix_Status = 4
)

var GPSFix_Status_name = map[int32]string{
	0: "notSeen",
	1: "noFix",
	3: "fix2D",
	4: "fix3D",
}

var GPSFix_Status_value = map[string]int32{
	"notSeen": 0,
	"noFix":   1,
	"fix2D":   3,
	"fix3D":   4,
}

func (x GPSFix_Status) String() string {
	return proto.EnumName(GPSFix_Status_name, int32(x))
}

func (GPSFix_Status) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_57f3cb42ca371711, []int{1, 0}
}

type Empty struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Empty) Reset()         { *m = Empty{} }
func (m *Empty) String() string { return proto.CompactTextString(m) }
func (*Empty) ProtoMessage()    {}
func (*Empty) Descriptor() ([]byte, []int) {
	return fileDescriptor_57f3cb42ca371711, []int{0}
}

func (m *Empty) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Empty.Unmarshal(m, b)
}
func (m *Empty) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Empty.Marshal(b, m, deterministic)
}
func (m *Empty) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Empty.Merge(m, src)
}
func (m *Empty) XXX_Size() int {
	return xxx_messageInfo_Empty.Size(m)
}
func (m *Empty) XXX_DiscardUnknown() {
	xxx_messageInfo_Empty.DiscardUnknown(m)
}

var xxx_messageInfo_Empty proto.InternalMessageInfo

type GPSFix struct {
	Time                 uint64                `protobuf:"varint,1,opt,name=time,proto3" json:"time,omitempty"`
	Status               GPSFix_Status         `protobuf:"varint,2,opt,name=status,proto3,enum=vutura.gps.GPSFix_Status" json:"status,omitempty"`
	Latitude             float32               `protobuf:"fixed32,3,opt,name=latitude,proto3" json:"latitude,omitempty"`
	Longitude            float32               `protobuf:"fixed32,4,opt,name=longitude,proto3" json:"longitude,omitempty"`
	Altitude             float32               `protobuf:"fixed32,5,opt,name=altitude,proto3" json:"altitude,omitempty"`
	Track                float32               `protobuf:"fixed32,6,opt,name=track,proto3" json:"track,omitempty"`
	Speed                float32               `protobuf:"fixed32,7,opt,name=speed,proto3" json:"speed,omitempty"`
	Climb                float32               `protobuf:"fixed32,8,opt,name=climb,proto3" json:"climb,omitempty"`
	Uncertainties        *GPSFix_Uncertainties `protobuf:"bytes,9,opt,name=uncertainties,proto3" json:"uncertainties,omitempty"`
	XXX_NoUnkeyedLiteral struct{}              `json:"-"`
	XXX_unrecognized     []byte                `json:"-"`
	XXX_sizecache        int32                 `json:"-"`
}

func (m *GPSFix) Reset()         { *m = GPSFix{} }
func (m *GPSFix) String() string { return proto.CompactTextString(m) }
func (*GPSFix) ProtoMessage()    {}
func (*GPSFix) Descriptor() ([]byte, []int) {
	return fileDescriptor_57f3cb42ca371711, []int{1}
}

func (m *GPSFix) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_GPSFix.Unmarshal(m, b)
}
func (m *GPSFix) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_GPSFix.Marshal(b, m, deterministic)
}
func (m *GPSFix) XXX_Merge(src proto.Message) {
	xxx_messageInfo_GPSFix.Merge(m, src)
}
func (m *GPSFix) XXX_Size() int {
	return xxx_messageInfo_GPSFix.Size(m)
}
func (m *GPSFix) XXX_DiscardUnknown() {
	xxx_messageInfo_GPSFix.DiscardUnknown(m)
}

var xxx_messageInfo_GPSFix proto.InternalMessageInfo

func (m *GPSFix) GetTime() uint64 {
	if m != nil {
		return m.Time
	}
	return 0
}

func (m *GPSFix) GetStatus() GPSFix_Status {
	if m != nil {
		return m.Status
	}
	return GPSFix_notSeen
}

func (m *GPSFix) GetLatitude() float32 {
	if m != nil {
		return m.Latitude
	}
	return 0
}

func (m *GPSFix) GetLongitude() float32 {
	if m != nil {
		return m.Longitude
	}
	return 0
}

func (m *GPSFix) GetAltitude() float32 {
	if m != nil {
		return m.Altitude
	}
	return 0
}

func (m *GPSFix) GetTrack() float32 {
	if m != nil {
		return m.Track
	}
	return 0
}

func (m *GPSFix) GetSpeed() float32 {
	if m != nil {
		return m.Speed
	}
	return 0
}

func (m *GPSFix) GetClimb() float32 {
	if m != nil {
		return m.Climb
	}
	return 0
}

func (m *GPSFix) GetUncertainties() *GPSFix_Uncertainties {
	if m != nil {
		return m.Uncertainties
	}
	return nil
}

type GPSFix_Uncertainties struct {
	Time                 uint64        `protobuf:"varint,1,opt,name=time,proto3" json:"time,omitempty"`
	Status               GPSFix_Status `protobuf:"varint,2,opt,name=status,proto3,enum=vutura.gps.GPSFix_Status" json:"status,omitempty"`
	Latitude             float32       `protobuf:"fixed32,3,opt,name=latitude,proto3" json:"latitude,omitempty"`
	Longitude            float32       `protobuf:"fixed32,4,opt,name=longitude,proto3" json:"longitude,omitempty"`
	Altitude             float32       `protobuf:"fixed32,5,opt,name=altitude,proto3" json:"altitude,omitempty"`
	Track                float32       `protobuf:"fixed32,6,opt,name=track,proto3" json:"track,omitempty"`
	Speed                float32       `protobuf:"fixed32,7,opt,name=speed,proto3" json:"speed,omitempty"`
	Climb                float32       `protobuf:"fixed32,8,opt,name=climb,proto3" json:"climb,omitempty"`
	XXX_NoUnkeyedLiteral struct{}      `json:"-"`
	XXX_unrecognized     []byte        `json:"-"`
	XXX_sizecache        int32         `json:"-"`
}

func (m *GPSFix_Uncertainties) Reset()         { *m = GPSFix_Uncertainties{} }
func (m *GPSFix_Uncertainties) String() string { return proto.CompactTextString(m) }
func (*GPSFix_Uncertainties) ProtoMessage()    {}
func (*GPSFix_Uncertainties) Descriptor() ([]byte, []int) {
	return fileDescriptor_57f3cb42ca371711, []int{1, 0}
}

func (m *GPSFix_Uncertainties) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_GPSFix_Uncertainties.Unmarshal(m, b)
}
func (m *GPSFix_Uncertainties) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_GPSFix_Uncertainties.Marshal(b, m, deterministic)
}
func (m *GPSFix_Uncertainties) XXX_Merge(src proto.Message) {
	xxx_messageInfo_GPSFix_Uncertainties.Merge(m, src)
}
func (m *GPSFix_Uncertainties) XXX_Size() int {
	return xxx_messageInfo_GPSFix_Uncertainties.Size(m)
}
func (m *GPSFix_Uncertainties) XXX_DiscardUnknown() {
	xxx_messageInfo_GPSFix_Uncertainties.DiscardUnknown(m)
}

var xxx_messageInfo_GPSFix_Uncertainties proto.InternalMessageInfo

func (m *GPSFix_Uncertainties) GetTime() uint64 {
	if m != nil {
		return m.Time
	}
	return 0
}

func (m *GPSFix_Uncertainties) GetStatus() GPSFix_Status {
	if m != nil {
		return m.Status
	}
	return GPSFix_notSeen
}

func (m *GPSFix_Uncertainties) GetLatitude() float32 {
	if m != nil {
		return m.Latitude
	}
	return 0
}

func (m *GPSFix_Uncertainties) GetLongitude() float32 {
	if m != nil {
		return m.Longitude
	}
	return 0
}

func (m *GPSFix_Uncertainties) GetAltitude() float32 {
	if m != nil {
		return m.Altitude
	}
	return 0
}

func (m *GPSFix_Uncertainties) GetTrack() float32 {
	if m != nil {
		return m.Track
	}
	return 0
}

func (m *GPSFix_Uncertainties) GetSpeed() float32 {
	if m != nil {
		return m.Speed
	}
	return 0
}

func (m *GPSFix_Uncertainties) GetClimb() float32 {
	if m != nil {
		return m.Climb
	}
	return 0
}

func init() {
	proto.RegisterEnum("vutura.gps.GPSFix_Status", GPSFix_Status_name, GPSFix_Status_value)
	proto.RegisterType((*Empty)(nil), "vutura.gps.Empty")
	proto.RegisterType((*GPSFix)(nil), "vutura.gps.GPSFix")
	proto.RegisterType((*GPSFix_Uncertainties)(nil), "vutura.gps.GPSFix.Uncertainties")
}

func init() { proto.RegisterFile("gps/gps-data.proto", fileDescriptor_57f3cb42ca371711) }

var fileDescriptor_57f3cb42ca371711 = []byte{
	// 367 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xdc, 0x93, 0x41, 0x8e, 0x9b, 0x40,
	0x10, 0x45, 0x83, 0x0d, 0xd8, 0x2e, 0xcb, 0x11, 0x69, 0x65, 0x41, 0x50, 0x16, 0xc8, 0x2b, 0xa4,
	0xc8, 0xa0, 0x60, 0x29, 0x07, 0x88, 0x1c, 0xb3, 0x45, 0xa0, 0x64, 0x91, 0x5d, 0x83, 0x3b, 0xa4,
	0x35, 0x40, 0x23, 0x28, 0x2c, 0xe6, 0xa6, 0x73, 0x8a, 0x39, 0xc3, 0x88, 0x6e, 0xcf, 0xd8, 0x96,
	0x7d, 0x82, 0xd9, 0xd5, 0xff, 0xf5, 0x5f, 0x09, 0x4a, 0x5d, 0x40, 0x8a, 0xa6, 0x0b, 0x8a, 0xa6,
	0xdb, 0x1c, 0x28, 0x52, 0xbf, 0x69, 0x05, 0x0a, 0x02, 0xc7, 0x1e, 0xfb, 0x96, 0xfa, 0x45, 0xd3,
	0xad, 0x67, 0x60, 0xfc, 0xaa, 0x1a, 0x7c, 0x5c, 0x3f, 0xe9, 0x60, 0x46, 0x71, 0xba, 0xe7, 0x03,
	0x21, 0xa0, 0x23, 0xaf, 0x98, 0xad, 0xb9, 0x9a, 0xa7, 0x27, 0xb2, 0x26, 0xdf, 0xc1, 0xec, 0x90,
	0x62, 0xdf, 0xd9, 0x13, 0x57, 0xf3, 0x3e, 0x86, 0x5f, 0xfc, 0xf3, 0x10, 0x5f, 0x71, 0x7e, 0x2a,
	0x03, 0xc9, 0x29, 0x48, 0x1c, 0x98, 0x97, 0x14, 0x39, 0xf6, 0x07, 0x66, 0x4f, 0x5d, 0xcd, 0x9b,
	0x24, 0x6f, 0x9a, 0x7c, 0x85, 0x45, 0x29, 0xea, 0x42, 0x35, 0x75, 0xd9, 0x3c, 0x1b, 0x23, 0x49,
	0xcb, 0x13, 0x69, 0x28, 0xf2, 0x55, 0x93, 0xcf, 0x60, 0x60, 0x4b, 0xf3, 0x07, 0xdb, 0x94, 0x0d,
	0x25, 0x46, 0xb7, 0x6b, 0x18, 0x3b, 0xd8, 0x33, 0xe5, 0x4a, 0x31, 0xba, 0x79, 0xc9, 0xab, 0xcc,
	0x9e, 0x2b, 0x57, 0x0a, 0xb2, 0x87, 0x55, 0x5f, 0xe7, 0xac, 0x45, 0xca, 0x6b, 0xe4, 0xac, 0xb3,
	0x17, 0xae, 0xe6, 0x2d, 0x43, 0xf7, 0xce, 0x1f, 0xfd, 0xbe, 0xcc, 0x25, 0xd7, 0x98, 0xf3, 0xac,
	0xc1, 0xea, 0x2a, 0xf0, 0xce, 0x17, 0xb7, 0xfe, 0x01, 0xa6, 0xfa, 0x52, 0xb2, 0x84, 0x59, 0x2d,
	0x30, 0x65, 0xac, 0xb6, 0x3e, 0x90, 0x05, 0x18, 0xb5, 0xd8, 0xf3, 0xc1, 0xd2, 0xc6, 0xf2, 0x1f,
	0x1f, 0xc2, 0x9d, 0x35, 0x3d, 0x95, 0xdb, 0x9d, 0xa5, 0x87, 0x47, 0x80, 0x28, 0x4e, 0x53, 0xd6,
	0x1e, 0x79, 0xce, 0xc8, 0x16, 0x20, 0x62, 0x18, 0xc5, 0xe9, 0x8e, 0x22, 0x25, 0x9f, 0x2e, 0xd7,
	0x21, 0x5f, 0xa2, 0x43, 0x6e, 0x37, 0x34, 0x42, 0xe9, 0x19, 0xba, 0x93, 0x70, 0x6e, 0x07, 0xfd,
	0xdc, 0xfc, 0xfd, 0x56, 0x70, 0xfc, 0xdf, 0x67, 0x7e, 0x2e, 0xaa, 0x60, 0xc8, 0x44, 0xdb, 0xb2,
	0xe0, 0x8f, 0x4c, 0xc5, 0xe3, 0x21, 0x04, 0x85, 0x08, 0x14, 0x34, 0x5e, 0x48, 0x66, 0xca, 0xeb,
	0xd8, 0xbe, 0x04, 0x00, 0x00, 0xff, 0xff, 0xb2, 0x16, 0x35, 0x9d, 0x33, 0x03, 0x00, 0x00,
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// GPSServiceClient is the client API for GPSService service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type GPSServiceClient interface {
	GetGPSData(ctx context.Context, in *Empty, opts ...grpc.CallOption) (*GPSFix, error)
	SetGPSData(ctx context.Context, in *GPSFix, opts ...grpc.CallOption) (*Empty, error)
}

type gPSServiceClient struct {
	cc *grpc.ClientConn
}

func NewGPSServiceClient(cc *grpc.ClientConn) GPSServiceClient {
	return &gPSServiceClient{cc}
}

func (c *gPSServiceClient) GetGPSData(ctx context.Context, in *Empty, opts ...grpc.CallOption) (*GPSFix, error) {
	out := new(GPSFix)
	err := c.cc.Invoke(ctx, "/vutura.gps.GPSService/GetGPSData", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *gPSServiceClient) SetGPSData(ctx context.Context, in *GPSFix, opts ...grpc.CallOption) (*Empty, error) {
	out := new(Empty)
	err := c.cc.Invoke(ctx, "/vutura.gps.GPSService/SetGPSData", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// GPSServiceServer is the server API for GPSService service.
type GPSServiceServer interface {
	GetGPSData(context.Context, *Empty) (*GPSFix, error)
	SetGPSData(context.Context, *GPSFix) (*Empty, error)
}

// UnimplementedGPSServiceServer can be embedded to have forward compatible implementations.
type UnimplementedGPSServiceServer struct {
}

func (*UnimplementedGPSServiceServer) GetGPSData(ctx context.Context, req *Empty) (*GPSFix, error) {
	return nil, status.Errorf(codes.Unimplemented, "method GetGPSData not implemented")
}
func (*UnimplementedGPSServiceServer) SetGPSData(ctx context.Context, req *GPSFix) (*Empty, error) {
	return nil, status.Errorf(codes.Unimplemented, "method SetGPSData not implemented")
}

func RegisterGPSServiceServer(s *grpc.Server, srv GPSServiceServer) {
	s.RegisterService(&_GPSService_serviceDesc, srv)
}

func _GPSService_GetGPSData_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(Empty)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GPSServiceServer).GetGPSData(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/vutura.gps.GPSService/GetGPSData",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GPSServiceServer).GetGPSData(ctx, req.(*Empty))
	}
	return interceptor(ctx, in, info, handler)
}

func _GPSService_SetGPSData_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(GPSFix)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GPSServiceServer).SetGPSData(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/vutura.gps.GPSService/SetGPSData",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GPSServiceServer).SetGPSData(ctx, req.(*GPSFix))
	}
	return interceptor(ctx, in, info, handler)
}

var _GPSService_serviceDesc = grpc.ServiceDesc{
	ServiceName: "vutura.gps.GPSService",
	HandlerType: (*GPSServiceServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "GetGPSData",
			Handler:    _GPSService_GetGPSData_Handler,
		},
		{
			MethodName: "SetGPSData",
			Handler:    _GPSService_SetGPSData_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "gps/gps-data.proto",
}