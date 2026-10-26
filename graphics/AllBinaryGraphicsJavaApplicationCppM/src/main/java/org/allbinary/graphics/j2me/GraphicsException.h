
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

            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/GuiLog.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GraphicsException: public java::lang::Exception {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GuiLog guiLog = GuiLog::getInstance();

public: GraphicsException(std::string msg, Object* obj, std::string method);

public: GraphicsException(std::string msg, std::string className, std::string method);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_GRAPHICSEXCEPTION_H
