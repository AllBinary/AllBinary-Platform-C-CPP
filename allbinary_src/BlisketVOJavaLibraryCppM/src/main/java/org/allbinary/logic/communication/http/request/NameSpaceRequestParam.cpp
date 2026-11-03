
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAM_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/request/NameSpaceRequestParam.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/logic/visual/dhtml/html/name/HtmlNameMathData.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h"


NameSpaceRequestParam::NameSpaceRequestParam(std::string nameSpace, std::string value) : logUtil(LogUtil::getInstance()){
this->nameSpaceVector= new BasicArrayListD();
    
this->nameSpacePropertiesHashMap= StdUtil::getInstance()->createHashMap();
    
this->value= value;
    

    int32_t beginIndex = JavaString::indexOf(nameSpace, NameSpaceRequestParamData::NAME);;
    

                        if(beginIndex < 0)
                        
                                    {
                                    


                            throw Exception("Not a NameSpaceRequest");
                    

                                    }
                                

    std::string packages = JavaString::substring(nameSpace, beginIndex +NameSpaceRequestParamData::NAME->length() +NameSpaceRequestParamData::SEP->length());;
    

    Tokenizer* sepTokenizer = new Tokenizer(NameSpaceRequestParamData::SEP);;
    

    BasicArrayList* nameSpaceWithPropertiesVector = sepTokenizer->getTokensFromString(packages, new BasicArrayListD());;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("\nSep Tokens: ") +JavaString::valueOf(nameSpaceWithPropertiesVector->toString()), this, "NameSpaceRequestParam()");
    

                                    }
                                

    Tokenizer* nameSpaceAndPropertiesTokenizer = new Tokenizer(NameSpaceRequestParamData::PROPERTIES);;
    

    int32_t packageIndex = 0;;
    

    BasicArrayList* list = new BasicArrayListD();;
    

    int32_t index = 0;;
    

    int32_t size = nameSpaceWithPropertiesVector->size();;
    

        while(index < size)
        {

    std::string nameSpaceWithProperties = JavaBoxes::unbox<std::string>(nameSpaceWithPropertiesVector->get(index++));;
    
list->clear();
    

    BasicArrayList* nameSpaceAndPropertiesVector = nameSpaceAndPropertiesTokenizer->getTokensFromString(nameSpaceWithProperties, list);;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("\nPackageName and PackageName Properties Tokens: ") +JavaString::valueOf(nameSpaceAndPropertiesVector->toString()), this, "NameSpaceRequestParam()");
    

                                    }
                                

                        if(nameSpaceAndPropertiesVector->size() > 0)
                        
                                    {
                                    
    std::string packageName = JavaBoxes::unbox<std::string>(nameSpaceAndPropertiesVector->get(0));;
    

                        if(false)
                        
                                    {
                                    


                            throw Exception("Package Name Is Null");
                    

                                    }
                                
this->nameSpaceVector->add(packageName);
    

                        if(nameSpaceAndPropertiesVector->size() > 1)
                        
                                    {
                                    
    std::string properties = JavaBoxes::unbox<std::string>(nameSpaceAndPropertiesVector->get(1));;
    

    HashMap<Object*, Object*>* packagePropertiesHashMap = this->generatePackagePropertiesHashMap(properties);;
    
this->nameSpacePropertiesHashMap->put(std::to_string(packageIndex)packagePropertiesHashMap);
    

                                    }
                                
packageIndex++;
    

                                    }
                                
}


                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("NameSpace: ") +JavaString::valueOf(this->nameSpaceVector->toString()), this, "NameSpaceRequestParam()");
    

                                    }
                                
}


    auto NameSpaceRequestParam::getPackages() -> BasicArrayList*{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("NameSpace: ") +JavaString::valueOf(this->nameSpaceVector->toString()), this, "getPackages()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->nameSpaceVector;
    
}


    auto NameSpaceRequestParam::getPackageProperties(int32_t packageIndex) -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* packagePropertiesHashMap = dynamic_cast<HashMap*>(this->nameSpacePropertiesHashMap->get(std::to_string(packageIndex)));;
    

                        if(packagePropertiesHashMap == 
                                    nullptr
                                )
                        
                                    {
                                    packagePropertiesHashMap= StdUtil::getInstance()->createHashMap();
    

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Package Properties: ") +JavaString::valueOf(packagePropertiesHashMap->toString()), this, "getPackagesProperties()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return packagePropertiesHashMap;
    
}


    auto NameSpaceRequestParam::getValue() -> std::string{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("\nValue: ") +JavaString::valueOf(this->value), this, "getValue()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->value;
    
}


                //@Throws(Exception.constructor)
            
    auto NameSpaceRequestParam::generatePackagePropertiesHashMap(std::string properties) -> HashMap<Object*, Object*>*{

    Tokenizer* propertiesTokenizer = new Tokenizer(NameSpaceRequestParamData::PROPERTIESSEPARATOR);;
    

    HashMap<Object*, Object*>* packagePropertiesHashMap = StdUtil::getInstance()->createHashMap();;
    

    BasicArrayList* propertyVector = propertiesTokenizer->getTokensFromString(properties, new BasicArrayListD());;
    

    BasicArrayList* list = new BasicArrayListD();;
    

    Tokenizer* propertyTokenizer = new Tokenizer(HtmlNameMathData::getInstance()->EQUALS);;
    

    int32_t index = 0;;
    

    int32_t size = propertyVector->size();;
    

        while(index < size)
        {

    std::string property = JavaBoxes::unbox<std::string>(propertyVector->get(index));;
    
list->clear();
    

    BasicArrayList* propertyNameValueVector = propertyTokenizer->getTokensFromString(property, list);;
    

    int32_t index2 = 0;;
    

        while(index2 < propertyNameValueVector->size())
        {

    std::string propertyName = JavaBoxes::unbox<std::string>(propertyNameValueVector->get(index2++));;
    

                        if(propertyNameValueVector->size() > 1)
                        
                                    {
                                    
    std::string propertyValue = JavaBoxes::unbox<std::string>(propertyNameValueVector->get(index2++));;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPREQUEST))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("\nProperty Name: ") +JavaString::valueOf(propertyName)) +JavaString::valueOf("\nProperty Value: ")) +JavaString::valueOf(propertyValue), this, "generatePackagePropertiesHashMap()");
    

                                    }
                                
packagePropertiesHashMap->put(propertyName, propertyValue);
    

                                    }
                                
                        else {
                            packagePropertiesHashMap->put(propertyName, StringUtil::getInstance()->EMPTY_STRING);
    

                        }
                            
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return packagePropertiesHashMap;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAM_CPP
