
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/logic/visual/dhtml/html/name/HtmlNameMathData.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NameSpaceRequestParamData.h"

class NameSpaceRequestParam
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: BasicArrayList nameSpaceVector;

    private: HashMap<Object*, Object*> nameSpacePropertiesHashMap;

    private: std::string value;

public: NameSpaceRequestParam(std::string nameSpace, std::string value);

    public: BasicArrayList getPackages();

    public: HashMap<Object*, Object*> getPackageProperties(int32_t packageIndex);

    public: std::string getValue();

                //@Throws(Exception.constructor)
            
    private: HashMap<Object*, Object*> generatePackagePropertiesHashMap(std::string properties);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAM_H
