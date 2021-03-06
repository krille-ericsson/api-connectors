/* 
 * Bybit API
 *
 * ## REST API for the Bybit Exchange. 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using IO.Swagger.Client;
using IO.Swagger.Api;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing KlineApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class KlineApiTests
    {
        private KlineApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new KlineApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of KlineApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' KlineApi
            //Assert.IsInstanceOfType(typeof(KlineApi), instance, "instance is a KlineApi");
        }

        
        /// <summary>
        /// Test KlineGet
        /// </summary>
        [Test]
        public void KlineGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string symbol = null;
            //string interval = null;
            //decimal? from = null;
            //string limit = null;
            //var response = instance.KlineGet(symbol, interval, from, limit);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
    }

}
