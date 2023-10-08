// Code generated by protoc-gen-go. DO NOT EDIT.
// source: flyteidl/plugins/spark.proto

package plugins

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	_struct "github.com/golang/protobuf/ptypes/struct"
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

type SparkApplication_Type int32

const (
	SparkApplication_PYTHON SparkApplication_Type = 0
	SparkApplication_JAVA   SparkApplication_Type = 1
	SparkApplication_SCALA  SparkApplication_Type = 2
	SparkApplication_R      SparkApplication_Type = 3
)

var SparkApplication_Type_name = map[int32]string{
	0: "PYTHON",
	1: "JAVA",
	2: "SCALA",
	3: "R",
}

var SparkApplication_Type_value = map[string]int32{
	"PYTHON": 0,
	"JAVA":   1,
	"SCALA":  2,
	"R":      3,
}

func (x SparkApplication_Type) String() string {
	return proto.EnumName(SparkApplication_Type_name, int32(x))
}

func (SparkApplication_Type) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_ca8a069b9820144a, []int{0, 0}
}

type SparkApplication struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *SparkApplication) Reset()         { *m = SparkApplication{} }
func (m *SparkApplication) String() string { return proto.CompactTextString(m) }
func (*SparkApplication) ProtoMessage()    {}
func (*SparkApplication) Descriptor() ([]byte, []int) {
	return fileDescriptor_ca8a069b9820144a, []int{0}
}

func (m *SparkApplication) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SparkApplication.Unmarshal(m, b)
}
func (m *SparkApplication) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SparkApplication.Marshal(b, m, deterministic)
}
func (m *SparkApplication) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SparkApplication.Merge(m, src)
}
func (m *SparkApplication) XXX_Size() int {
	return xxx_messageInfo_SparkApplication.Size(m)
}
func (m *SparkApplication) XXX_DiscardUnknown() {
	xxx_messageInfo_SparkApplication.DiscardUnknown(m)
}

var xxx_messageInfo_SparkApplication proto.InternalMessageInfo

// Custom Proto for Spark Plugin.
type SparkJob struct {
	ApplicationType     SparkApplication_Type `protobuf:"varint,1,opt,name=applicationType,proto3,enum=flyteidl.plugins.SparkApplication_Type" json:"applicationType,omitempty"`
	MainApplicationFile string                `protobuf:"bytes,2,opt,name=mainApplicationFile,proto3" json:"mainApplicationFile,omitempty"`
	MainClass           string                `protobuf:"bytes,3,opt,name=mainClass,proto3" json:"mainClass,omitempty"`
	SparkConf           map[string]string     `protobuf:"bytes,4,rep,name=sparkConf,proto3" json:"sparkConf,omitempty" protobuf_key:"bytes,1,opt,name=key,proto3" protobuf_val:"bytes,2,opt,name=value,proto3"`
	HadoopConf          map[string]string     `protobuf:"bytes,5,rep,name=hadoopConf,proto3" json:"hadoopConf,omitempty" protobuf_key:"bytes,1,opt,name=key,proto3" protobuf_val:"bytes,2,opt,name=value,proto3"`
	ExecutorPath        string                `protobuf:"bytes,6,opt,name=executorPath,proto3" json:"executorPath,omitempty"`
	// Databricks job configuration.
	// Config structure can be found here. https://docs.databricks.com/dev-tools/api/2.0/jobs.html#request-structure.
	DatabricksConf *_struct.Struct `protobuf:"bytes,7,opt,name=databricksConf,proto3" json:"databricksConf,omitempty"`
	// Databricks access token. https://docs.databricks.com/dev-tools/api/latest/authentication.html
	// This token can be set in either flytepropeller or flytekit.
	DatabricksToken string `protobuf:"bytes,8,opt,name=databricksToken,proto3" json:"databricksToken,omitempty"`
	// Domain name of your deployment. Use the form <account>.cloud.databricks.com.
	// This instance name can be set in either flytepropeller or flytekit.
	DatabricksInstance string `protobuf:"bytes,9,opt,name=databricksInstance,proto3" json:"databricksInstance,omitempty"`
	// The driver spec, used in place of the task's pod template
	DriverSpec *RoleSpec `protobuf:"bytes,10,opt,name=driverSpec,proto3" json:"driverSpec,omitempty"`
	// The executor spec, used in place of the task's pod template
	ExecutorSpec         *RoleSpec `protobuf:"bytes,11,opt,name=executorSpec,proto3" json:"executorSpec,omitempty"`
	XXX_NoUnkeyedLiteral struct{}  `json:"-"`
	XXX_unrecognized     []byte    `json:"-"`
	XXX_sizecache        int32     `json:"-"`
}

func (m *SparkJob) Reset()         { *m = SparkJob{} }
func (m *SparkJob) String() string { return proto.CompactTextString(m) }
func (*SparkJob) ProtoMessage()    {}
func (*SparkJob) Descriptor() ([]byte, []int) {
	return fileDescriptor_ca8a069b9820144a, []int{1}
}

