
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGESPECIFICFACTORY_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGESPECIFICFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLImageSpecificFactory
            : public Object
         {

    private: static OpenGLImageSpecificFactory instance() { return OpenGLImageSpecificFactory(); }

    public: static OpenGLImageSpecificFactory getInstance();

    public: bool updating = false;

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGESPECIFICFACTORY_H
