
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
        



            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/OutputTypeData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <taghelpers/transform/info/TransformInfoRequestHelperFactory.h>

      
#include <tags/ModifyTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoTag: public ModifyTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string name;

    private: std::string storeName;

    private: std::string objectFile;

    private: std::string anyType;

    private: std::string objectConfigFile;

    private: std::string objectConfig;

    private: std::string templateFile;

    private: std::string template;

    private: std::string dataFile;

    private: std::string data;

    private: std::string type;

public: TransformInfoTag() : ModifyTag(TransformInfoRequestHelperFactory()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: TransformInfoTag(TagHelperFactoryInterface tagHelperFactoryInterface) : ModifyTag(tagHelperFactoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void setName(std::string value){
this->name= value;
    
this->getPropertiesHashMap().put(TransformInfoData::getInstance().NAME, this->name);
    
}


    public: void setStoreName(std::string value){
this->storeName= value;
    
this->getPropertiesHashMap().put(StoreFrontData::getInstance().NAME, this->storeName);
    
}


    public: void setObjectFile(std::string value){
this->objectFile= value;
    
this->getPropertiesHashMap().put(TransformInfoData::getInstance().OBJECTFILENAME, this->objectFile);
    
}


    public: void setObject(std::string value){
this->anyType= value;
    
this->getPropertiesHashMap().put(TransformInfoData::getInstance().OBJECT, this->anyType);
    
}


    public: void setTemplateFile(std::string value){
this->templateFile= value;
    
this->getPropertiesHashMap().put(TransformInfoData::getInstance().TEMPLATEFILENAME, this->templateFile);
    
}


    public: void setTemplate(std::string value){
this->template= value;
    
this->getPropertiesHashMap().put(TransformInfoData::getInstance().TEMPLATE, this->template);
    
}


    public: void setDataFile(std::string value){
this->dataFile= value;
    
this->getPropertiesHashMap().put(TransformInfoData::getInstance().DATAFILENAME, this->dataFile);
    
}


    public: void setData(std::string value){
this->data= value;
    
this->getPropertiesHashMap().put(TransformInfoData::getInstance().DATA, this->data);
    
}


    public: void setObjectConfigFile(std::string value){
this->objectConfigFile= value;
    
this->getPropertiesHashMap().put(TransformInfoData::getInstance().OBJECTCONFIGFILENAME, this->objectConfigFile);
    
}


    public: void setObjectConfig(std::string value){
this->objectConfig= value;
    
this->getPropertiesHashMap().put(TransformInfoData::getInstance().OBJECTCONFIG, this->objectConfig);
    
}


    public: void setType(std::string value){
this->type= value;
    
this->getPropertiesHashMap().put(OutputTypeData::getInstance().NAME, this->type);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("TransformInfoTag type set: " +this->type, this, "setType");
    

                                    }
                                
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getObjectFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->objectFile;
    
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doStartTag();;
    

                //: 
} catch(e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}


};

            

