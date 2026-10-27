
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
        



        #ifndef ADMIN_TAGS_MULTIPARTREQUESTPARAMFORWARDTAG_H
        #define ADMIN_TAGS_MULTIPARTREQUESTPARAMFORWARDTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class JspTagException;
class Tag;
class MultipartRequestParamForwardHelper;
class StdUtil;
class AbResponseHandler;
class LicensingException;
#include <tags/CustomTagSupport.h>
class HelperTag;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ParentInventoryTagHelper;
class AbTagData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MultipartRequestParamForwardTag: public CustomTagSupport {


            
    public: MultipartRequestParamForwardTag();
        
    private: std::string page;

    private: std::string command;

    private: BasicArrayList* paramVector;

    public: void setPage(std::string page);

    public: void setCommand(std::string command);

    public: void setParamVector(BasicArrayList* paramVector);

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_MULTIPARTREQUESTPARAMFORWARDTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_MULTIPARTREQUESTPARAMFORWARDTAG_H_COMPLETE)
        #define ADMIN_TAGS_MULTIPARTREQUESTPARAMFORWARDTAG_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<javax/servlet/jsp/tagext/Tag.h>)
#include <javax/servlet/jsp/tagext/Tag.h>
#endif
#if __has_include(<admin/taghelpers/MultipartRequestParamForwardHelper.h>)
#include <admin/taghelpers/MultipartRequestParamForwardHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<tags/CustomTagSupport.h>)
#include <tags/CustomTagSupport.h>
#endif
#if __has_include(<tags/HelperTag.h>)
#include <tags/HelperTag.h>
#endif
#if __has_include("admin/tags/ParentInventoryTagHelper.h")
#include "admin/tags/ParentInventoryTagHelper.h"
#endif
#if __has_include("admin/tags/AbTagData.h")
#include "admin/tags/AbTagData.h"
#endif

        #endif
    
