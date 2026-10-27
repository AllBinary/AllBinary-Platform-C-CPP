
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class JspTagException;
class TagHelperFactoryInterface;
class StoreFrontData;
class AbResponseHandler;
class LogUtil;
class OutputTypeData;
class TransformInfoData;
class TransformInfoRequestHelperFactory;
#include <tags/ModifyTag.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoTag: public ModifyTag {

    /*protected*/ public: LogUtil* logUtil;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_H_COMPLETE)
        #define TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_H_COMPLETE
        #if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<admin/taghelpers/TagHelperFactoryInterface.h>)
#include <admin/taghelpers/TagHelperFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/OutputTypeData.h>)
#include <org/allbinary/logic/io/OutputTypeData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>
#endif
#if __has_include(<taghelpers/transform/info/TransformInfoRequestHelperFactory.h>)
#include <taghelpers/transform/info/TransformInfoRequestHelperFactory.h>
#endif
#if __has_include(<tags/ModifyTag.h>)
#include <tags/ModifyTag.h>
#endif

        #endif
    
