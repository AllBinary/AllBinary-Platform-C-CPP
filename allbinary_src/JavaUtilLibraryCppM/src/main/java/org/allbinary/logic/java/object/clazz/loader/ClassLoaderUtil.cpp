
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_LOADER_CLASSLOADERUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_LOADER_CLASSLOADERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/anyType/clazz/loader/ClassLoaderUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ClassLoaderUtil::ClassLoaderUtil(){
}


                //@Throws(Exception.constructor)
            
    auto ClassLoaderUtil::getName(Object* anyType) -> std::string{

    ClassLoader* classLoader = anyType->getClass()getClassLoader();;
    

                        if(classLoader != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::valueOf("ClassLoader: ") +JavaString::valueOf(classLoader->getClass()->getName());
    

                                    }
                                



                            throw Exception("Unable to get ClassLoader");
                    
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_LOADER_CLASSLOADERUTIL_CPP
