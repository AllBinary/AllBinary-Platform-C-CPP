
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCOMPOSITE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCOMPOSITE_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoHttpInterface.h"
#include "TransformInfoInterface.h"

class TransformInfoHttpComposite
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: TransformInfoHttpInterface transformInfoInterface;

public: TransformInfoHttpComposite(TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface getTransformInfoInterface();

    public: WeblisketSession getWeblisketSession();

    public: PageContext getPageContext();

    public: HashMap<any, any> getPropertiesHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCOMPOSITE_H
