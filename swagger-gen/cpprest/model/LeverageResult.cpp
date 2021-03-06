/**
 * Bybit API
 * ## REST API for the Bybit Exchange. 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "LeverageResult.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

LeverageResult::LeverageResult()
{
    m_BTCUSDIsSet = false;
    m_EOSUSDIsSet = false;
    m_ETHUSDIsSet = false;
    m_XRPUSDIsSet = false;
}

LeverageResult::~LeverageResult()
{
}

void LeverageResult::validate()
{
    // TODO: implement validation
}

web::json::value LeverageResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_BTCUSDIsSet)
    {
        val[utility::conversions::to_string_t("BTCUSD")] = ModelBase::toJson(m_BTCUSD);
    }
    if(m_EOSUSDIsSet)
    {
        val[utility::conversions::to_string_t("EOSUSD")] = ModelBase::toJson(m_EOSUSD);
    }
    if(m_ETHUSDIsSet)
    {
        val[utility::conversions::to_string_t("ETHUSD")] = ModelBase::toJson(m_ETHUSD);
    }
    if(m_XRPUSDIsSet)
    {
        val[utility::conversions::to_string_t("XRPUSD")] = ModelBase::toJson(m_XRPUSD);
    }

    return val;
}

void LeverageResult::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("BTCUSD")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("BTCUSD")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setBTCUSD( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("EOSUSD")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("EOSUSD")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setEOSUSD( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ETHUSD")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ETHUSD")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setETHUSD( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("XRPUSD")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("XRPUSD")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setXRPUSD( newItem );
        }
    }
}

void LeverageResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_BTCUSDIsSet)
    {
        if (m_BTCUSD.get())
        {
            m_BTCUSD->toMultipart(multipart, utility::conversions::to_string_t("BTCUSD."));
        }
        
    }
    if(m_EOSUSDIsSet)
    {
        if (m_EOSUSD.get())
        {
            m_EOSUSD->toMultipart(multipart, utility::conversions::to_string_t("EOSUSD."));
        }
        
    }
    if(m_ETHUSDIsSet)
    {
        if (m_ETHUSD.get())
        {
            m_ETHUSD->toMultipart(multipart, utility::conversions::to_string_t("ETHUSD."));
        }
        
    }
    if(m_XRPUSDIsSet)
    {
        if (m_XRPUSD.get())
        {
            m_XRPUSD->toMultipart(multipart, utility::conversions::to_string_t("XRPUSD."));
        }
        
    }
}

void LeverageResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("BTCUSD")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("BTCUSD")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("BTCUSD."));
            setBTCUSD( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("EOSUSD")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("EOSUSD")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("EOSUSD."));
            setEOSUSD( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ETHUSD")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("ETHUSD")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("ETHUSD."));
            setETHUSD( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("XRPUSD")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("XRPUSD")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("XRPUSD."));
            setXRPUSD( newItem );
        }
    }
}

std::shared_ptr<Object> LeverageResult::getBTCUSD() const
{
    return m_BTCUSD;
}


void LeverageResult::setBTCUSD(std::shared_ptr<Object> value)
{
    m_BTCUSD = value;
    m_BTCUSDIsSet = true;
}
bool LeverageResult::bTCUSDIsSet() const
{
    return m_BTCUSDIsSet;
}

void LeverageResult::unsetBTCUSD()
{
    m_BTCUSDIsSet = false;
}

std::shared_ptr<Object> LeverageResult::getEOSUSD() const
{
    return m_EOSUSD;
}


void LeverageResult::setEOSUSD(std::shared_ptr<Object> value)
{
    m_EOSUSD = value;
    m_EOSUSDIsSet = true;
}
bool LeverageResult::eOSUSDIsSet() const
{
    return m_EOSUSDIsSet;
}

void LeverageResult::unsetEOSUSD()
{
    m_EOSUSDIsSet = false;
}

std::shared_ptr<Object> LeverageResult::getETHUSD() const
{
    return m_ETHUSD;
}


void LeverageResult::setETHUSD(std::shared_ptr<Object> value)
{
    m_ETHUSD = value;
    m_ETHUSDIsSet = true;
}
bool LeverageResult::eTHUSDIsSet() const
{
    return m_ETHUSDIsSet;
}

void LeverageResult::unsetETHUSD()
{
    m_ETHUSDIsSet = false;
}

std::shared_ptr<Object> LeverageResult::getXRPUSD() const
{
    return m_XRPUSD;
}


void LeverageResult::setXRPUSD(std::shared_ptr<Object> value)
{
    m_XRPUSD = value;
    m_XRPUSDIsSet = true;
}
bool LeverageResult::xRPUSDIsSet() const
{
    return m_XRPUSDIsSet;
}

void LeverageResult::unsetXRPUSD()
{
    m_XRPUSDIsSet = false;
}

}
}
}
}

