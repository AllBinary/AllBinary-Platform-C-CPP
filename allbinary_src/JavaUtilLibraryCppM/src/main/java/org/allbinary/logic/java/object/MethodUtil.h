
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_METHODUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_METHODUTIL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ParamsUtil.h"

class MethodUtil
            : public Object
         {

    public: static std::string viewAll(Class* myClass, std::string lineBreak);

private: MethodUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_METHODUTIL_H
