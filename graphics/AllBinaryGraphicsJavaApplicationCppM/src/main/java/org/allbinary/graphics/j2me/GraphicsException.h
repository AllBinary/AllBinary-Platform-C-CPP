
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_GRAPHICSEXCEPTION_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_GRAPHICSEXCEPTION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GuiLog;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GraphicsException: public java::lang::Exception {

    /*protected*/ public: LogUtil* logUtil;

    private: GuiLog* guiLog;

public: GraphicsException(std::string msg, Object* obj, std::string method);

public: GraphicsException(std::string msg, std::string className, std::string method);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_GRAPHICSEXCEPTION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_GRAPHICSEXCEPTION_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_GRAPHICSEXCEPTION_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/GuiLog.h>)
#include <org/allbinary/logic/communication/log/GuiLog.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif

        #endif
    
