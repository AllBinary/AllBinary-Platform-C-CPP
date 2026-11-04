
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ADDRESS_STREETADDRESS_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_ADDRESS_STREETADDRESS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/address/StreetAddress.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/address/StreetAddressData.h"


StreetAddress::StreetAddress() : logUtil(LogUtil::getInstance()){
}


StreetAddress::StreetAddress(Node* node) : logUtil(LogUtil::getInstance()){

    Node* nameNode = DomSearchHelper::getNode(StreetAddressData::NAME, node->getChildNodes());;
    
this->name= DomNodeHelper::getTextNodeValue(nameNode);
    

    Node* streetNode = DomSearchHelper::getNode(StreetAddressData::STREET, node->getChildNodes());;
    
this->street= DomNodeHelper::getTextNodeValue(streetNode);
    

    Node* cityNode = DomSearchHelper::getNode(StreetAddressData::CITY, node->getChildNodes());;
    
this->city= DomNodeHelper::getTextNodeValue(cityNode);
    

    Node* stateNode = DomSearchHelper::getNode(StreetAddressData::STATE, node->getChildNodes());;
    
this->state= DomNodeHelper::getTextNodeValue(stateNode);
    

    Node* codeNode = DomSearchHelper::getNode(StreetAddressData::CODE, node->getChildNodes());;
    
this->code= DomNodeHelper::getTextNodeValue(codeNode);
    

    Node* countryNode = DomSearchHelper::getNode(StreetAddressData::COUNTRY, node->getChildNodes());;
    
this->country= DomNodeHelper::getTextNodeValue(countryNode);
    
this->log();
    
}


StreetAddress::StreetAddress(StreetAddress* streetAddress) : logUtil(LogUtil::getInstance()){
this->id= streetAddress->getId();
    
this->name= streetAddress->getName();
    
this->street= streetAddress->getStreet();
    
this->city= streetAddress->getCity();
    
this->state= streetAddress->getState();
    
this->code= streetAddress->getCode();
    
this->country= streetAddress->getCountry();
    
this->isDefault_= streetAddress->isDefault();
    
this->log();
    
}


StreetAddress::StreetAddress(HttpServletRequest* request) : logUtil(LogUtil::getInstance()){
this->setId(request->getParameter(StreetAddressData::ID));
    
this->setName(request->getParameter(StreetAddressData::NAME));
    
this->setStreet(request->getParameter(StreetAddressData::STREET));
    
this->setCity(request->getParameter(StreetAddressData::CITY));
    
this->setState(request->getParameter(StreetAddressData::STATE));
    
this->setCode(request->getParameter(StreetAddressData::CODE));
    
this->setCountry(request->getParameter(StreetAddressData::COUNTRY));
    
this->log();
    
}


StreetAddress::StreetAddress(std::string name, std::string street, std::string city, std::string state, std::string code, std::string country) : logUtil(LogUtil::getInstance()){
this->name= name;
    
this->street= street;
    
this->city= city;
    
this->state= state;
    
this->code= code;
    
this->country= country;
    
this->log();
    
}


