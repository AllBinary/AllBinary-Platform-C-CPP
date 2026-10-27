
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Direction;
class GameState;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdConfiguration
            : public virtual Object
         {

    public: std::string INNERACTIVE;

    public: std::string LEADBOLT;

    public: std::string ADMOB;

public: AdConfiguration(std::vector<Object*> advertIdArray);

    public: std::vector<Direction*> getValidAdSpots();

    public: void process(GameState* gameState);

    public: void processDemo(int32_t state);

    public: void setShowAds();

    public: void setToggleAds(bool showAds);

    public: bool isShowAds();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H_COMPLETE
        #if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/game/state/GameState.h>)
#include <org/allbinary/game/state/GameState.h>
#endif

        #endif
    
