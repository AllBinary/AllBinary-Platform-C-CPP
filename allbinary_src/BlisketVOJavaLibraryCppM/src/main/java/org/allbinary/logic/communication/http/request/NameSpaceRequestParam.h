
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAM_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
class StdUtil;
class LogUtil;
class StringUtil;
class Tokenizer;
class HtmlNameMathData;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NameSpaceRequestParamData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NameSpaceRequestParam
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayList* nameSpaceVector;

    private: HashMap<Object*, Object*>* nameSpacePropertiesHashMap;

    private: std::string value;

public: NameSpaceRequestParam(std::string nameSpace, std::string value);

    public: BasicArrayList* getPackages();

    public: HashMap<Object*, Object*>* getPackageProperties(int32_t packageIndex);

    public: std::string getValue();

                //@Throws(Exception.constructor)
            
    private: HashMap<Object*, Object*>* generatePackagePropertiesHashMap(std::string properties);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAM_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAM_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/tokens/Tokenizer.h>)
#include <org/allbinary/logic/string/tokens/Tokenizer.h>
#endif
#if __has_include(<org/allbinary/logic/visual/dhtml/html/name/HtmlNameMathData.h>)
#include <org/allbinary/logic/visual/dhtml/html/name/HtmlNameMathData.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h")
#include "org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h"
#endif

        #endif
    
