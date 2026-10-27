
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ANIMATIONFACTORYINITIALIZATIONVISITOR_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ANIMATIONFACTORYINITIALIZATIONVISITOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AnimationFactoryInitializationVisitor
            : public Object
         {

    public: int32_t width= 0;

    public: int32_t height= 0;

    public: int32_t dx= 0;

    public: int32_t dy= 0;

    public: int32_t originalDx= 0;

    public: int32_t originalDy= 0;

    public: void visit();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ANIMATIONFACTORYINITIALIZATIONVISITOR_H
