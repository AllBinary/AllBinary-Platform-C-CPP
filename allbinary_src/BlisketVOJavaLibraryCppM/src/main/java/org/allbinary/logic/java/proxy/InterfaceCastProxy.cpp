
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_PROXY_INTERFACECASTPROXY_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_PROXY_INTERFACECASTPROXY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/proxy/InterfaceCastProxy.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/lang/reflect/Proxy.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/java/proxy/InvocationHandler.h"


InterfaceCastProxy::InterfaceCastProxy(Object* anyType){
this->anyType= anyType;
    
}


    auto InterfaceCastProxy::newInstance(Object* anyType) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Proxy::newProxyInstance(anyType->getClass()getClassLoader(), anyType->getClass()->getInterfaces(), new InterfaceCastProxy(anyType));;
    
}


                //@Throws(Throwable.constructor)
            
    auto InterfaceCastProxy::invoke(Object* proxyObject, Method* proxyMethod, std::vector<Object*> proxyArgs) -> Object*{

    std::string methodName = proxyMethod->getName();;
    

    Method* realMethod = this->anyType->getClass()->getMethod(methodName, proxyMethod->getParameterTypes());;
    

                        if(!realMethod->isAccessible())
                        realMethod->setAccessible(true);
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return proxyMethod->invoke(this->anyType, proxyArgs);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_PROXY_INTERFACECASTPROXY_CPP
