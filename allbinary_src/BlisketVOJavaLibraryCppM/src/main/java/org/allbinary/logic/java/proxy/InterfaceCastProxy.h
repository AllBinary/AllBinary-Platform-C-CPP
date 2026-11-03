
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InterfaceCastProxy
            : public virtual Object
        , public virtual java::lang::reflect::InvocationHandler {

    public: static Object* newInstance(Object* anyType);
    public: static Object* newInstance(const std::string& anyType) { return newInstance(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static Object* newInstance(BoxValue anyType) { return newInstance(JavaBoxes::toObject(anyType)); }

    private: Object* anyType;

private: InterfaceCastProxy(Object* anyType);

                //@Throws(Throwable.constructor)
            
    public: Object* invoke(Object* proxyObject, Method* proxyMethod, std::vector<Object*> proxyArgs);
    public: Object* invoke(const std::string& proxyObject, Method* proxyMethod, std::vector<Object*> proxyArgs) { return invoke(JavaString::box(proxyObject), proxyMethod, proxyArgs); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* invoke(BoxValue proxyObject, Method* proxyMethod, std::vector<Object*> proxyArgs) { return invoke(JavaBoxes::toObject(proxyObject), proxyMethod, proxyArgs); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_PROXY_INTERFACECASTPROXY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_PROXY_INTERFACECASTPROXY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_PROXY_INTERFACECASTPROXY_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
#endif
#if __has_include(<java/lang/reflect/Proxy.h>)
#include <java/lang/reflect/Proxy.h>
#endif
#if __has_include("org/allbinary/logic/java/proxy/InvocationHandler.h")
#include "org/allbinary/logic/java/proxy/InvocationHandler.h"
#endif

        #endif
    