func (m *SparkJob) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SparkJob.Unmarshal(m, b)
}
func (m *SparkJob) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SparkJob.Marshal(b, m, deterministic)
}
func (m *SparkJob) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SparkJob.Merge(m, src)
}
func (m *SparkJob) XXX_Size() int {
	return xxx_messageInfo_SparkJob.Size(m)
}
func (m *SparkJob) XXX_DiscardUnknown() {
	xxx_messageInfo_SparkJob.DiscardUnknown(m)
}

var xxx_messageInfo_SparkJob proto.InternalMessageInfo

func (m *SparkJob) GetApplicationType() SparkApplication_Type {
	if m != nil {
		return m.ApplicationType
	}
	return SparkApplication_PYTHON
}

func (m *SparkJob) GetMainApplicationFile() string {
	if m != nil {
		return m.MainApplicationFile
	}
	return ""
}

func (m *SparkJob) GetMainClass() string {
	if m != nil {
		return m.MainClass
	}
	return ""
}

func (m *SparkJob) GetSparkConf() map[string]string {
	if m != nil {
		return m.SparkConf
	}
	return nil
}

func (m *SparkJob) GetHadoopConf() map[string]string {
	if m != nil {
		return m.HadoopConf
	}
	return nil
}

func (m *SparkJob) GetExecutorPath() string {
	if m != nil {
		return m.ExecutorPath
	}
	return ""
}

func (m *SparkJob) GetDatabricksConf() *_struct.Struct {
	if m != nil {
		return m.DatabricksConf
	}
	return nil
}

func (m *SparkJob) GetDatabricksToken() string {
	if m != nil {
		return m.DatabricksToken
	}
	return ""
}

func (m *SparkJob) GetDatabricksInstance() string {
	if m != nil {
		return m.DatabricksInstance
	}
	return ""
}

func (m *SparkJob) GetDriverSpec() *RoleSpec {
	if m != nil {
		return m.DriverSpec
	}
	return nil
}

func (m *SparkJob) GetExecutorSpec() *RoleSpec {
	if m != nil {
		return m.ExecutorSpec
	}
	return nil
}

func init() {
	proto.RegisterEnum("flyteidl.plugins.SparkApplication_Type", SparkApplication_Type_name, SparkApplication_Type_value)
	proto.RegisterType((*SparkApplication)(nil), "flyteidl.plugins.SparkApplication")
	proto.RegisterType((*SparkJob)(nil), "flyteidl.plugins.SparkJob")
	proto.RegisterMapType((map[string]string)(nil), "flyteidl.plugins.SparkJob.HadoopConfEntry")
	proto.RegisterMapType((map[string]string)(nil), "flyteidl.plugins.SparkJob.SparkConfEntry")
}

func init() { proto.RegisterFile("flyteidl/plugins/spark.proto", fileDescriptor_ca8a069b9820144a) }

