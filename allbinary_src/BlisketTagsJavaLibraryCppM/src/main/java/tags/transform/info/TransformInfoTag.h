
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
        



        #ifndef TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_H
        #define TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: std::string name;

    private: std::string storeName;

    private: std::string objectFile;

    private: std::string anyType;

    private: std::string objectConfigFile;

    private: std::string objectConfig;

    private: std::string templateFile;

    private: std::string template_;

    private: std::string dataFile;

    private: std::string data;

    private: std::string type;

public: TransformInfoTag();

public: TransformInfoTag(TagHelperFactoryInterface* tagHelperFactoryInterface);

    public: void setName(std::string value);

    public: void setStoreName(std::string value);

    public: void setObjectFile(std::string value);

    public: void setObject(std::string value);

    public: void setTemplateFile(std::string value);

    public: void setTemplate(std::string value);

    public: void setDataFile(std::string value);

    public: void setData(std::string value);

    public: void setObjectConfigFile(std::string value);

    public: void setObjectConfig(std::string value);

    public: void setType(std::string value);

    public: std::string getName();

    public: std::string getObjectFile();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_H
