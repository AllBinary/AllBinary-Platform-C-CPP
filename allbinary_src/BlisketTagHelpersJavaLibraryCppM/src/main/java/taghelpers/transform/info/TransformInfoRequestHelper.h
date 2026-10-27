
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
        



        #ifndef TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPER_H
        #define TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class PageContext;
#include <admin/taghelpers/ModifyTable.h>
class TransformInfoEntityBuilder;
class LogUtil;
class TransformInfoHttpInterface;
class TransformInfoHttpStoreNoManipulation;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoRequestHelper: public ModifyTable {

    /*protected*/ public: LogUtil* logUtil;

    private: TransformInfoHttpInterface* transformInfoInterface;

public: TransformInfoRequestHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

    public: std::string update();

    public: std::string insert();

    public: std::string delete_();

};

            


        #endif //TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPER_H_COMPLETE)
        #define TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<admin/taghelpers/ModifyTable.h>)
#include <admin/taghelpers/ModifyTable.h>
#endif
#if __has_include(<org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>)
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreNoManipulation.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreNoManipulation.h>
#endif

        #endif
    