var fileDescriptor_ca8a069b9820144a = []byte{
	// 490 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x94, 0x53, 0x5d, 0x8b, 0xd3, 0x40,
	0x14, 0x35, 0xfd, 0xb2, 0xb9, 0x95, 0x36, 0x5c, 0x05, 0x43, 0xa8, 0x50, 0xfa, 0x62, 0x14, 0x9c,
	0x48, 0x7d, 0x91, 0xc5, 0x75, 0xc9, 0x16, 0x75, 0x2d, 0xa2, 0x6b, 0x5a, 0x04, 0x7d, 0x9b, 0xa4,
	0xd3, 0x34, 0x34, 0x9d, 0x09, 0xc9, 0x64, 0xb1, 0x7f, 0xdd, 0x27, 0xc9, 0xc4, 0x6e, 0xda, 0xec,
	0xaa, 0xec, 0xdb, 0xcd, 0xb9, 0xe7, 0x9c, 0x7b, 0x33, 0x67, 0x06, 0x86, 0xab, 0x78, 0x27, 0x59,
	0xb4, 0x8c, 0x9d, 0x24, 0xce, 0xc3, 0x88, 0x67, 0x4e, 0x96, 0xd0, 0x74, 0x43, 0x92, 0x54, 0x48,
	0x81, 0xc6, 0xbe, 0x4b, 0xfe, 0x74, 0xad, 0x27, 0x37, 0xf8, 0x81, 0xd8, 0x6e, 0x05, 0x2f, 0x05,
	0xd6, 0x30, 0x14, 0x22, 0x8c, 0x99, 0xa3, 0xbe, 0xfc, 0x7c, 0xe5, 0x64, 0x32, 0xcd, 0x03, 0x59,
	0x76, 0xc7, 0xe7, 0x60, 0xcc, 0x0b, 0x77, 0x37, 0x49, 0xe2, 0x28, 0xa0, 0x32, 0x12, 0x7c, 0x4c,
	0xa0, 0xb5, 0xd8, 0x25, 0x0c, 0x01, 0x3a, 0x97, 0xdf, 0x17, 0x17, 0x5f, 0x3e, 0x1b, 0xf7, 0xb0,
	0x0b, 0xad, 0x99, 0xfb, 0xcd, 0x35, 0x34, 0xd4, 0xa1, 0x3d, 0x9f, 0xba, 0x9f, 0x5c, 0xa3, 0x81,
	0x6d, 0xd0, 0x3c, 0xa3, 0x39, 0xfe, 0xd5, 0x86, 0xae, 0x32, 0x99, 0x09, 0x1f, 0xbf, 0xc2, 0x80,
	0x56, 0x5e, 0x85, 0x8f, 0xa9, 0x8d, 0x34, 0xbb, 0x3f, 0x79, 0x4a, 0xea, 0x9b, 0x93, 0xfa, 0x64,
	0x52, 0xd0, 0xbd, 0xba, 0x1e, 0x5f, 0xc2, 0xc3, 0x2d, 0x8d, 0xf8, 0x01, 0xf1, 0x7d, 0x14, 0x33,
	0xb3, 0x31, 0xd2, 0x6c, 0xdd, 0xbb, 0xad, 0x85, 0x43, 0xd0, 0x0b, 0x78, 0x1a, 0xd3, 0x2c, 0x33,
	0x9b, 0x8a, 0x57, 0x01, 0xf8, 0x01, 0x74, 0x75, 0xa2, 0x53, 0xc1, 0x57, 0x66, 0x6b, 0xd4, 0xb4,
	0x7b, 0x93, 0x67, 0x7f, 0x59, 0x6e, 0x26, 0xfc, 0xb2, 0x28, 0xb8, 0xef, 0xb8, 0x4c, 0x77, 0x5e,
	0xa5, 0xc5, 0x19, 0xc0, 0x9a, 0x2e, 0x85, 0x48, 0x94, 0x53, 0x5b, 0x39, 0x3d, 0xff, 0x87, 0xd3,
	0xc5, 0x35, 0xb9, 0xb4, 0x3a, 0x50, 0xe3, 0x18, 0x1e, 0xb0, 0x9f, 0x2c, 0xc8, 0xa5, 0x48, 0x2f,
	0xa9, 0x5c, 0x9b, 0x1d, 0xb5, 0xf5, 0x11, 0x86, 0x67, 0xd0, 0x5f, 0x52, 0x49, 0xfd, 0x34, 0x0a,
	0x36, 0x99, 0x9a, 0x79, 0x7f, 0xa4, 0xd9, 0xbd, 0xc9, 0x63, 0x52, 0x66, 0x4c, 0xf6, 0x19, 0x93,
	0xb9, 0xca, 0xd8, 0xab, 0xd1, 0xd1, 0x86, 0x41, 0x85, 0x2c, 0xc4, 0x86, 0x71, 0xb3, 0xab, 0xe6,
	0xd4, 0x61, 0x24, 0x80, 0x15, 0xf4, 0x91, 0x67, 0x92, 0xf2, 0x80, 0x99, 0xba, 0x22, 0xdf, 0xd2,
	0xc1, 0x13, 0x80, 0x65, 0x1a, 0x5d, 0xb1, 0x74, 0x9e, 0xb0, 0xc0, 0x04, 0xb5, 0x96, 0x75, 0xf3,
	0x28, 0x3c, 0x11, 0xb3, 0x82, 0xe1, 0x1d, 0xb0, 0xf1, 0x6d, 0xf5, 0xeb, 0x4a, 0xdd, 0xfb, 0xaf,
	0xfa, 0x88, 0x6f, 0xbd, 0x81, 0xfe, 0x71, 0x46, 0x68, 0x40, 0x73, 0xc3, 0x76, 0xea, 0xe2, 0xe9,
	0x5e, 0x51, 0xe2, 0x23, 0x68, 0x5f, 0xd1, 0x38, 0xdf, 0xdf, 0x9a, 0xf2, 0xe3, 0xa4, 0xf1, 0x5a,
	0xb3, 0x4e, 0x61, 0x50, 0xcb, 0xe5, 0x2e, 0xf2, 0xf3, 0xb3, 0x1f, 0xa7, 0x61, 0x24, 0xd7, 0xb9,
	0x4f, 0x02, 0xb1, 0x75, 0xd4, 0xca, 0x22, 0x0d, 0xcb, 0xc2, 0xb9, 0x7e, 0x99, 0x21, 0xe3, 0x4e,
	0xe2, 0xbf, 0x08, 0x85, 0x53, 0x7f, 0xac, 0x7e, 0x47, 0x85, 0xf6, 0xea, 0x77, 0x00, 0x00, 0x00,
	0xff, 0xff, 0x6e, 0x42, 0x28, 0x27, 0xf7, 0x03, 0x00, 0x00,
}
