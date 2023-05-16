// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/compute_nest_supplier_20210521.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_ComputeNestSupplier20210521;

Alibabacloud_ComputeNestSupplier20210521::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("computenestsupplier"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ComputeNestSupplier20210521::Client::getEndpoint(shared_ptr<string> productId,
                                                                     shared_ptr<string> regionId,
                                                                     shared_ptr<string> endpointRule,
                                                                     shared_ptr<string> network,
                                                                     shared_ptr<string> suffix,
                                                                     shared_ptr<map<string, string>> endpointMap,
                                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreateArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::createArtifactWithOptions(shared_ptr<CreateArtifactRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateArtifactShrinkRequest> request = make_shared<CreateArtifactShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateArtifactRequestArtifactProperty>(tmpReq->artifactProperty)) {
    request->artifactPropertyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->artifactProperty, make_shared<string>("ArtifactProperty"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactPropertyShrink)) {
    query->insert(pair<string, string>("ArtifactProperty", *request->artifactPropertyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactType)) {
    query->insert(pair<string, string>("ArtifactType", *request->artifactType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->supportRegionIds)) {
    query->insert(pair<string, vector<string>>("SupportRegionIds", *request->supportRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionName)) {
    query->insert(pair<string, string>("VersionName", *request->versionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateArtifact"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateArtifactResponse(callApi(params, req, runtime));
}

CreateArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::createArtifact(shared_ptr<CreateArtifactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createArtifactWithOptions(request, runtime);
}

CreateServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmMetadata)) {
    query->insert(pair<string, string>("AlarmMetadata", *request->alarmMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalType)) {
    query->insert(pair<string, string>("ApprovalType", *request->approvalType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployMetadata)) {
    query->insert(pair<string, string>("DeployMetadata", *request->deployMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployType)) {
    query->insert(pair<string, string>("DeployType", *request->deployType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isSupportOperated)) {
    query->insert(pair<string, bool>("IsSupportOperated", *request->isSupportOperated));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseMetadata)) {
    query->insert(pair<string, string>("LicenseMetadata", *request->licenseMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationMetadata)) {
    query->insert(pair<string, string>("OperationMetadata", *request->operationMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyNames)) {
    query->insert(pair<string, string>("PolicyNames", *request->policyNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceRequestServiceInfo>>(request->serviceInfo)) {
    query->insert(pair<string, vector<CreateServiceRequestServiceInfo>>("ServiceInfo", *request->serviceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareType)) {
    query->insert(pair<string, string>("ShareType", *request->shareType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateServiceRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantType)) {
    query->insert(pair<string, string>("TenantType", *request->tenantType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trialDuration)) {
    query->insert(pair<string, long>("TrialDuration", *request->trialDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upgradeMetadata)) {
    query->insert(pair<string, string>("UpgradeMetadata", *request->upgradeMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionName)) {
    query->insert(pair<string, string>("VersionName", *request->versionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateService"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceResponse(callApi(params, req, runtime));
}

CreateServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceWithOptions(request, runtime);
}

DeleteArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::deleteArtifactWithOptions(shared_ptr<DeleteArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactVersion)) {
    query->insert(pair<string, string>("ArtifactVersion", *request->artifactVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteArtifact"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteArtifactResponse(callApi(params, req, runtime));
}

DeleteArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::deleteArtifact(shared_ptr<DeleteArtifactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteArtifactWithOptions(request, runtime);
}

DeleteServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteService"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceResponse(callApi(params, req, runtime));
}

DeleteServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::deleteService(shared_ptr<DeleteServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceWithOptions(request, runtime);
}

GetArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::getArtifactWithOptions(shared_ptr<GetArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactVersion)) {
    query->insert(pair<string, string>("ArtifactVersion", *request->artifactVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetArtifact"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetArtifactResponse(callApi(params, req, runtime));
}

GetArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::getArtifact(shared_ptr<GetArtifactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getArtifactWithOptions(request, runtime);
}

GetArtifactRepositoryCredentialsResponse Alibabacloud_ComputeNestSupplier20210521::Client::getArtifactRepositoryCredentialsWithOptions(shared_ptr<GetArtifactRepositoryCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactType)) {
    query->insert(pair<string, string>("ArtifactType", *request->artifactType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployRegionId)) {
    query->insert(pair<string, string>("DeployRegionId", *request->deployRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetArtifactRepositoryCredentials"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetArtifactRepositoryCredentialsResponse(callApi(params, req, runtime));
}

GetArtifactRepositoryCredentialsResponse Alibabacloud_ComputeNestSupplier20210521::Client::getArtifactRepositoryCredentials(shared_ptr<GetArtifactRepositoryCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getArtifactRepositoryCredentialsWithOptions(request, runtime);
}

GetServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceWithOptions(shared_ptr<GetServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetService"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceResponse(callApi(params, req, runtime));
}

GetServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::getService(shared_ptr<GetServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceWithOptions(request, runtime);
}

GetServiceEstimateCostResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceEstimateCostWithOptions(shared_ptr<GetServiceEstimateCostRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetServiceEstimateCostShrinkRequest> request = make_shared<GetServiceEstimateCostShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    query->insert(pair<string, string>("Parameters", *request->parametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceEstimateCost"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceEstimateCostResponse(callApi(params, req, runtime));
}

GetServiceEstimateCostResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceEstimateCost(shared_ptr<GetServiceEstimateCostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceEstimateCostWithOptions(request, runtime);
}

GetServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceInstanceWithOptions(shared_ptr<GetServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceInstance"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceInstanceResponse(callApi(params, req, runtime));
}

GetServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceInstance(shared_ptr<GetServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceInstanceWithOptions(request, runtime);
}

ListArtifactVersionsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listArtifactVersionsWithOptions(shared_ptr<ListArtifactVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResult)) {
    query->insert(pair<string, string>("MaxResult", *request->maxResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListArtifactVersions"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListArtifactVersionsResponse(callApi(params, req, runtime));
}

ListArtifactVersionsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listArtifactVersions(shared_ptr<ListArtifactVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listArtifactVersionsWithOptions(request, runtime);
}

ListArtifactsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listArtifactsWithOptions(shared_ptr<ListArtifactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListArtifactsRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListArtifactsRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    query->insert(pair<string, string>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListArtifacts"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListArtifactsResponse(callApi(params, req, runtime));
}

ListArtifactsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listArtifacts(shared_ptr<ListArtifactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listArtifactsWithOptions(request, runtime);
}

ListServiceInstancesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstancesWithOptions(shared_ptr<ListServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceInstancesRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListServiceInstancesRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    query->insert(pair<string, string>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showDeleted)) {
    query->insert(pair<string, bool>("ShowDeleted", *request->showDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceInstancesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListServiceInstancesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceInstances"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceInstancesResponse(callApi(params, req, runtime));
}

ListServiceInstancesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstances(shared_ptr<ListServiceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceInstancesWithOptions(request, runtime);
}

ListServiceUsagesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceUsagesWithOptions(shared_ptr<ListServiceUsagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceUsagesRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListServiceUsagesRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceUsages"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceUsagesResponse(callApi(params, req, runtime));
}

ListServiceUsagesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceUsages(shared_ptr<ListServiceUsagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceUsagesWithOptions(request, runtime);
}

ListServicesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allVersions)) {
    query->insert(pair<string, bool>("AllVersions", *request->allVersions));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListServicesRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListServicesRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    query->insert(pair<string, string>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListServicesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListServicesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServices"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServicesResponse(callApi(params, req, runtime));
}

ListServicesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServices(shared_ptr<ListServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServicesWithOptions(request, runtime);
}

ReleaseArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::releaseArtifactWithOptions(shared_ptr<ReleaseArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseArtifact"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseArtifactResponse(callApi(params, req, runtime));
}

ReleaseArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::releaseArtifact(shared_ptr<ReleaseArtifactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseArtifactWithOptions(request, runtime);
}

UpdateArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateArtifactWithOptions(shared_ptr<UpdateArtifactRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateArtifactShrinkRequest> request = make_shared<UpdateArtifactShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateArtifactRequestArtifactProperty>(tmpReq->artifactProperty)) {
    request->artifactPropertyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->artifactProperty, make_shared<string>("ArtifactProperty"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactPropertyShrink)) {
    query->insert(pair<string, string>("ArtifactProperty", *request->artifactPropertyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->supportRegionIds)) {
    query->insert(pair<string, vector<string>>("SupportRegionIds", *request->supportRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionName)) {
    query->insert(pair<string, string>("VersionName", *request->versionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateArtifact"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateArtifactResponse(callApi(params, req, runtime));
}

UpdateArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateArtifact(shared_ptr<UpdateArtifactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateArtifactWithOptions(request, runtime);
}

UpdateServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateServiceWithOptions(shared_ptr<UpdateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmMetadata)) {
    query->insert(pair<string, string>("AlarmMetadata", *request->alarmMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployMetadata)) {
    query->insert(pair<string, string>("DeployMetadata", *request->deployMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployType)) {
    query->insert(pair<string, string>("DeployType", *request->deployType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isSupportOperated)) {
    query->insert(pair<string, bool>("IsSupportOperated", *request->isSupportOperated));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseMetadata)) {
    query->insert(pair<string, string>("LicenseMetadata", *request->licenseMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationMetadata)) {
    query->insert(pair<string, string>("OperationMetadata", *request->operationMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyNames)) {
    query->insert(pair<string, string>("PolicyNames", *request->policyNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateServiceRequestServiceInfo>>(request->serviceInfo)) {
    query->insert(pair<string, vector<UpdateServiceRequestServiceInfo>>("ServiceInfo", *request->serviceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantType)) {
    query->insert(pair<string, string>("TenantType", *request->tenantType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trialDuration)) {
    query->insert(pair<string, long>("TrialDuration", *request->trialDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upgradeMetadata)) {
    query->insert(pair<string, string>("UpgradeMetadata", *request->upgradeMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionName)) {
    query->insert(pair<string, string>("VersionName", *request->versionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateService"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceResponse(callApi(params, req, runtime));
}

UpdateServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateService(shared_ptr<UpdateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceWithOptions(request, runtime);
}

