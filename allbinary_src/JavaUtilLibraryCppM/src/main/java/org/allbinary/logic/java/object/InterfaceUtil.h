
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InterfaceUtil
            : public Object
         {
        

    public static string viewAll(Function myClass, string lineBreak);

    public static Function constructor(string interfaceName, std::vector<Function> interfaces);

    public static bool isImplemented(Function clazz, any = {} anyType);

    public static bool isImplemented(string className, any = {} anyType);

    public static string isImplementedView(Function clazz, any = {} anyType);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_H
