// Code generated by protoc-gen-go. DO NOT EDIT.
// source: flyteidl/admin/project.proto

package admin

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
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

// Namespace within a project commonly used to differentiate between different service instances.
// e.g. "production", "development", etc.
type Domain struct {
	Id string `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	// Display name.
	Name                 string   `protobuf:"bytes,2,opt,name=name,proto3" json:"name,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Domain) Reset()         { *m = Domain{} }
func (m *Domain) String() string { return proto.CompactTextString(m) }
func (*Domain) ProtoMessage()    {}
func (*Domain) Descriptor() ([]byte, []int) {
	return fileDescriptor_2db065ce03bf106d, []int{0}
}

func (m *Domain) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Domain.Unmarshal(m, b)
}
func (m *Domain) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Domain.Marshal(b, m, deterministic)
}
func (m *Domain) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Domain.Merge(m, src)
}
func (m *Domain) XXX_Size() int {
	return xxx_messageInfo_Domain.Size(m)
}
func (m *Domain) XXX_DiscardUnknown() {
	xxx_messageInfo_Domain.DiscardUnknown(m)
}

var xxx_messageInfo_Domain proto.InternalMessageInfo

func (m *Domain) GetId() string {
	if m != nil {
		return m.Id
	}
	return ""
}

func (m *Domain) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

// Top-level namespace used to classify different entities like workflows and executions.
type Project struct {
	Id string `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	// Display name.
	Name        string    `protobuf:"bytes,2,opt,name=name,proto3" json:"name,omitempty"`
	Domains     []*Domain `protobuf:"bytes,3,rep,name=domains,proto3" json:"domains,omitempty"`
	Description string    `protobuf:"bytes,4,opt,name=description,proto3" json:"description,omitempty"`
	// Leverage Labels from flyteidel.admin.common.proto to
	// tag projects with ownership information.
	Labels               *Labels  `protobuf:"bytes,5,opt,name=labels,proto3" json:"labels,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Project) Reset()         { *m = Project{} }
func (m *Project) String() string { return proto.CompactTextString(m) }
func (*Project) ProtoMessage()    {}
func (*Project) Descriptor() ([]byte, []int) {
	return fileDescriptor_2db065ce03bf106d, []int{1}
}

func (m *Project) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Project.Unmarshal(m, b)
}
func (m *Project) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Project.Marshal(b, m, deterministic)
}
func (m *Project) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Project.Merge(m, src)
}
func (m *Project) XXX_Size() int {
	return xxx_messageInfo_Project.Size(m)
}
func (m *Project) XXX_DiscardUnknown() {
	xxx_messageInfo_Project.DiscardUnknown(m)
}

var xxx_messageInfo_Project proto.InternalMessageInfo

func (m *Project) GetId() string {
	if m != nil {
		return m.Id
	}
	return ""
}

func (m *Project) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

func (m *Project) GetDomains() []*Domain {
	if m != nil {
		return m.Domains
	}
	return nil
}

func (m *Project) GetDescription() string {
	if m != nil {
		return m.Description
	}
	return ""
}

func (m *Project) GetLabels() *Labels {
	if m != nil {
		return m.Labels
	}
	return nil
}

type Projects struct {
	Projects             []*Project `protobuf:"bytes,1,rep,name=projects,proto3" json:"projects,omitempty"`
	XXX_NoUnkeyedLiteral struct{}   `json:"-"`
	XXX_unrecognized     []byte     `json:"-"`
	XXX_sizecache        int32      `json:"-"`
}

func (m *Projects) Reset()         { *m = Projects{} }
func (m *Projects) String() string { return proto.CompactTextString(m) }
func (*Projects) ProtoMessage()    {}
func (*Projects) Descriptor() ([]byte, []int) {
	return fileDescriptor_2db065ce03bf106d, []int{2}
}

func (m *Projects) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Projects.Unmarshal(m, b)
}
func (m *Projects) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Projects.Marshal(b, m, deterministic)
}
func (m *Projects) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Projects.Merge(m, src)
}
func (m *Projects) XXX_Size() int {
	return xxx_messageInfo_Projects.Size(m)
}
func (m *Projects) XXX_DiscardUnknown() {
	xxx_messageInfo_Projects.DiscardUnknown(m)
}

var xxx_messageInfo_Projects proto.InternalMessageInfo

func (m *Projects) GetProjects() []*Project {
	if m != nil {
		return m.Projects
	}
	return nil
}

type ProjectListRequest struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ProjectListRequest) Reset()         { *m = ProjectListRequest{} }
func (m *ProjectListRequest) String() string { return proto.CompactTextString(m) }
func (*ProjectListRequest) ProtoMessage()    {}
func (*ProjectListRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_2db065ce03bf106d, []int{3}
}

