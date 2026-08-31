
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Throwable.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/lang/reflect/Proxy.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InvocationHandler.h"

class InterfaceCastProxy
            : public Object
        : public java.lang.reflect.InvocationHandler {
        

    public static any newInstance(any = {} anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Proxy.newProxyInstance(anyType!.constructor.namegetClassLoader(), anyType!.constructor.name.getInterfaces(), new InterfaceCastProxy(anyType));;
    
}


    private: anyType: any;

private constructor (any = {} anyType){

            super();
        this.anyType= anyType;
    
}


                //@Throws(Throwable.constructor)
            
    public any invoke(any = {} proxyObject, Method proxyMethod, std::vector<any> proxyArgs){

    methodName: string = proxyMethod!.getName()!;;
    

    realMethod: Method = this.anyType!.constructor.name.getMethod(methodName, proxyMethod!.getParameterTypes())!;;
    

                        if(!realMethod!.isAccessible())
                        realMethod!.setAccessible(true)



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return proxyMethod!.invoke(this.anyType, proxyArgs);;
    
}


};

            

