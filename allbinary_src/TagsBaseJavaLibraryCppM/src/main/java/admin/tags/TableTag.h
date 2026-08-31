
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

            #include "../../java/lang/Class.h"
        
            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Integer.h"
        
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: enabled: string;

    private: tagHelperFactoryInterface: TagHelperFactoryInterface;

    private: tagRequestHelperFactoryInterface: TagHelperFactoryInterface;

    private: requestObject: any;

    private: current: Integer;

    private: total: Integer;

public constructor ();

    public setIsSelected(string enabled);

                //@Throws(Exception.constructor)
            
    public bool isEnabled();

    setTagHelperFactory(TagHelperFactoryInterface tagHelperFactoryInterface);

    TagHelperFactoryInterface getTagHelperFactoryInterface();

    setTagRequestHelperFactory(TagHelperFactoryInterface tagHelperFactoryInterface);

    TagHelperFactoryInterface getTagRequestHelperFactoryInterface();

    public setCurrent(Integer current);

    public Integer getCurrent();

    public setTotal(Integer total);

    public Integer getTotal();

                //@Throws(LicensingException.constructor)
            
    public string drop();

                //@Throws(LicensingException.constructor)
            
    public string create();

                //@Throws(LicensingException.constructor)
            
    public string restore();

                //@Throws(LicensingException.constructor)
            
    public string backup();

                //@Throws(LicensingException.constructor)
            
    public string insert();

                //@Throws(LicensingException.constructor)
            
    public string delete();

                //@Throws(LicensingException.constructor)
            
    public string update();

                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_TABLETAG_H
