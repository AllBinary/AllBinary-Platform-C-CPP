
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_PROXY_INTERFACECASTPROXY_H
        #define ORG_ALLBINARY_LOGIC_JAVA_PROXY_INTERFACECASTPROXY_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Throwable.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/lang/reflect/Proxy.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InvocationHandler.h"

class InterfaceCastProxy
            : public Object
        : public java.lang.reflect.InvocationHandler {
        

    public static any newInstance(any = {} anyType);

    private: anyType: any;

private constructor (any = {} anyType);

                //@Throws(Throwable.constructor)
            
    public any invoke(any = {} proxyObject, Method proxyMethod, std::vector<any> proxyArgs);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_PROXY_INTERFACECASTPROXY_H
