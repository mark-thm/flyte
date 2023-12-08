# coding: utf-8

"""
    flyteidl/service/admin.proto

    No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)  # noqa: E501

    OpenAPI spec version: version not set
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six

from flyteadmin.models.core_artifact_id import CoreArtifactID  # noqa: F401,E501
from flyteadmin.models.core_artifact_tag import CoreArtifactTag  # noqa: F401,E501
from flyteadmin.models.core_literal_type import CoreLiteralType  # noqa: F401,E501


class CoreVariable(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'type': 'CoreLiteralType',
        'description': 'str',
        'artifact_partial_id': 'CoreArtifactID',
        'artifact_tag': 'CoreArtifactTag'
    }

    attribute_map = {
        'type': 'type',
        'description': 'description',
        'artifact_partial_id': 'artifact_partial_id',
        'artifact_tag': 'artifact_tag'
    }

    def __init__(self, type=None, description=None, artifact_partial_id=None, artifact_tag=None):  # noqa: E501
        """CoreVariable - a model defined in Swagger"""  # noqa: E501

        self._type = None
        self._description = None
        self._artifact_partial_id = None
        self._artifact_tag = None
        self.discriminator = None

        if type is not None:
            self.type = type
        if description is not None:
            self.description = description
        if artifact_partial_id is not None:
            self.artifact_partial_id = artifact_partial_id
        if artifact_tag is not None:
            self.artifact_tag = artifact_tag

    @property
    def type(self):
        """Gets the type of this CoreVariable.  # noqa: E501

        Variable literal type.  # noqa: E501

        :return: The type of this CoreVariable.  # noqa: E501
        :rtype: CoreLiteralType
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this CoreVariable.

        Variable literal type.  # noqa: E501

        :param type: The type of this CoreVariable.  # noqa: E501
        :type: CoreLiteralType
        """

        self._type = type

    @property
    def description(self):
        """Gets the description of this CoreVariable.  # noqa: E501


        :return: The description of this CoreVariable.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this CoreVariable.


        :param description: The description of this CoreVariable.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def artifact_partial_id(self):
        """Gets the artifact_partial_id of this CoreVariable.  # noqa: E501

        +optional This object allows the user to specify how Artifacts are created. name, tag, partitions can be specified. The other fields (version and project/domain) are ignored.  # noqa: E501

        :return: The artifact_partial_id of this CoreVariable.  # noqa: E501
        :rtype: CoreArtifactID
        """
        return self._artifact_partial_id

    @artifact_partial_id.setter
    def artifact_partial_id(self, artifact_partial_id):
        """Sets the artifact_partial_id of this CoreVariable.

        +optional This object allows the user to specify how Artifacts are created. name, tag, partitions can be specified. The other fields (version and project/domain) are ignored.  # noqa: E501

        :param artifact_partial_id: The artifact_partial_id of this CoreVariable.  # noqa: E501
        :type: CoreArtifactID
        """

        self._artifact_partial_id = artifact_partial_id

    @property
    def artifact_tag(self):
        """Gets the artifact_tag of this CoreVariable.  # noqa: E501


        :return: The artifact_tag of this CoreVariable.  # noqa: E501
        :rtype: CoreArtifactTag
        """
        return self._artifact_tag

    @artifact_tag.setter
    def artifact_tag(self, artifact_tag):
        """Sets the artifact_tag of this CoreVariable.


        :param artifact_tag: The artifact_tag of this CoreVariable.  # noqa: E501
        :type: CoreArtifactTag
        """

        self._artifact_tag = artifact_tag

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(CoreVariable, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, CoreVariable):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other