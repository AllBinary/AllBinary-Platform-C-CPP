
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InterfaceUtil
            : public Object
         {

    public: static std::string viewAll(Class* myClass, std::string lineBreak);

    public: static Class* getClass()(std::string interfaceName, std::vector<Class*> interfaces);

    public: static bool isImplemented(Class* clazz, Object* anyType);

    public: static bool isImplemented(std::string className, Object* anyType);

    public: static std::string isImplementedView(Class* clazz, Object* anyType);

private: InterfaceUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_H
