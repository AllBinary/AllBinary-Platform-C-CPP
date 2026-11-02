
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_BASICPROBABILITYAIDATAFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_BASICPROBABILITYAIDATAFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class Canvas;
class SmallIntegerSingletonFactory;
class NoTimeDelayHelper;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputProbability;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicProbabilityAIDataFactory
            : public virtual Object
         {


            
    public: BasicProbabilityAIDataFactory();
        
    public: ABHashtable<Object*, Object*>* getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_BASICPROBABILITYAIDATAFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_BASICPROBABILITYAIDATAFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_BASICPROBABILITYAIDATAFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/time/NoTimeDelayHelper.h>)
#include <org/allbinary/time/NoTimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/ag/ai/InputProbability.h")
#include "org/allbinary/game/ag/ai/InputProbability.h"
#endif

        #endif
    