StreetAddress::StreetAddress(HashMap<Object*, Object*>* address) : logUtil(LogUtil::getInstance()){
this->id= JavaBoxes::unbox<std::string>(address->get(StreetAddressData::ID));
    
this->name= JavaBoxes::unbox<std::string>(address->get(StreetAddressData::NAME));
    
this->street= JavaBoxes::unbox<std::string>(address->get(StreetAddressData::STREET));
    
this->city= JavaBoxes::unbox<std::string>(address->get(StreetAddressData::CITY));
    
this->state= JavaBoxes::unbox<std::string>(address->get(StreetAddressData::STATE));
    
this->code= JavaBoxes::unbox<std::string>(address->get(StreetAddressData::CODE));
    
this->country= JavaBoxes::unbox<std::string>(address->get(StreetAddressData::COUNTRY));
    

    std::string def = JavaBoxes::unbox<std::string>(address->get(StreetAddressData::DEFAULT));;
    

                        if(true && def.compare(StreetAddressData::DEFAULT) == 0)
                        
                                    {
                                    this->isDefault_= true;
    

                                    }
                                
                        else {
                            this->isDefault_= false;
    

                        }
                            
this->log();
    
}


    auto StreetAddress::log() -> void{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Created Address: \n") +JavaString::valueOf(this->toHashMap()), this, "log");
    

                                    }
                                
}


    auto StreetAddress::setId(std::string id) -> void{
this->id= id;
    
}


    auto StreetAddress::setName(std::string name) -> void{
this->name= name;
    
}


    auto StreetAddress::setStreet(std::string value) -> void{
this->street= value;
    
}


    auto StreetAddress::setCity(std::string value) -> void{
this->city= value;
    
}


    auto StreetAddress::setState(std::string value) -> void{
this->state= value;
    
}


    auto StreetAddress::setCode(std::string value) -> void{
this->code= value;
    
}


    auto StreetAddress::setCountry(std::string value) -> void{
this->country= value;
    
}


    auto StreetAddress::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto StreetAddress::getStreet() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->street;
    
}


    auto StreetAddress::getCity() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->city;
    
}


    auto StreetAddress::getState() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->state;
    
}


    auto StreetAddress::getCode() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->code;
    
}


    auto StreetAddress::getCountry() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->country;
    
}


    auto StreetAddress::getId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->id;
    
}


    auto StreetAddress::isDefault() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isDefault_;
    
}


    auto StreetAddress::isEmpty() -> bool{

    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(false && this->getName().compare(EMPTY_STRING) == 0 && this->getStreet() == 
                                    nullptr
                                 && this->getStreet().compareTo(EMPTY_STRING) == 0 && this->getCity() == 
                                    nullptr
                                 && this->getCity().compareTo(EMPTY_STRING) == 0 && this->getState() == 
                                    nullptr
                                 && this->getState().compareTo(EMPTY_STRING) == 0 && this->getCode() == 
                                    nullptr
                                 && this->getCode().compareTo(EMPTY_STRING) == 0 && this->getCountry() == 
                                    nullptr
                                 && this->getCountry().compareTo(EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}


    auto StreetAddress::isValid() -> bool{

    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(false || this->getName().compare(EMPTY_STRING) == 0 || this->getStreet() == 
                                    nullptr
                                 || this->getStreet().compareTo(EMPTY_STRING) == 0 || this->getCity() == 
                                    nullptr
                                 || this->getCity().compareTo(EMPTY_STRING) == 0 || this->getState() == 
                                    nullptr
                                 || this->getState().compareTo(EMPTY_STRING) == 0 || this->getCode() == 
                                    nullptr
                                 || this->getCode().compareTo(EMPTY_STRING) == 0 || this->getCountry() == 
                                    nullptr
                                 || this->getCountry().compareTo(EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


    auto StreetAddress::validationInfo() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Address Failed To Validate - All fields must contain data.<br></br>");
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isValidRequired(this->getName(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer->append("Please enter a valid name");
    
stringBuffer->append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->getStreet(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer->append("Please enter a valid street");
    
stringBuffer->append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->getCity(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer->append("Please enter a valid city");
    
stringBuffer->append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->getState(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer->append("Please enter a valid state");
    
stringBuffer->append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->getCode(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer->append("Please enter a valid zipcode");
    
stringBuffer->append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->getCountry(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer->append("Please enter a valid country");
    
stringBuffer->append("<br></br>");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto StreetAddress::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto StreetAddress::toValidationInfoNode(Document* document) -> Node*{

        try {
            
    Node* node = document->createElement(StreetAddressData::FORM);;
    
node->appendChild(this->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "toValidationInfoNode", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StreetAddress::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(StreetAddressData::ID, this->id);
    
hashMap->put(StreetAddressData::NAME, this->name);
    
hashMap->put(StreetAddressData::STREET, this->street);
    
hashMap->put(StreetAddressData::CITY, this->city);
    
hashMap->put(StreetAddressData::STATE, this->state);
    
hashMap->put(StreetAddressData::CODE, this->code);
    
hashMap->put(StreetAddressData::COUNTRY, this->country);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto StreetAddress::toXmlNode(Document* document) -> Node*{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    HashMap<Object*, Object*>* hashMap = this->toHashMap();;
    

    Set* keySet = hashMap->keys();;
    

    std::vector<Object*> keyArray = keySet->toArray();;
    

    int32_t size = keyArray.size();;
    

    Node* node = document->createElement(StreetAddressData::ADDRESS);;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string name = JavaBoxes::unbox<std::string>(keyArray[i]);;
    

    std::string value = stringUtil->getNonNull(JavaBoxes::unbox<std::string>(hashMap->get(name)));;
    
node->appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_ADDRESS_STREETADDRESS_CPP
