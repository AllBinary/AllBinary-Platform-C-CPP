
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: nameSpaceVector: Vector;

    private: nameSpacePropertiesHashMap: HashMap<any, any>;

    private: value: string;

public constructor (string nameSpace, string value);

    public Vector getPackages();

    public HashMap<any, any> getPackageProperties(int32_t packageIndex);

    public string getValue();

                //@Throws(Exception.constructor)
            
    HashMap<any, any> generatePackagePropertiesHashMap(string properties);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAM_H
