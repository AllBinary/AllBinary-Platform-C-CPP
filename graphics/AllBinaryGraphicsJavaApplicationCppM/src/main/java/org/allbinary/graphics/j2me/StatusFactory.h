
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_STATUSFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_STATUSFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MyFrame;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StatusFactory
            : public virtual Object
         {

    private: static StatusFactory* instance_owner();
    private: static StatusFactory* instance;

    public: static StatusFactory* getInstance();


            
    public: StatusFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    private: const std::string SETSTATUS = "setStatus";

    private: const std::string STATUS_LABEL = "Status: ";

    public: void setStatusNoLog(std::string status);

    public: void setStatus(std::string status);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_STATUSFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_STATUSFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_STATUSFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/MyFrame.h")
#include "org/allbinary/graphics/j2me/MyFrame.h"
#endif

        #endif
    
