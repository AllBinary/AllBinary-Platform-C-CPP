
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/Tag.h>

      
#include <admin/taghelpers/MultipartRequestParamForwardHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
#include <tags/HelperTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/ParentInventoryTagHelper.h"
#include "admin/tags/AbTagData.h"

class MultipartRequestParamForwardTag: public CustomTagSupport {

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
