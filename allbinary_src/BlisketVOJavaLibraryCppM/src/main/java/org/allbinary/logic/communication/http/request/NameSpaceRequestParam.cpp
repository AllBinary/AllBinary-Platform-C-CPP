
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/logic/visual/dhtml/html/name/HtmlNameMathData.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NameSpaceRequestParamData.h"

class NameSpaceRequestParam
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: BasicArrayList nameSpaceVector;

    private: HashMap<any, any> nameSpacePropertiesHashMap;

    private: std::string value;

public: NameSpaceRequestParam(std::string nameSpace, std::string value){
this->nameSpaceVector= BasicArrayListD();
    
this->nameSpacePropertiesHashMap= StdUtil::getInstance().createHashMap();
    
this->value= value;
    

    int32_t beginIndex = nameSpace.indexOf(NameSpaceRequestParamData::NAME);;
    

                        if(beginIndex < 0)
                        
                                    {
                                    


                            throw Exception("Not a NameSpaceRequest");
                    

                                    }
                                

    std::string packages = nameSpace.substring(beginIndex +NameSpaceRequestParamData::NAME.length() +NameSpaceRequestParamData::SEP.length());;
    

    Tokenizer sepTokenizer = Tokenizer(NameSpaceRequestParamData::SEP);;
    

    BasicArrayList nameSpaceWithPropertiesVector = sepTokenizer.getTokensFromString(packages, BasicArrayListD());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPREQUEST))
                        
                                    {
                                    this->logUtil.putF("\nSep Tokens: " +nameSpaceWithPropertiesVector.toString(), this, "NameSpaceRequestParam()");
    

                                    }
                                

    Tokenizer nameSpaceAndPropertiesTokenizer = Tokenizer(NameSpaceRequestParamData::PROPERTIES);;
    

    int32_t packageIndex = 0;;
    

    BasicArrayList list = BasicArrayListD();;
    

    int32_t index = 0;;
    

    int32_t size = nameSpaceWithPropertiesVector.size();;
    

        while(index < size)
        {

    std::string nameSpaceWithProperties = nameSpaceWithPropertiesVector.get(index++) as string;;
    
list.clear();
    

    BasicArrayList nameSpaceAndPropertiesVector = nameSpaceAndPropertiesTokenizer.getTokensFromString(nameSpaceWithProperties, list);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPREQUEST))
                        
                                    {
                                    this->logUtil.putF("\nPackageName and PackageName Properties Tokens: " +nameSpaceAndPropertiesVector.toString(), this, "NameSpaceRequestParam()");
    

                                    }
                                

                        if(nameSpaceAndPropertiesVector.size() > 0)
                        
                                    {
                                    
    std::string packageName = nameSpaceAndPropertiesVector.get(0) as string;;
    

                        if(false)
                        
                                    {
                                    


                            throw Exception("Package Name Is Null");
                    

                                    }
                                
this->nameSpaceVector.add(packageName);
    

                        if(nameSpaceAndPropertiesVector.size() > 1)
                        
                                    {
                                    
    std::string properties = nameSpaceAndPropertiesVector.get(1) as string;;
    

    HashMap<any, any> packagePropertiesHashMap = this->generatePackagePropertiesHashMap(properties);;
    
this->nameSpacePropertiesHashMap.put(std::to_string(packageIndex)packagePropertiesHashMap);
    

                                    }
                                
packageIndex++;
    

                                    }
                                
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPREQUEST))
                        
                                    {
                                    this->logUtil.putF("NameSpace: " +this->nameSpaceVector.toString(), this, "NameSpaceRequestParam()");
    

                                    }
                                
}


    public: BasicArrayList getPackages(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPREQUEST))
                        
                                    {
                                    this->logUtil.putF("NameSpace: " +this->nameSpaceVector.toString(), this, "getPackages()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nameSpaceVector;
    
}


    public: HashMap<any, any> getPackageProperties(int32_t packageIndex){

    HashMap<any, any> packagePropertiesHashMap = this->nameSpacePropertiesHashMap.get(std::to_string(packageIndex)) as HashMap<any, any>;;
    

                        if(packagePropertiesHashMap == 
                                    nullptr
                                )
                        
                                    {
                                    packagePropertiesHashMap= StdUtil::getInstance().createHashMap();
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPREQUEST))
                        
                                    {
                                    this->logUtil.putF("Package Properties: " +packagePropertiesHashMap.toString(), this, "getPackagesProperties()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return packagePropertiesHashMap;
    
}


    public: std::string getValue(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPREQUEST))
                        
                                    {
                                    this->logUtil.putF("\nValue: " +this->value, this, "getValue()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


                //@Throws(Exception.constructor)
            
    private: HashMap<any, any> generatePackagePropertiesHashMap(std::string properties){

    Tokenizer propertiesTokenizer = Tokenizer(NameSpaceRequestParamData::PROPERTIESSEPARATOR);;
    

    HashMap<any, any> packagePropertiesHashMap = StdUtil::getInstance().createHashMap();;
    

    BasicArrayList propertyVector = propertiesTokenizer.getTokensFromString(properties, BasicArrayListD());;
    

    BasicArrayList list = BasicArrayListD();;
    

    Tokenizer propertyTokenizer = Tokenizer(HtmlNameMathData::getInstance().EQUALS);;
    

    int32_t index = 0;;
    

    int32_t size = propertyVector.size();;
    

        while(index < size)
        {

    std::string property = propertyVector.get(index) as string;;
    
list.clear();
    

    BasicArrayList propertyNameValueVector = propertyTokenizer.getTokensFromString(property, list);;
    

    int32_t index2 = 0;;
    

        while(index2 < propertyNameValueVector.size())
        {

    std::string propertyName = propertyNameValueVector.get(index2++) as string;;
    

                        if(propertyNameValueVector.size() > 1)
                        
                                    {
                                    
    std::string propertyValue = propertyNameValueVector.get(index2++) as string;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPREQUEST))
                        
                                    {
                                    this->logUtil.putF("\nProperty Name: " +propertyName +"\nProperty Value: " +propertyValue, this, "generatePackagePropertiesHashMap()");
    

                                    }
                                
packagePropertiesHashMap.put(propertyName, propertyValue);
    

                                    }
                                
                        else {
                            packagePropertiesHashMap.put(propertyName, StringUtil::getInstance().EMPTY_STRING);
    

                        }
                            
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return packagePropertiesHashMap;
    
}


};

            