func (m *ProjectListRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ProjectListRequest.Unmarshal(m, b)
}
func (m *ProjectListRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ProjectListRequest.Marshal(b, m, deterministic)
}
func (m *ProjectListRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ProjectListRequest.Merge(m, src)
}
func (m *ProjectListRequest) XXX_Size() int {
	return xxx_messageInfo_ProjectListRequest.Size(m)
}
func (m *ProjectListRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_ProjectListRequest.DiscardUnknown(m)
}

var xxx_messageInfo_ProjectListRequest proto.InternalMessageInfo

type ProjectRegisterRequest struct {
	Project              *Project `protobuf:"bytes,1,opt,name=project,proto3" json:"project,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ProjectRegisterRequest) Reset()         { *m = ProjectRegisterRequest{} }
func (m *ProjectRegisterRequest) String() string { return proto.CompactTextString(m) }
func (*ProjectRegisterRequest) ProtoMessage()    {}
func (*ProjectRegisterRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_2db065ce03bf106d, []int{4}
}

func (m *ProjectRegisterRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ProjectRegisterRequest.Unmarshal(m, b)
}
func (m *ProjectRegisterRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ProjectRegisterRequest.Marshal(b, m, deterministic)
}
func (m *ProjectRegisterRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ProjectRegisterRequest.Merge(m, src)
}
func (m *ProjectRegisterRequest) XXX_Size() int {
	return xxx_messageInfo_ProjectRegisterRequest.Size(m)
}
func (m *ProjectRegisterRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_ProjectRegisterRequest.DiscardUnknown(m)
}

var xxx_messageInfo_ProjectRegisterRequest proto.InternalMessageInfo

func (m *ProjectRegisterRequest) GetProject() *Project {
	if m != nil {
		return m.Project
	}
	return nil
}

type ProjectRegisterResponse struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ProjectRegisterResponse) Reset()         { *m = ProjectRegisterResponse{} }
func (m *ProjectRegisterResponse) String() string { return proto.CompactTextString(m) }
func (*ProjectRegisterResponse) ProtoMessage()    {}
func (*ProjectRegisterResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_2db065ce03bf106d, []int{5}
}

func (m *ProjectRegisterResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ProjectRegisterResponse.Unmarshal(m, b)
}
func (m *ProjectRegisterResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ProjectRegisterResponse.Marshal(b, m, deterministic)
}
func (m *ProjectRegisterResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ProjectRegisterResponse.Merge(m, src)
}
func (m *ProjectRegisterResponse) XXX_Size() int {
	return xxx_messageInfo_ProjectRegisterResponse.Size(m)
}
func (m *ProjectRegisterResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_ProjectRegisterResponse.DiscardUnknown(m)
}

var xxx_messageInfo_ProjectRegisterResponse proto.InternalMessageInfo

type ProjectUpdateResponse struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ProjectUpdateResponse) Reset()         { *m = ProjectUpdateResponse{} }
func (m *ProjectUpdateResponse) String() string { return proto.CompactTextString(m) }
func (*ProjectUpdateResponse) ProtoMessage()    {}
func (*ProjectUpdateResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_2db065ce03bf106d, []int{6}
}

func (m *ProjectUpdateResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ProjectUpdateResponse.Unmarshal(m, b)
}
func (m *ProjectUpdateResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ProjectUpdateResponse.Marshal(b, m, deterministic)
}
func (m *ProjectUpdateResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ProjectUpdateResponse.Merge(m, src)
}
func (m *ProjectUpdateResponse) XXX_Size() int {
	return xxx_messageInfo_ProjectUpdateResponse.Size(m)
}
func (m *ProjectUpdateResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_ProjectUpdateResponse.DiscardUnknown(m)
}

var xxx_messageInfo_ProjectUpdateResponse proto.InternalMessageInfo

func init() {
	proto.RegisterType((*Domain)(nil), "flyteidl.admin.Domain")
	proto.RegisterType((*Project)(nil), "flyteidl.admin.Project")
	proto.RegisterType((*Projects)(nil), "flyteidl.admin.Projects")
	proto.RegisterType((*ProjectListRequest)(nil), "flyteidl.admin.ProjectListRequest")
	proto.RegisterType((*ProjectRegisterRequest)(nil), "flyteidl.admin.ProjectRegisterRequest")
	proto.RegisterType((*ProjectRegisterResponse)(nil), "flyteidl.admin.ProjectRegisterResponse")
	proto.RegisterType((*ProjectUpdateResponse)(nil), "flyteidl.admin.ProjectUpdateResponse")
}

func init() { proto.RegisterFile("flyteidl/admin/project.proto", fileDescriptor_2db065ce03bf106d) }

var fileDescriptor_2db065ce03bf106d = []byte{
	// 312 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x8c, 0x91, 0x3d, 0x4f, 0xf3, 0x30,
	0x10, 0xc7, 0x95, 0xb6, 0x4f, 0xdb, 0xe7, 0x2a, 0x75, 0xb0, 0xa0, 0x0d, 0x2f, 0x43, 0xe4, 0xa9,
	0x03, 0xc4, 0x94, 0x7e, 0x00, 0x24, 0xc4, 0x46, 0x07, 0x14, 0x89, 0x85, 0x2d, 0x89, 0xaf, 0xc1,
	0x28, 0x7e, 0x21, 0x76, 0x87, 0x7e, 0x2c, 0xbe, 0x21, 0x92, 0xe3, 0x54, 0xb4, 0x20, 0xc4, 0x66,
	0xdd, 0xef, 0xe7, 0xff, 0x9d, 0xee, 0xe0, 0x72, 0x53, 0xef, 0x1c, 0x0a, 0x5e, 0xb3, 0x9c, 0x4b,
	0xa1, 0x98, 0x69, 0xf4, 0x1b, 0x96, 0x2e, 0x35, 0x8d, 0x76, 0x9a, 0x4c, 0x3b, 0x9a, 0x7a, 0x7a,
	0x7e, 0x71, 0x64, 0x97, 0x5a, 0x4a, 0xad, 0x5a, 0x99, 0x5e, 0xc1, 0xf0, 0x41, 0xcb, 0x5c, 0x28,
	0x32, 0x85, 0x9e, 0xe0, 0x71, 0x94, 0x44, 0x8b, 0xff, 0x59, 0x4f, 0x70, 0x42, 0x60, 0xa0, 0x72,
	0x89, 0x71, 0xcf, 0x57, 0xfc, 0x9b, 0x7e, 0x44, 0x30, 0x7a, 0x6a, 0x9b, 0xfd, 0xc5, 0x27, 0x37,
	0x30, 0xe2, 0x3e, 0xdd, 0xc6, 0xfd, 0xa4, 0xbf, 0x98, 0xdc, 0xce, 0xd2, 0xc3, 0xe1, 0xd2, 0xb6,
	0x79, 0xd6, 0x69, 0x24, 0x81, 0x09, 0x47, 0x5b, 0x36, 0xc2, 0x38, 0xa1, 0x55, 0x3c, 0xf0, 0x61,
	0x5f, 0x4b, 0x24, 0x85, 0x61, 0x9d, 0x17, 0x58, 0xdb, 0xf8, 0x5f, 0x12, 0xfd, 0x14, 0xb9, 0xf6,
	0x34, 0x0b, 0x16, 0xbd, 0x83, 0x71, 0x18, 0xd9, 0x92, 0x15, 0x8c, 0xc3, 0xae, 0x6c, 0x1c, 0xf9,
	0x81, 0xe6, 0xc7, 0xbf, 0x83, 0x9b, 0xed, 0x45, 0x7a, 0x02, 0x24, 0x14, 0xd7, 0xc2, 0xba, 0x0c,
	0xdf, 0xb7, 0x68, 0x1d, 0x7d, 0x84, 0x59, 0xa7, 0x62, 0x25, 0xac, 0xc3, 0x26, 0x10, 0xb2, 0x84,
	0x51, 0xf8, 0xeb, 0xb7, 0xf3, 0x4b, 0x8f, 0xce, 0xa3, 0x67, 0x30, 0xff, 0x16, 0x66, 0x8d, 0x56,
	0x16, 0xe9, 0x1c, 0x4e, 0x03, 0x7a, 0x36, 0x3c, 0x77, 0xd8, 0x81, 0xfb, 0xd5, 0xcb, 0xb2, 0x12,
	0xee, 0x75, 0x5b, 0xa4, 0xa5, 0x96, 0xac, 0xde, 0x6d, 0x1c, 0xdb, 0x1f, 0xba, 0x42, 0xc5, 0x4c,
	0x71, 0x5d, 0x69, 0x76, 0x78, 0xfb, 0x62, 0xe8, 0xaf, 0xbe, 0xfa, 0x0c, 0x00, 0x00, 0xff, 0xff,
	0x89, 0x57, 0x6d, 0x57, 0x42, 0x02, 0x00, 0x00,
}
