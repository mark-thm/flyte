/*
 * flyteidl/service/admin.proto
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: version not set
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package flyteadmin

type AdminVersion struct {
	Build string `json:"Build,omitempty"`
	Version string `json:"Version,omitempty"`
	BuildTime string `json:"BuildTime,omitempty"`
}
