/*
 * flyteidl/service/admin.proto
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: version not set
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package flyteadmin

type AdminProjectDomainAttributes struct {
	// Unique project id for which this set of attributes will be applied.
	Project string `json:"project,omitempty"`
	// Unique domain id for which this set of attributes will be applied.
	Domain string `json:"domain,omitempty"`
	MatchingAttributes *AdminMatchingAttributes `json:"matching_attributes,omitempty"`
}
