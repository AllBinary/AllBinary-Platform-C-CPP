
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
        



        #ifndef ADMIN_TAGS_TABLETAG_H
        #define ADMIN_TAGS_TABLETAG_H

            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/SqlStrings.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/PropertiesTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TableTag: public PropertiesTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string enabled;

    private: TagHelperFactoryInterface tagHelperFactoryInterface;

    private: TagHelperFactoryInterface tagRequestHelperFactoryInterface;

    private: Object* requestObject;

    private: Integer current;

    private: Integer total;

public: TableTag();

    public: void setIsSelected(std::string enabled);

                //@Throws(Exception.constructor)
            
    public: bool isEnabled();

    protected: void setTagHelperFactory(TagHelperFactoryInterface tagHelperFactoryInterface);

    protected: TagHelperFactoryInterface getTagHelperFactoryInterface();

    protected: void setTagRequestHelperFactory(TagHelperFactoryInterface tagHelperFactoryInterface);

    protected: TagHelperFactoryInterface getTagRequestHelperFactoryInterface();

    public: void setCurrent(Integer current);

    public: Integer getCurrent();

    public: void setTotal(Integer total);

    public: Integer getTotal();

                //@Throws(LicensingException.constructor)
            
    public: std::string drop();

                //@Throws(LicensingException.constructor)
            
    public: std::string create();

                //@Throws(LicensingException.constructor)
            
    public: std::string restore();

                //@Throws(LicensingException.constructor)
            
    public: std::string backup();

                //@Throws(LicensingException.constructor)
            
    public: std::string insert();

                //@Throws(LicensingException.constructor)
            
    public: std::string delete_();

                //@Throws(LicensingException.constructor)
            
    public: std::string update();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_TABLETAG_H
