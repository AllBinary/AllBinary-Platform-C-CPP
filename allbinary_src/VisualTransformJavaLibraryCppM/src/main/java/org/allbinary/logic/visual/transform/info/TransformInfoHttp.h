
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/AbContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfo.h"
#include "TransformInfoHttpInterface.h"
#include "TransformInfoData.h"

class TransformInfoHttp: public TransformInfo, public TransformInfoHttpInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AbContext abContext;

public: TransformInfoHttp(HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext, bool crud);

public: TransformInfoHttp(HttpServletRequest request, HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext);

public: TransformInfoHttp(HashMap<Object*, Object*> databaseHashMap, HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext);

public: TransformInfoHttp(HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext);

public: TransformInfoHttp(TransformInfoHttp parentViewOfThisTransformInfoInterface);

                //@Throws(Exception.constructor)
            
    private: void set(HashMap<Object*, Object*> hashMap);

    public: WeblisketSessionInterface getWeblisketSession();

    public: PageContext getPageContext();

    public: HashMap<Object*, Object*> getPropertiesHashMap();

                //@Throws(Exception.constructor)
            
    public: AbPath getTemplateFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath getObjectConfigFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath getDataFilePath();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_H
