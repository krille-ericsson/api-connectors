# coding: utf-8

"""
    Bybit API

    ## REST API for the Bybit Exchange.   # noqa: E501

    OpenAPI spec version: 1.0.0
    Contact: support@bybit.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import unittest

import swagger_client
from swagger_client.api.execution_api import ExecutionApi  # noqa: E501
from swagger_client.rest import ApiException


class TestExecutionApi(unittest.TestCase):
    """ExecutionApi unit test stubs"""

    def setUp(self):
        self.api = swagger_client.api.execution_api.ExecutionApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_execution_get_trades(self):
        """Test case for execution_get_trades

        Get the trade records of a order.  # noqa: E501
        """
        pass


if __name__ == '__main__':
    unittest.main()
