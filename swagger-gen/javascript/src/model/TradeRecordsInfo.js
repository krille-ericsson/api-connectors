/**
 * Bybit API
 * ## REST API for the Bybit Exchange. 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.8
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.BybitApi) {
      root.BybitApi = {};
    }
    root.BybitApi.TradeRecordsInfo = factory(root.BybitApi.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The TradeRecordsInfo model module.
   * @module model/TradeRecordsInfo
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>TradeRecordsInfo</code>.
   * Get the trade records of a order response
   * @alias module:model/TradeRecordsInfo
   * @class
   */
  var exports = function() {
    var _this = this;





















  };

  /**
   * Constructs a <code>TradeRecordsInfo</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/TradeRecordsInfo} obj Optional instance to populate.
   * @return {module:model/TradeRecordsInfo} The populated <code>TradeRecordsInfo</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('closed_size')) {
        obj['closed_size'] = ApiClient.convertToType(data['closed_size'], 'Number');
      }
      if (data.hasOwnProperty('cross_seq')) {
        obj['cross_seq'] = ApiClient.convertToType(data['cross_seq'], 'Number');
      }
      if (data.hasOwnProperty('exec_fee')) {
        obj['exec_fee'] = ApiClient.convertToType(data['exec_fee'], 'String');
      }
      if (data.hasOwnProperty('exec_id')) {
        obj['exec_id'] = ApiClient.convertToType(data['exec_id'], 'String');
      }
      if (data.hasOwnProperty('exec_price')) {
        obj['exec_price'] = ApiClient.convertToType(data['exec_price'], 'String');
      }
      if (data.hasOwnProperty('exec_qty')) {
        obj['exec_qty'] = ApiClient.convertToType(data['exec_qty'], 'Number');
      }
      if (data.hasOwnProperty('exec_time')) {
        obj['exec_time'] = ApiClient.convertToType(data['exec_time'], 'String');
      }
      if (data.hasOwnProperty('exec_type')) {
        obj['exec_type'] = ApiClient.convertToType(data['exec_type'], 'String');
      }
      if (data.hasOwnProperty('exec_value')) {
        obj['exec_value'] = ApiClient.convertToType(data['exec_value'], 'String');
      }
      if (data.hasOwnProperty('fee_rate')) {
        obj['fee_rate'] = ApiClient.convertToType(data['fee_rate'], 'String');
      }
      if (data.hasOwnProperty('last_liquidity_ind')) {
        obj['last_liquidity_ind'] = ApiClient.convertToType(data['last_liquidity_ind'], 'String');
      }
      if (data.hasOwnProperty('leaves_qty')) {
        obj['leaves_qty'] = ApiClient.convertToType(data['leaves_qty'], 'Number');
      }
      if (data.hasOwnProperty('nth_fill')) {
        obj['nth_fill'] = ApiClient.convertToType(data['nth_fill'], 'Number');
      }
      if (data.hasOwnProperty('order_id')) {
        obj['order_id'] = ApiClient.convertToType(data['order_id'], 'String');
      }
      if (data.hasOwnProperty('order_price')) {
        obj['order_price'] = ApiClient.convertToType(data['order_price'], 'String');
      }
      if (data.hasOwnProperty('order_qty')) {
        obj['order_qty'] = ApiClient.convertToType(data['order_qty'], 'Number');
      }
      if (data.hasOwnProperty('order_type')) {
        obj['order_type'] = ApiClient.convertToType(data['order_type'], 'String');
      }
      if (data.hasOwnProperty('side')) {
        obj['side'] = ApiClient.convertToType(data['side'], 'String');
      }
      if (data.hasOwnProperty('symbol')) {
        obj['symbol'] = ApiClient.convertToType(data['symbol'], 'String');
      }
      if (data.hasOwnProperty('user_id')) {
        obj['user_id'] = ApiClient.convertToType(data['user_id'], 'Number');
      }
    }
    return obj;
  }

  /**
   * @member {Number} closed_size
   */
  exports.prototype['closed_size'] = undefined;
  /**
   * @member {Number} cross_seq
   */
  exports.prototype['cross_seq'] = undefined;
  /**
   * @member {String} exec_fee
   */
  exports.prototype['exec_fee'] = undefined;
  /**
   * @member {String} exec_id
   */
  exports.prototype['exec_id'] = undefined;
  /**
   * @member {String} exec_price
   */
  exports.prototype['exec_price'] = undefined;
  /**
   * @member {Number} exec_qty
   */
  exports.prototype['exec_qty'] = undefined;
  /**
   * @member {String} exec_time
   */
  exports.prototype['exec_time'] = undefined;
  /**
   * @member {String} exec_type
   */
  exports.prototype['exec_type'] = undefined;
  /**
   * @member {String} exec_value
   */
  exports.prototype['exec_value'] = undefined;
  /**
   * @member {String} fee_rate
   */
  exports.prototype['fee_rate'] = undefined;
  /**
   * @member {String} last_liquidity_ind
   */
  exports.prototype['last_liquidity_ind'] = undefined;
  /**
   * @member {Number} leaves_qty
   */
  exports.prototype['leaves_qty'] = undefined;
  /**
   * @member {Number} nth_fill
   */
  exports.prototype['nth_fill'] = undefined;
  /**
   * @member {String} order_id
   */
  exports.prototype['order_id'] = undefined;
  /**
   * @member {String} order_price
   */
  exports.prototype['order_price'] = undefined;
  /**
   * @member {Number} order_qty
   */
  exports.prototype['order_qty'] = undefined;
  /**
   * @member {String} order_type
   */
  exports.prototype['order_type'] = undefined;
  /**
   * @member {String} side
   */
  exports.prototype['side'] = undefined;
  /**
   * @member {String} symbol
   */
  exports.prototype['symbol'] = undefined;
  /**
   * @member {Number} user_id
   */
  exports.prototype['user_id'] = undefined;



  return exports;
}));


