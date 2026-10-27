
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIOR_H
        #define ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnimationBehavior
            : public virtual Object
         {

    private: static AnimationBehavior* instance_owner();
    private: static AnimationBehavior* instance;

    public: static AnimationBehavior* getInstance();


            
    public: AnimationBehavior();
        
    public: void reset();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIOR_H_COMPLETE
        
        #endif
    
