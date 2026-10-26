
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StreetAddressData.h"

class StreetAddress
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string id;

    private: std::string name;

    private: std::string street;

    private: std::string city;

    private: std::string state;

    private: std::string code;

    private: std::string country;

    private: bool isDefault = false;

public: StreetAddress(){
}


public: StreetAddress(Node node){

    Node nameNode = DomSearchHelper::getNode(StreetAddressData::NAME, node.getChildNodes());;
    
this->name= DomNodeHelper::getTextNodeValue(nameNode);
    

    Node streetNode = DomSearchHelper::getNode(StreetAddressData::STREET, node.getChildNodes());;
    
this->street= DomNodeHelper::getTextNodeValue(streetNode);
    

    Node cityNode = DomSearchHelper::getNode(StreetAddressData::CITY, node.getChildNodes());;
    
this->city= DomNodeHelper::getTextNodeValue(cityNode);
    

    Node stateNode = DomSearchHelper::getNode(StreetAddressData::STATE, node.getChildNodes());;
    
this->state= DomNodeHelper::getTextNodeValue(stateNode);
    

    Node codeNode = DomSearchHelper::getNode(StreetAddressData::CODE, node.getChildNodes());;
    
this->code= DomNodeHelper::getTextNodeValue(codeNode);
    

    Node countryNode = DomSearchHelper::getNode(StreetAddressData::COUNTRY, node.getChildNodes());;
    
this->country= DomNodeHelper::getTextNodeValue(countryNode);
    
this->log();
    
}


public: StreetAddress(StreetAddress streetAddress){
this->id= streetAddress.getId();
    
this->name= streetAddress.getName();
    
this->street= streetAddress.getStreet();
    
this->city= streetAddress.getCity();
    
this->state= streetAddress.getState();
    
this->code= streetAddress.getCode();
    
this->country= streetAddress.getCountry();
    
this->isDefault= streetAddress.isDefault();
    
this->log();
    
}


public: StreetAddress(HttpServletRequest request){
this->setId(request.getParameter(StreetAddressData::ID));
    
this->setName(request.getParameter(StreetAddressData::NAME));
    
this->setStreet(request.getParameter(StreetAddressData::STREET));
    
this->setCity(request.getParameter(StreetAddressData::CITY));
    
this->setState(request.getParameter(StreetAddressData::STATE));
    
this->setCode(request.getParameter(StreetAddressData::CODE));
    
this->setCountry(request.getParameter(StreetAddressData::COUNTRY));
    
this->log();
    
}


public: StreetAddress(std::string name, std::string street, std::string city, std::string state, std::string code, std::string country){
this->name= name;
    
this->street= street;
    
this->city= city;
    
this->state= state;
    
this->code= code;
    
this->country= country;
    
this->log();
    
}


public: StreetAddress(HashMap<Object*, Object*> address){
this->id= address.get(StreetAddressData::ID);
    
this->name= address.get(StreetAddressData::NAME);
    
this->street= address.get(StreetAddressData::STREET);
    
this->city= address.get(StreetAddressData::CITY);
    
this->state= address.get(StreetAddressData::STATE);
    
this->code= address.get(StreetAddressData::CODE);
    
this->country= address.get(StreetAddressData::COUNTRY);
    

    std::string def = address.get(StreetAddressData::DEFAULT);;
    

                        if(true && def.compare(StreetAddressData::DEFAULT) == 0)
                        
                                    {
                                    this->isDefault= true;
    

                                    }
                                
                        else {
                            this->isDefault= false;
    

                        }
                            
this->log();
    
}


    private: void log(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF("Created Address: \n" +this->toHashMap(), this, "log");
    

                                    }
                                
}


    public: void setId(std::string id){
this->id= id;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


    public: void setStreet(std::string value){
this->street= value;
    
}


    public: void setCity(std::string value){
this->city= value;
    
}


    public: void setState(std::string value){
this->state= value;
    
}


    public: void setCode(std::string value){
this->code= value;
    
}


    public: void setCountry(std::string value){
this->country= value;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getStreet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->street;
    
}


    public: std::string getCity(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->city;
    
}


    public: std::string getState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->state;
    
}


    public: std::string getCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->code;
    
}


    public: std::string getCountry(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->country;
    
}


    public: std::string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    public: bool isDefault(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isDefault;
    
}


    public: Boolean isEmpty(){

    std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;;
    

                        if(this->getName() == 
                                    nullptr
                                 && this->getName().compareTo(EMPTY_STRING) == 0 && this->getStreet() == 
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


    public: Boolean isValid(){

    std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;;
    

                        if(this->getName() == 
                                    nullptr
                                 || this->getName().compareTo(EMPTY_STRING) == 0 || this->getStreet() == 
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


    public: std::string validationInfo(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Address Failed To Validate - All fields must contain data.<br></br>");
    

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil.isValidRequired(this->getName(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer.append("Please enter a valid name");
    
stringBuffer.append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->getStreet(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer.append("Please enter a valid street");
    
stringBuffer.append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->getCity(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer.append("Please enter a valid city");
    
stringBuffer.append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->getState(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer.append("Please enter a valid state");
    
stringBuffer.append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->getCode(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer.append("Please enter a valid zipcode");
    
stringBuffer.append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->getCountry(), StreetAddressData::MIN, StreetAddressData::MAX))
                        
                                    {
                                    stringBuffer.append("Please enter a valid country");
    
stringBuffer.append("<br></br>");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    private: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    private: Node toValidationInfoNode(Document document){

        try {
            
    Node node = document.createElement(StreetAddressData::FORM);;
    
node.appendChild(this->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "toValidationInfoNode", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: HashMap<Object*, Object*> toHashMap(){

    HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.put(StreetAddressData::ID, this->id);
    
hashMap.put(StreetAddressData::NAME, this->name);
    
hashMap.put(StreetAddressData::STREET, this->street);
    
hashMap.put(StreetAddressData::CITY, this->city);
    
hashMap.put(StreetAddressData::STATE, this->state);
    
hashMap.put(StreetAddressData::CODE, this->code);
    
hashMap.put(StreetAddressData::COUNTRY, this->country);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    HashMap<Object*, Object*> hashMap = this->toHashMap();;
    

    Set keySet = hashMap.keys();;
    

    std::vector<Object*> keyArray = keySet.();;
    

    int32_t size = keyArray.size();;
    

    Node node = document.createElement(StreetAddressData::ADDRESS);;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string name = keyArray[i];;
    

    std::string value = stringUtil.getNonNull(hashMap.get(name));;
    
node.appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

