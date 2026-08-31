
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

      
#include <java/util/Vector.h>

      
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: nameSpaceVector: Vector;

    private: nameSpacePropertiesHashMap: HashMap<any, any>;

    private: value: string;

public constructor (string nameSpace, string value){

            super();
        this.nameSpaceVector= new Vector();
    
this.nameSpacePropertiesHashMap= new HashMap<any, any>();
    
this.value= value;
    

    beginIndex: int32_t = nameSpace!.indexOf(NameSpaceRequestParamData.NAME)!;;
    

                        if(beginIndex < 0)
                        
                                    {
                                    


                            throw new Exception("Not a NameSpaceRequest");
                    

                                    }
                                

    packages: string = nameSpace!.substring(beginIndex +NameSpaceRequestParamData.NAME.length() +NameSpaceRequestParamData.SEP.length())!;;
    

    sepTokenizer: Tokenizer = new Tokenizer(NameSpaceRequestParamData.SEP);;
    

    nameSpaceWithPropertiesVector: BasicArrayList = sepTokenizer!.getTokensFromString(packages, new BasicArrayListD())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nSep Tokens: " +nameSpaceWithPropertiesVector!.toString(), this, "NameSpaceRequestParam()");
    

                                    }
                                

    nameSpaceAndPropertiesTokenizer: Tokenizer = new Tokenizer(NameSpaceRequestParamData.PROPERTIES);;
    

    packageIndex: int32_t = 0;;
    

    list: BasicArrayList = new BasicArrayListD();;
    

    index: int32_t = 0;;
    

    size: int32_t = nameSpaceWithPropertiesVector!.size()!;;
    

        while(index < size)
        {

    nameSpaceWithProperties: string = nameSpaceWithPropertiesVector!.get(index++) as string;;
    
list.clear();
    

    nameSpaceAndPropertiesVector: BasicArrayList = nameSpaceAndPropertiesTokenizer!.getTokensFromString(nameSpaceWithProperties, list)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nPackageName and PackageName Properties Tokens: " +nameSpaceAndPropertiesVector!.toString(), this, "NameSpaceRequestParam()");
    

                                    }
                                

                        if(nameSpaceAndPropertiesVector!.size() > 0)
                        
                                    {
                                    
    packageName: string = nameSpaceAndPropertiesVector!.get(0) as string;;
    

                        if(packageName == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Package Name Is Null");
                    

                                    }
                                
this.nameSpaceVector!.add(packageName);
    

                        if(nameSpaceAndPropertiesVector!.size() > 1)
                        
                                    {
                                    
    properties: string = nameSpaceAndPropertiesVector!.get(1) as string;;
    

    packagePropertiesHashMap: HashMap<any, any> = this.generatePackagePropertiesHashMap(properties)!;;
    
this.nameSpacePropertiesHashMap!.put(packageIndex.toString(), packagePropertiesHashMap);
    

                                    }
                                
packageIndex++;
    

                                    }
                                
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("NameSpace: " +this.nameSpaceVector!.toString(), this, "NameSpaceRequestParam()");
    

                                    }
                                
}


    public Vector getPackages(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("NameSpace: " +this.nameSpaceVector!.toString(), this, "getPackages()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.nameSpaceVector;
    
}


    public HashMap<any, any> getPackageProperties(int32_t packageIndex){

    packagePropertiesHashMap: HashMap<any, any> = this.nameSpacePropertiesHashMap!.get(packageIndex.toString()) as HashMap<any, any>;;
    

                        if(packagePropertiesHashMap == 
                                    null
                                )
                        
                                    {
                                    packagePropertiesHashMap= new HashMap<any, any>();
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Package Properties: " +packagePropertiesHashMap!.toString(), this, "getPackagesProperties()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return packagePropertiesHashMap;
    
}


    public string getValue(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nValue: " +this.value, this, "getValue()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.value;
    
}


                //@Throws(Exception.constructor)
            
    HashMap<any, any> generatePackagePropertiesHashMap(string properties){

    propertiesTokenizer: Tokenizer = new Tokenizer(NameSpaceRequestParamData.PROPERTIESSEPARATOR);;
    

    packagePropertiesHashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    propertyVector: BasicArrayList = propertiesTokenizer!.getTokensFromString(properties, new BasicArrayListD())!;;
    

    list: BasicArrayList = new BasicArrayListD();;
    

    propertyTokenizer: Tokenizer = new Tokenizer(HtmlNameMathData.getInstance()!.EQUALS);;
    

    index: int32_t = 0;;
    

    size: int32_t = propertyVector!.size()!;;
    

        while(index < size)
        {

    property: string = propertyVector!.get(index) as string;;
    
list.clear();
    

    propertyNameValueVector: BasicArrayList = propertyTokenizer!.getTokensFromString(property, list)!;;
    

    index2: int32_t = 0;;
    

        while(index2 < propertyNameValueVector!.size())
        {

    propertyName: string = propertyNameValueVector!.get(index2++) as string;;
    

                        if(propertyNameValueVector!.size() > 1)
                        
                                    {
                                    
    propertyValue: string = propertyNameValueVector!.get(index2++) as string;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nProperty Name: " +propertyName +"\nProperty Value: " +propertyValue, this, "generatePackagePropertiesHashMap()");
    

                                    }
                                
packagePropertiesHashMap!.put(propertyName, propertyValue);
    

                                    }
                                
                        else {
                            packagePropertiesHashMap!.put(propertyName, StringUtil.getInstance()!.EMPTY_STRING);
    

                        }
                            
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return packagePropertiesHashMap;
    
}


};

            

