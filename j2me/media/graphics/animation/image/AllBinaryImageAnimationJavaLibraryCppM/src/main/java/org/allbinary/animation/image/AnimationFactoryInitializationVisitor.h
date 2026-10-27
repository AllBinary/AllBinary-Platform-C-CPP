
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
class PositionStrings;
class CommonLabels;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnimationFactoryInitializationVisitor
            : public virtual Object
         {


            
    public: AnimationFactoryInitializationVisitor();
        
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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_ANIMATIONFACTORYINITIALIZATIONVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ANIMATIONFACTORYINITIALIZATIONVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/math/PositionStrings.h>)
#include <org/allbinary/math/PositionStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
