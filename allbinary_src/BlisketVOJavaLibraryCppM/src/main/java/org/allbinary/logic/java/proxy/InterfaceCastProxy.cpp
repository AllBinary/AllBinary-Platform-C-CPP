
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

class InterfaceCastProxy
            : public Object
        , public java::lang::reflect::InvocationHandler {

    public: static Object* newInstance(Object* anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Proxy::newProxyInstance(anyType->getClass()getClassLoader(), anyType->getClass()->getInterfaces(), new InterfaceCastProxy(anyType));;
    
}


    private: Object* anyType;

private: InterfaceCastProxy(Object* anyType){
this->anyType= anyType;
    
}


                //@Throws(Throwable.constructor)
            
    public: Object* invoke(Object* proxyObject, Method* proxyMethod, std::vector<Object*> proxyArgs){

    std::string methodName = proxyMethod->getName();;
    

    Method* realMethod = this->anyType->getClass()->getMethod(methodName, proxyMethod->getParameterTypes());;
    

                        if(!realMethod->isAccessible())
                        realMethod->setAccessible(true);
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return proxyMethod->invoke(this->anyType, proxyArgs);;
    
}


};

            

