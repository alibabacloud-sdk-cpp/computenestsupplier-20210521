// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/compute_nest_supplier_20210521.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
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

AddServiceSharedAccountsResponse Alibabacloud_ComputeNestSupplier20210521::Client::addServiceSharedAccountsWithOptions(shared_ptr<AddServiceSharedAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<vector<AddServiceSharedAccountsRequestSharedAccounts>>(request->sharedAccounts)) {
    query->insert(pair<string, vector<AddServiceSharedAccountsRequestSharedAccounts>>("SharedAccounts", *request->sharedAccounts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddServiceSharedAccounts"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddServiceSharedAccountsResponse(callApi(params, req, runtime));
}

AddServiceSharedAccountsResponse Alibabacloud_ComputeNestSupplier20210521::Client::addServiceSharedAccounts(shared_ptr<AddServiceSharedAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addServiceSharedAccountsWithOptions(request, runtime);
}

ApproveServiceUsageResponse Alibabacloud_ComputeNestSupplier20210521::Client::approveServiceUsageWithOptions(shared_ptr<ApproveServiceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comments)) {
    query->insert(pair<string, string>("Comments", *request->comments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userAliUid)) {
    query->insert(pair<string, long>("UserAliUid", *request->userAliUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApproveServiceUsage"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApproveServiceUsageResponse(callApi(params, req, runtime));
}

ApproveServiceUsageResponse Alibabacloud_ComputeNestSupplier20210521::Client::approveServiceUsage(shared_ptr<ApproveServiceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveServiceUsageWithOptions(request, runtime);
}

CancelServiceRegistrationResponse Alibabacloud_ComputeNestSupplier20210521::Client::cancelServiceRegistrationWithOptions(shared_ptr<CancelServiceRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrationId)) {
    query->insert(pair<string, string>("RegistrationId", *request->registrationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelServiceRegistration"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelServiceRegistrationResponse(callApi(params, req, runtime));
}

CancelServiceRegistrationResponse Alibabacloud_ComputeNestSupplier20210521::Client::cancelServiceRegistration(shared_ptr<CancelServiceRegistrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelServiceRegistrationWithOptions(request, runtime);
}

ContinueDeployServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::continueDeployServiceInstanceWithOptions(shared_ptr<ContinueDeployServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    query->insert(pair<string, string>("Parameters", *request->parameters));
  }
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
    {"action", boost::any(string("ContinueDeployServiceInstance"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ContinueDeployServiceInstanceResponse(callApi(params, req, runtime));
}

ContinueDeployServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::continueDeployServiceInstance(shared_ptr<ContinueDeployServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return continueDeployServiceInstanceWithOptions(request, runtime);
}

CreateArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::createArtifactWithOptions(shared_ptr<CreateArtifactRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateArtifactShrinkRequest> request = make_shared<CreateArtifactShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateArtifactRequestArtifactBuildProperty>(tmpReq->artifactBuildProperty)) {
    request->artifactBuildPropertyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->artifactBuildProperty, make_shared<string>("ArtifactBuildProperty"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateArtifactRequestArtifactProperty>(tmpReq->artifactProperty)) {
    request->artifactPropertyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->artifactProperty, make_shared<string>("ArtifactProperty"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactBuildPropertyShrink)) {
    query->insert(pair<string, string>("ArtifactBuildProperty", *request->artifactBuildPropertyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactBuildType)) {
    query->insert(pair<string, string>("ArtifactBuildType", *request->artifactBuildType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactPropertyShrink)) {
    query->insert(pair<string, string>("ArtifactProperty", *request->artifactPropertyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactType)) {
    query->insert(pair<string, string>("ArtifactType", *request->artifactType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->supportRegionIds)) {
    query->insert(pair<string, vector<string>>("SupportRegionIds", *request->supportRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateArtifactShrinkRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateArtifactShrinkRequestTag>>("Tag", *request->tag));
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

CreateServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateServiceShrinkRequest> request = make_shared<CreateServiceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateServiceRequestComplianceMetadata>(tmpReq->complianceMetadata)) {
    request->complianceMetadataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->complianceMetadata, make_shared<string>("ComplianceMetadata"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmMetadata)) {
    query->insert(pair<string, string>("AlarmMetadata", *request->alarmMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalType)) {
    query->insert(pair<string, string>("ApprovalType", *request->approvalType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buildParameters)) {
    query->insert(pair<string, string>("BuildParameters", *request->buildParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->complianceMetadataShrink)) {
    query->insert(pair<string, string>("ComplianceMetadata", *request->complianceMetadataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployMetadata)) {
    query->insert(pair<string, string>("DeployMetadata", *request->deployMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployType)) {
    query->insert(pair<string, string>("DeployType", *request->deployType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->logMetadata)) {
    query->insert(pair<string, string>("LogMetadata", *request->logMetadata));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->resellable)) {
    query->insert(pair<string, bool>("Resellable", *request->resellable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceShrinkRequestServiceInfo>>(request->serviceInfo)) {
    query->insert(pair<string, vector<CreateServiceShrinkRequestServiceInfo>>("ServiceInfo", *request->serviceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareType)) {
    query->insert(pair<string, string>("ShareType", *request->shareType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceServiceId)) {
    query->insert(pair<string, string>("SourceServiceId", *request->sourceServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceServiceVersion)) {
    query->insert(pair<string, string>("SourceServiceVersion", *request->sourceServiceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceShrinkRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateServiceShrinkRequestTag>>("Tag", *request->tag));
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

CreateServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceInstanceWithOptions(shared_ptr<CreateServiceInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateServiceInstanceShrinkRequest> request = make_shared<CreateServiceInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    query->insert(pair<string, string>("Parameters", *request->parametersShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationName)) {
    query->insert(pair<string, string>("SpecificationName", *request->specificationName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceInstanceShrinkRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateServiceInstanceShrinkRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceInstance"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceInstanceResponse(callApi(params, req, runtime));
}

CreateServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceInstance(shared_ptr<CreateServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceInstanceWithOptions(request, runtime);
}

CreateServiceTestCaseResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceTestCaseWithOptions(shared_ptr<CreateServiceTestCaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->testCaseName)) {
    query->insert(pair<string, string>("TestCaseName", *request->testCaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->testConfig)) {
    query->insert(pair<string, string>("TestConfig", *request->testConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceTestCase"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceTestCaseResponse(callApi(params, req, runtime));
}

CreateServiceTestCaseResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceTestCase(shared_ptr<CreateServiceTestCaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceTestCaseWithOptions(request, runtime);
}

CreateServiceTestTaskResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceTestTaskWithOptions(shared_ptr<CreateServiceTestTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskRegionId)) {
    query->insert(pair<string, string>("TaskRegionId", *request->taskRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->testCaseIds)) {
    query->insert(pair<string, vector<string>>("TestCaseIds", *request->testCaseIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceTestTask"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceTestTaskResponse(callApi(params, req, runtime));
}

CreateServiceTestTaskResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceTestTask(shared_ptr<CreateServiceTestTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceTestTaskWithOptions(request, runtime);
}

CreateServiceUsageResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceUsageWithOptions(shared_ptr<CreateServiceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceUsage"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceUsageResponse(callApi(params, req, runtime));
}

CreateServiceUsageResponse Alibabacloud_ComputeNestSupplier20210521::Client::createServiceUsage(shared_ptr<CreateServiceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceUsageWithOptions(request, runtime);
}

CreateSupplierRegistrationResponse Alibabacloud_ComputeNestSupplier20210521::Client::createSupplierRegistrationWithOptions(shared_ptr<CreateSupplierRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactEmail)) {
    query->insert(pair<string, string>("ContactEmail", *request->contactEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactNumber)) {
    query->insert(pair<string, string>("ContactNumber", *request->contactNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactPerson)) {
    query->insert(pair<string, string>("ContactPerson", *request->contactPerson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactPersonTitle)) {
    query->insert(pair<string, string>("ContactPersonTitle", *request->contactPersonTitle));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableResellerMode)) {
    query->insert(pair<string, bool>("EnableResellerMode", *request->enableResellerMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productAnnualRevenue)) {
    query->insert(pair<string, string>("ProductAnnualRevenue", *request->productAnnualRevenue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productBusiness)) {
    query->insert(pair<string, string>("ProductBusiness", *request->productBusiness));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productDeliveryTypes)) {
    query->insert(pair<string, vector<string>>("ProductDeliveryTypes", *request->productDeliveryTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productPublishTime)) {
    query->insert(pair<string, string>("ProductPublishTime", *request->productPublishTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productSellTypes)) {
    query->insert(pair<string, vector<string>>("ProductSellTypes", *request->productSellTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resellBusinessDesc)) {
    query->insert(pair<string, string>("ResellBusinessDesc", *request->resellBusinessDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suggestion)) {
    query->insert(pair<string, string>("Suggestion", *request->suggestion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierDesc)) {
    query->insert(pair<string, string>("SupplierDesc", *request->supplierDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierLogo)) {
    query->insert(pair<string, string>("SupplierLogo", *request->supplierLogo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierName)) {
    query->insert(pair<string, string>("SupplierName", *request->supplierName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierNameEn)) {
    query->insert(pair<string, string>("SupplierNameEn", *request->supplierNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierUrl)) {
    query->insert(pair<string, string>("SupplierUrl", *request->supplierUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSupplierRegistration"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSupplierRegistrationResponse(callApi(params, req, runtime));
}

CreateSupplierRegistrationResponse Alibabacloud_ComputeNestSupplier20210521::Client::createSupplierRegistration(shared_ptr<CreateSupplierRegistrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSupplierRegistrationWithOptions(request, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
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

DeleteServiceInstancesResponse Alibabacloud_ComputeNestSupplier20210521::Client::deleteServiceInstancesWithOptions(shared_ptr<DeleteServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceInstanceId)) {
    query->insert(pair<string, vector<string>>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceInstances"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceInstancesResponse(callApi(params, req, runtime));
}

DeleteServiceInstancesResponse Alibabacloud_ComputeNestSupplier20210521::Client::deleteServiceInstances(shared_ptr<DeleteServiceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceInstancesWithOptions(request, runtime);
}

DeleteServiceTestCaseResponse Alibabacloud_ComputeNestSupplier20210521::Client::deleteServiceTestCaseWithOptions(shared_ptr<DeleteServiceTestCaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->testCaseId)) {
    query->insert(pair<string, string>("TestCaseId", *request->testCaseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceTestCase"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceTestCaseResponse(callApi(params, req, runtime));
}

DeleteServiceTestCaseResponse Alibabacloud_ComputeNestSupplier20210521::Client::deleteServiceTestCase(shared_ptr<DeleteServiceTestCaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceTestCaseWithOptions(request, runtime);
}

DeployServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::deployServiceInstanceWithOptions(shared_ptr<DeployServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
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
    {"action", boost::any(string("DeployServiceInstance"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployServiceInstanceResponse(callApi(params, req, runtime));
}

DeployServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::deployServiceInstance(shared_ptr<DeployServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployServiceInstanceWithOptions(request, runtime);
}

GenerateDefaultServiceTestConfigResponse Alibabacloud_ComputeNestSupplier20210521::Client::generateDefaultServiceTestConfigWithOptions(shared_ptr<GenerateDefaultServiceTestConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
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
    {"action", boost::any(string("GenerateDefaultServiceTestConfig"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateDefaultServiceTestConfigResponse(callApi(params, req, runtime));
}

GenerateDefaultServiceTestConfigResponse Alibabacloud_ComputeNestSupplier20210521::Client::generateDefaultServiceTestConfig(shared_ptr<GenerateDefaultServiceTestConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDefaultServiceTestConfigWithOptions(request, runtime);
}

GenerateServicePolicyResponse Alibabacloud_ComputeNestSupplier20210521::Client::generateServicePolicyWithOptions(shared_ptr<GenerateServicePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->operationTypes)) {
    query->insert(pair<string, vector<string>>("OperationTypes", *request->operationTypes));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trialType)) {
    query->insert(pair<string, string>("TrialType", *request->trialType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateServicePolicy"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateServicePolicyResponse(callApi(params, req, runtime));
}

GenerateServicePolicyResponse Alibabacloud_ComputeNestSupplier20210521::Client::generateServicePolicy(shared_ptr<GenerateServicePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateServicePolicyWithOptions(request, runtime);
}

GetArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::getArtifactWithOptions(shared_ptr<GetArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactName)) {
    query->insert(pair<string, string>("ArtifactName", *request->artifactName));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->filterAliUid)) {
    query->insert(pair<string, bool>("FilterAliUid", *request->filterAliUid));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sharedAccountType)) {
    query->insert(pair<string, string>("SharedAccountType", *request->sharedAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->showDetail)) {
    query->insert(pair<string, vector<string>>("ShowDetail", *request->showDetail));
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
  if (!Darabonba_Util::Client::isUnset<GetServiceEstimateCostRequestCommodity>(tmpReq->commodity)) {
    request->commodityShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commodity, make_shared<string>("Commodity"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityShrink)) {
    query->insert(pair<string, string>("Commodity", *request->commodityShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationName)) {
    query->insert(pair<string, string>("SpecificationName", *request->specificationName));
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

GetServiceProvisionsResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceProvisionsWithOptions(shared_ptr<GetServiceProvisionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetServiceProvisionsShrinkRequest> request = make_shared<GetServiceProvisionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    query->insert(pair<string, string>("Parameters", *request->parametersShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceProvisions"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceProvisionsResponse(callApi(params, req, runtime));
}

GetServiceProvisionsResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceProvisions(shared_ptr<GetServiceProvisionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceProvisionsWithOptions(request, runtime);
}

GetServiceRegistrationResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceRegistrationWithOptions(shared_ptr<GetServiceRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrationId)) {
    query->insert(pair<string, string>("RegistrationId", *request->registrationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceRegistration"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceRegistrationResponse(callApi(params, req, runtime));
}

GetServiceRegistrationResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceRegistration(shared_ptr<GetServiceRegistrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceRegistrationWithOptions(request, runtime);
}

GetServiceTemplateParameterConstraintsResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceTemplateParameterConstraintsWithOptions(shared_ptr<GetServiceTemplateParameterConstraintsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployRegionId)) {
    query->insert(pair<string, string>("DeployRegionId", *request->deployRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePrivateVpcConnection)) {
    query->insert(pair<string, bool>("EnablePrivateVpcConnection", *request->enablePrivateVpcConnection));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetServiceTemplateParameterConstraintsRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<GetServiceTemplateParameterConstraintsRequestParameters>>("Parameters", *request->parameters));
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
    {"action", boost::any(string("GetServiceTemplateParameterConstraints"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceTemplateParameterConstraintsResponse(callApi(params, req, runtime));
}

GetServiceTemplateParameterConstraintsResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceTemplateParameterConstraints(shared_ptr<GetServiceTemplateParameterConstraintsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceTemplateParameterConstraintsWithOptions(request, runtime);
}

GetServiceTestTaskResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceTestTaskWithOptions(shared_ptr<GetServiceTestTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceTestTask"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceTestTaskResponse(callApi(params, req, runtime));
}

GetServiceTestTaskResponse Alibabacloud_ComputeNestSupplier20210521::Client::getServiceTestTask(shared_ptr<GetServiceTestTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceTestTaskWithOptions(request, runtime);
}

GetSupplierInformationResponse Alibabacloud_ComputeNestSupplier20210521::Client::getSupplierInformationWithOptions(shared_ptr<GetSupplierInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSupplierInformation"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSupplierInformationResponse(callApi(params, req, runtime));
}

GetSupplierInformationResponse Alibabacloud_ComputeNestSupplier20210521::Client::getSupplierInformation(shared_ptr<GetSupplierInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSupplierInformationWithOptions(request, runtime);
}

GetUploadCredentialsResponse Alibabacloud_ComputeNestSupplier20210521::Client::getUploadCredentialsWithOptions(shared_ptr<GetUploadCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibility)) {
    query->insert(pair<string, string>("Visibility", *request->visibility));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUploadCredentials"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUploadCredentialsResponse(callApi(params, req, runtime));
}

GetUploadCredentialsResponse Alibabacloud_ComputeNestSupplier20210521::Client::getUploadCredentials(shared_ptr<GetUploadCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUploadCredentialsWithOptions(request, runtime);
}

LaunchServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::launchServiceWithOptions(shared_ptr<LaunchServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->categories)) {
    query->insert(pair<string, vector<string>>("Categories", *request->categories));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recommend)) {
    query->insert(pair<string, bool>("Recommend", *request->recommend));
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
    {"action", boost::any(string("LaunchService"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LaunchServiceResponse(callApi(params, req, runtime));
}

LaunchServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::launchService(shared_ptr<LaunchServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return launchServiceWithOptions(request, runtime);
}

ListAcrImageRepositoriesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listAcrImageRepositoriesWithOptions(shared_ptr<ListAcrImageRepositoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactType)) {
    query->insert(pair<string, string>("ArtifactType", *request->artifactType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAcrImageRepositories"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAcrImageRepositoriesResponse(callApi(params, req, runtime));
}

ListAcrImageRepositoriesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listAcrImageRepositories(shared_ptr<ListAcrImageRepositoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAcrImageRepositoriesWithOptions(request, runtime);
}

ListAcrImageTagsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listAcrImageTagsWithOptions(shared_ptr<ListAcrImageTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactType)) {
    query->insert(pair<string, string>("ArtifactType", *request->artifactType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAcrImageTags"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAcrImageTagsResponse(callApi(params, req, runtime));
}

ListAcrImageTagsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listAcrImageTags(shared_ptr<ListAcrImageTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAcrImageTagsWithOptions(request, runtime);
}

ListArtifactRisksResponse Alibabacloud_ComputeNestSupplier20210521::Client::listArtifactRisksWithOptions(shared_ptr<ListArtifactRisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ListArtifactRisks"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListArtifactRisksResponse(callApi(params, req, runtime));
}

ListArtifactRisksResponse Alibabacloud_ComputeNestSupplier20210521::Client::listArtifactRisks(shared_ptr<ListArtifactRisksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listArtifactRisksWithOptions(request, runtime);
}

ListArtifactVersionsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listArtifactVersionsWithOptions(shared_ptr<ListArtifactVersionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListArtifactVersionsShrinkRequest> request = make_shared<ListArtifactVersionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListArtifactVersionsRequestFilters>>(tmpReq->filters)) {
    request->filtersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filters, make_shared<string>("Filters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filtersShrink)) {
    query->insert(pair<string, string>("Filters", *request->filtersShrink));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListArtifactsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListArtifactsRequestTag>>("Tag", *request->tag));
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

ListResellersResponse Alibabacloud_ComputeNestSupplier20210521::Client::listResellersWithOptions(shared_ptr<ListResellersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListResellersRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListResellersRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResellers"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResellersResponse(callApi(params, req, runtime));
}

ListResellersResponse Alibabacloud_ComputeNestSupplier20210521::Client::listResellers(shared_ptr<ListResellersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResellersWithOptions(request, runtime);
}

ListServiceInstanceBillResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstanceBillWithOptions(shared_ptr<ListServiceInstanceBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingDate)) {
    query->insert(pair<string, string>("BillingDate", *request->billingDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    query->insert(pair<string, string>("Granularity", *request->granularity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceInstanceBill"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceInstanceBillResponse(callApi(params, req, runtime));
}

ListServiceInstanceBillResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstanceBill(shared_ptr<ListServiceInstanceBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceInstanceBillWithOptions(request, runtime);
}

ListServiceInstanceDeployDetailsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstanceDeployDetailsWithOptions(shared_ptr<ListServiceInstanceDeployDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cycleTimeZone)) {
    query->insert(pair<string, string>("CycleTimeZone", *request->cycleTimeZone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cycleType)) {
    query->insert(pair<string, string>("CycleType", *request->cycleType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dimension)) {
    query->insert(pair<string, vector<string>>("Dimension", *request->dimension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceInstanceDeployDetailsRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListServiceInstanceDeployDetailsRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceInstanceDeployDetails"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceInstanceDeployDetailsResponse(callApi(params, req, runtime));
}

ListServiceInstanceDeployDetailsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstanceDeployDetails(shared_ptr<ListServiceInstanceDeployDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceInstanceDeployDetailsWithOptions(request, runtime);
}

ListServiceInstanceLogsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstanceLogsWithOptions(shared_ptr<ListServiceInstanceLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceInstanceLogsRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListServiceInstanceLogsRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logSource)) {
    query->insert(pair<string, string>("LogSource", *request->logSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logstore)) {
    query->insert(pair<string, string>("Logstore", *request->logstore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceInstanceLogs"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceInstanceLogsResponse(callApi(params, req, runtime));
}

ListServiceInstanceLogsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstanceLogs(shared_ptr<ListServiceInstanceLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceInstanceLogsWithOptions(request, runtime);
}

ListServiceInstanceResourcesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstanceResourcesWithOptions(shared_ptr<ListServiceInstanceResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceInstanceResourcesRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<ListServiceInstanceResourcesRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceResourceType)) {
    query->insert(pair<string, string>("ServiceInstanceResourceType", *request->serviceInstanceResourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceInstanceResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListServiceInstanceResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceInstanceResources"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceInstanceResourcesResponse(callApi(params, req, runtime));
}

ListServiceInstanceResourcesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstanceResources(shared_ptr<ListServiceInstanceResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceInstanceResourcesWithOptions(request, runtime);
}

ListServiceInstanceUpgradeHistoryResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstanceUpgradeHistoryWithOptions(shared_ptr<ListServiceInstanceUpgradeHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
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
    {"action", boost::any(string("ListServiceInstanceUpgradeHistory"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceInstanceUpgradeHistoryResponse(callApi(params, req, runtime));
}

ListServiceInstanceUpgradeHistoryResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstanceUpgradeHistory(shared_ptr<ListServiceInstanceUpgradeHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceInstanceUpgradeHistoryWithOptions(request, runtime);
}

ListServiceInstancesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceInstancesWithOptions(shared_ptr<ListServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceInstancesRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListServiceInstancesRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
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

ListServiceRegistrationsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceRegistrationsWithOptions(shared_ptr<ListServiceRegistrationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceRegistrationsRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListServiceRegistrationsRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceRegistrations"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceRegistrationsResponse(callApi(params, req, runtime));
}

ListServiceRegistrationsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceRegistrations(shared_ptr<ListServiceRegistrationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceRegistrationsWithOptions(request, runtime);
}

ListServiceSharedAccountsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceSharedAccountsWithOptions(shared_ptr<ListServiceSharedAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceSharedAccountsRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListServiceSharedAccountsRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permission)) {
    query->insert(pair<string, string>("Permission", *request->permission));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceSharedAccounts"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceSharedAccountsResponse(callApi(params, req, runtime));
}

ListServiceSharedAccountsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceSharedAccounts(shared_ptr<ListServiceSharedAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceSharedAccountsWithOptions(request, runtime);
}

ListServiceTestCasesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceTestCasesWithOptions(shared_ptr<ListServiceTestCasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceTestCasesRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<ListServiceTestCasesRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
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
    {"action", boost::any(string("ListServiceTestCases"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceTestCasesResponse(callApi(params, req, runtime));
}

ListServiceTestCasesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceTestCases(shared_ptr<ListServiceTestCasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceTestCasesWithOptions(request, runtime);
}

ListServiceTestTaskLogsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceTestTaskLogsWithOptions(shared_ptr<ListServiceTestTaskLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceTestTaskLogs"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceTestTaskLogsResponse(callApi(params, req, runtime));
}

ListServiceTestTaskLogsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceTestTaskLogs(shared_ptr<ListServiceTestTaskLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceTestTaskLogsWithOptions(request, runtime);
}

ListServiceTestTasksResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceTestTasksWithOptions(shared_ptr<ListServiceTestTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceTestTasksRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListServiceTestTasksRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
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
    {"action", boost::any(string("ListServiceTestTasks"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceTestTasksResponse(callApi(params, req, runtime));
}

ListServiceTestTasksResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceTestTasks(shared_ptr<ListServiceTestTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceTestTasksWithOptions(request, runtime);
}

ListServiceUsagesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listServiceUsagesWithOptions(shared_ptr<ListServiceUsagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceUsages"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
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

ListSupplierRegistrationsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listSupplierRegistrationsWithOptions(shared_ptr<ListSupplierRegistrationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListSupplierRegistrationsRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListSupplierRegistrationsRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSupplierRegistrations"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSupplierRegistrationsResponse(callApi(params, req, runtime));
}

ListSupplierRegistrationsResponse Alibabacloud_ComputeNestSupplier20210521::Client::listSupplierRegistrations(shared_ptr<ListSupplierRegistrationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSupplierRegistrationsWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_ComputeNestSupplier20210521::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagKeys"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagKeysResponse(callApi(params, req, runtime));
}

ListTagKeysResponse Alibabacloud_ComputeNestSupplier20210521::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagValues"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagValuesResponse(callApi(params, req, runtime));
}

ListTagValuesResponse Alibabacloud_ComputeNestSupplier20210521::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

ModifyServiceInstanceResourcesResponse Alibabacloud_ComputeNestSupplier20210521::Client::modifyServiceInstanceResourcesWithOptions(shared_ptr<ModifyServiceInstanceResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resources)) {
    query->insert(pair<string, string>("Resources", *request->resources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceResourcesAction)) {
    query->insert(pair<string, string>("ServiceInstanceResourcesAction", *request->serviceInstanceResourcesAction));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyServiceInstanceResources"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyServiceInstanceResourcesResponse(callApi(params, req, runtime));
}

ModifyServiceInstanceResourcesResponse Alibabacloud_ComputeNestSupplier20210521::Client::modifyServiceInstanceResources(shared_ptr<ModifyServiceInstanceResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyServiceInstanceResourcesWithOptions(request, runtime);
}

PreLaunchServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::preLaunchServiceWithOptions(shared_ptr<PreLaunchServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreLaunchService"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreLaunchServiceResponse(callApi(params, req, runtime));
}

PreLaunchServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::preLaunchService(shared_ptr<PreLaunchServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preLaunchServiceWithOptions(request, runtime);
}

PushMeteringDataResponse Alibabacloud_ComputeNestSupplier20210521::Client::pushMeteringDataWithOptions(shared_ptr<PushMeteringDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->metering)) {
    query->insert(pair<string, string>("Metering", *request->metering));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushMeteringData"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushMeteringDataResponse(callApi(params, req, runtime));
}

PushMeteringDataResponse Alibabacloud_ComputeNestSupplier20210521::Client::pushMeteringData(shared_ptr<PushMeteringDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushMeteringDataWithOptions(request, runtime);
}

RegisterServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::registerServiceWithOptions(shared_ptr<RegisterServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterService"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterServiceResponse(callApi(params, req, runtime));
}

RegisterServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::registerService(shared_ptr<RegisterServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerServiceWithOptions(request, runtime);
}

RejectServiceUsageResponse Alibabacloud_ComputeNestSupplier20210521::Client::rejectServiceUsageWithOptions(shared_ptr<RejectServiceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comments)) {
    query->insert(pair<string, string>("Comments", *request->comments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userAliUid)) {
    query->insert(pair<string, long>("UserAliUid", *request->userAliUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RejectServiceUsage"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RejectServiceUsageResponse(callApi(params, req, runtime));
}

RejectServiceUsageResponse Alibabacloud_ComputeNestSupplier20210521::Client::rejectServiceUsage(shared_ptr<RejectServiceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rejectServiceUsageWithOptions(request, runtime);
}

ReleaseArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::releaseArtifactWithOptions(shared_ptr<ReleaseArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
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

RemoveServiceSharedAccountsResponse Alibabacloud_ComputeNestSupplier20210521::Client::removeServiceSharedAccountsWithOptions(shared_ptr<RemoveServiceSharedAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->userAliUids)) {
    query->insert(pair<string, vector<long>>("UserAliUids", *request->userAliUids));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveServiceSharedAccounts"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveServiceSharedAccountsResponse(callApi(params, req, runtime));
}

RemoveServiceSharedAccountsResponse Alibabacloud_ComputeNestSupplier20210521::Client::removeServiceSharedAccounts(shared_ptr<RemoveServiceSharedAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeServiceSharedAccountsWithOptions(request, runtime);
}

RestartServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::restartServiceInstanceWithOptions(shared_ptr<RestartServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
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
    {"action", boost::any(string("RestartServiceInstance"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartServiceInstanceResponse(callApi(params, req, runtime));
}

RestartServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::restartServiceInstance(shared_ptr<RestartServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartServiceInstanceWithOptions(request, runtime);
}

RollbackServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::rollbackServiceInstanceWithOptions(shared_ptr<RollbackServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
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
    {"action", boost::any(string("RollbackServiceInstance"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RollbackServiceInstanceResponse(callApi(params, req, runtime));
}

RollbackServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::rollbackServiceInstance(shared_ptr<RollbackServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackServiceInstanceWithOptions(request, runtime);
}

StartServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::startServiceInstanceWithOptions(shared_ptr<StartServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
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
    {"action", boost::any(string("StartServiceInstance"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartServiceInstanceResponse(callApi(params, req, runtime));
}

StartServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::startServiceInstance(shared_ptr<StartServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startServiceInstanceWithOptions(request, runtime);
}

StopServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::stopServiceInstanceWithOptions(shared_ptr<StopServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
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
    {"action", boost::any(string("StopServiceInstance"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopServiceInstanceResponse(callApi(params, req, runtime));
}

StopServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::stopServiceInstance(shared_ptr<StopServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopServiceInstanceWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_ComputeNestSupplier20210521::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_ComputeNestSupplier20210521::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnTagResourcesResponse Alibabacloud_ComputeNestSupplier20210521::Client::unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnTagResources"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnTagResourcesResponse(callApi(params, req, runtime));
}

UnTagResourcesResponse Alibabacloud_ComputeNestSupplier20210521::Client::unTagResources(shared_ptr<UnTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unTagResourcesWithOptions(request, runtime);
}

UpdateArtifactResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateArtifactWithOptions(shared_ptr<UpdateArtifactRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateArtifactShrinkRequest> request = make_shared<UpdateArtifactShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateArtifactRequestArtifactBuildProperty>(tmpReq->artifactBuildProperty)) {
    request->artifactBuildPropertyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->artifactBuildProperty, make_shared<string>("ArtifactBuildProperty"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateArtifactRequestArtifactProperty>(tmpReq->artifactProperty)) {
    request->artifactPropertyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->artifactProperty, make_shared<string>("ArtifactProperty"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactBuildPropertyShrink)) {
    query->insert(pair<string, string>("ArtifactBuildProperty", *request->artifactBuildPropertyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactId)) {
    query->insert(pair<string, string>("ArtifactId", *request->artifactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactPropertyShrink)) {
    query->insert(pair<string, string>("ArtifactProperty", *request->artifactPropertyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionType)) {
    query->insert(pair<string, string>("PermissionType", *request->permissionType));
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

UpdateServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateServiceWithOptions(shared_ptr<UpdateServiceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateServiceShrinkRequest> request = make_shared<UpdateServiceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateServiceRequestCommodity>(tmpReq->commodity)) {
    request->commodityShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commodity, make_shared<string>("Commodity"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServiceRequestComplianceMetadata>(tmpReq->complianceMetadata)) {
    request->complianceMetadataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->complianceMetadata, make_shared<string>("ComplianceMetadata"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServiceRequestUpdateOption>(tmpReq->updateOption)) {
    request->updateOptionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateOption, make_shared<string>("UpdateOption"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmMetadata)) {
    query->insert(pair<string, string>("AlarmMetadata", *request->alarmMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalType)) {
    query->insert(pair<string, string>("ApprovalType", *request->approvalType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buildParameters)) {
    query->insert(pair<string, string>("BuildParameters", *request->buildParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityShrink)) {
    query->insert(pair<string, string>("Commodity", *request->commodityShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->complianceMetadataShrink)) {
    query->insert(pair<string, string>("ComplianceMetadata", *request->complianceMetadataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployMetadata)) {
    query->insert(pair<string, string>("DeployMetadata", *request->deployMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployType)) {
    query->insert(pair<string, string>("DeployType", *request->deployType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->logMetadata)) {
    query->insert(pair<string, string>("LogMetadata", *request->logMetadata));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->resellable)) {
    query->insert(pair<string, bool>("Resellable", *request->resellable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateServiceShrinkRequestServiceInfo>>(request->serviceInfo)) {
    query->insert(pair<string, vector<UpdateServiceShrinkRequestServiceInfo>>("ServiceInfo", *request->serviceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareType)) {
    query->insert(pair<string, string>("ShareType", *request->shareType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantType)) {
    query->insert(pair<string, string>("TenantType", *request->tenantType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trialDuration)) {
    query->insert(pair<string, long>("TrialDuration", *request->trialDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateOptionShrink)) {
    query->insert(pair<string, string>("UpdateOption", *request->updateOptionShrink));
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

UpdateServiceInstanceAttributeResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateServiceInstanceAttributeWithOptions(shared_ptr<UpdateServiceInstanceAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateServiceInstanceAttributeShrinkRequest> request = make_shared<UpdateServiceInstanceAttributeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateServiceInstanceAttributeRequestLicenseData>(tmpReq->licenseData)) {
    request->licenseDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->licenseData, make_shared<string>("LicenseData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseDataShrink)) {
    query->insert(pair<string, string>("LicenseData", *request->licenseDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("Reason", *request->reason));
  }
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
    {"action", boost::any(string("UpdateServiceInstanceAttribute"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceInstanceAttributeResponse(callApi(params, req, runtime));
}

UpdateServiceInstanceAttributeResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateServiceInstanceAttribute(shared_ptr<UpdateServiceInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceInstanceAttributeWithOptions(request, runtime);
}

UpdateServiceInstanceSpecResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateServiceInstanceSpecWithOptions(shared_ptr<UpdateServiceInstanceSpecRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateServiceInstanceSpecShrinkRequest> request = make_shared<UpdateServiceInstanceSpecShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableUserPrometheus)) {
    query->insert(pair<string, bool>("EnableUserPrometheus", *request->enableUserPrometheus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationName)) {
    query->insert(pair<string, string>("OperationName", *request->operationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    query->insert(pair<string, string>("Parameters", *request->parametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->predefinedParametersName)) {
    query->insert(pair<string, string>("PredefinedParametersName", *request->predefinedParametersName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceInstanceSpec"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceInstanceSpecResponse(callApi(params, req, runtime));
}

UpdateServiceInstanceSpecResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateServiceInstanceSpec(shared_ptr<UpdateServiceInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceInstanceSpecWithOptions(request, runtime);
}

UpdateServiceTestCaseResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateServiceTestCaseWithOptions(shared_ptr<UpdateServiceTestCaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->testCaseId)) {
    query->insert(pair<string, string>("TestCaseId", *request->testCaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->testCaseName)) {
    query->insert(pair<string, string>("TestCaseName", *request->testCaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->testConfig)) {
    query->insert(pair<string, string>("TestConfig", *request->testConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceTestCase"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceTestCaseResponse(callApi(params, req, runtime));
}

UpdateServiceTestCaseResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateServiceTestCase(shared_ptr<UpdateServiceTestCaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceTestCaseWithOptions(request, runtime);
}

UpdateSharedAccountPermissionResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateSharedAccountPermissionWithOptions(shared_ptr<UpdateSharedAccountPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permission)) {
    query->insert(pair<string, string>("Permission", *request->permission));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userAliUid)) {
    query->insert(pair<string, long>("UserAliUid", *request->userAliUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSharedAccountPermission"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSharedAccountPermissionResponse(callApi(params, req, runtime));
}

UpdateSharedAccountPermissionResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateSharedAccountPermission(shared_ptr<UpdateSharedAccountPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSharedAccountPermissionWithOptions(request, runtime);
}

UpdateSupplierInformationResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateSupplierInformationWithOptions(shared_ptr<UpdateSupplierInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<UpdateSupplierInformationRequestDeliverySettings>(request->deliverySettings)) {
    query->insert(pair<string, UpdateSupplierInformationRequestDeliverySettings>("DeliverySettings", *request->deliverySettings));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationIp)) {
    query->insert(pair<string, string>("OperationIp", *request->operationIp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->operationMfaPresent)) {
    query->insert(pair<string, bool>("OperationMfaPresent", *request->operationMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierDesc)) {
    query->insert(pair<string, string>("SupplierDesc", *request->supplierDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierLogo)) {
    query->insert(pair<string, string>("SupplierLogo", *request->supplierLogo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierUrl)) {
    query->insert(pair<string, string>("SupplierUrl", *request->supplierUrl));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSupplierInformationRequestSupportContacts>>(request->supportContacts)) {
    query->insert(pair<string, vector<UpdateSupplierInformationRequestSupportContacts>>("SupportContacts", *request->supportContacts));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSupplierInformation"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSupplierInformationResponse(callApi(params, req, runtime));
}

UpdateSupplierInformationResponse Alibabacloud_ComputeNestSupplier20210521::Client::updateSupplierInformation(shared_ptr<UpdateSupplierInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSupplierInformationWithOptions(request, runtime);
}

UpgradeServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::upgradeServiceInstanceWithOptions(shared_ptr<UpgradeServiceInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpgradeServiceInstanceShrinkRequest> request = make_shared<UpgradeServiceInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dryRun)) {
    query->insert(pair<string, string>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    query->insert(pair<string, string>("Parameters", *request->parametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeServiceInstance"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeServiceInstanceResponse(callApi(params, req, runtime));
}

UpgradeServiceInstanceResponse Alibabacloud_ComputeNestSupplier20210521::Client::upgradeServiceInstance(shared_ptr<UpgradeServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeServiceInstanceWithOptions(request, runtime);
}

WithdrawServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::withdrawServiceWithOptions(shared_ptr<WithdrawServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("WithdrawService"))},
    {"version", boost::any(string("2021-05-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WithdrawServiceResponse(callApi(params, req, runtime));
}

WithdrawServiceResponse Alibabacloud_ComputeNestSupplier20210521::Client::withdrawService(shared_ptr<WithdrawServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return withdrawServiceWithOptions(request, runtime);
}

